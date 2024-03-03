%{ 
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #include "syntax_analyzer.tab.h"

    FILE *fp;
    char filename[1024];
    int line_number = 1;
    int errors = 0;

    int integer_binary_to_decimal(char *number) {
        int decimal = 0;
        int base = 1;
        int len = strlen(number);
        int i;
        for (i = len - 1; i >= 0; i--) {
            if (number[i] == '1') {
                decimal += base;
            }
            base = base * 2;
        }
        return decimal;
    }

    int integer_octal_to_decimal(char *number) {
        int decimal = 0;
        int base = 1;
        int len = strlen(number);
        printf("number is %s\n", number);

        for (int i = len - 1; i >= 0; i--) {
            decimal += (number[i] - '0') * base;
            base = base * 8;
        }
        return decimal;
    }

    int integer_hexadecimal_to_decimal(char *number) {
        int decimal = 0;
        int base = 1;
        int len = strlen(number);

        for (int i = len - 1; i >= 0; i--) {
            if (number[i] >= '0' && number[i] <= '9') {
                decimal += (number[i] - '0') * base;
            } else if (number[i] >= 'A' && number[i] <= 'F') {
                decimal += (number[i] - 'A' + 10) * base;
            } else if (number[i] >= 'a' && number[i] <= 'f') {
                decimal += (number[i] - 'a' + 10) * base;
            }
            base = base * 16;
        }
        return decimal;
    }

    double convertExponentialPart(const char *str) {
        return strtod(str, NULL); // Convert exponential notation directly
    }

    double convertFractionalPart(const char *fraction, int base) 
    {
        double result = 0.0;
        int len = strlen(fraction);
        for (int i = 0; i < len; i++) {
            if (fraction[i] >= '0' && fraction[i] <= '9') {
                result += (fraction[i] - '0') / pow(base, i + 1);
            } else if (fraction[i] >= 'A' && fraction[i] <= 'F') {
                result += (10 + fraction[i] - 'A') / pow(base, i + 1);
            } else if (fraction[i] >= 'a' && fraction[i] <= 'f') {
                result += (10 + fraction[i] - 'a') / pow(base, i + 1);
            }
        }
        return result;
    }

    double convertToFloat(const char *text) 
    {
        char *endPtr;
        double result = 0.0;
        if (strncmp(text, "0x", 2) == 0) { // Hexadecimal
            result = strtod(text, &endPtr);
        } else if (strncmp(text, "0o", 2) == 0) { // Octal
            result = strtoul(text + 2, &endPtr, 8);
        } else if (strncmp(text, "0b", 2) == 0) { // Binary
            result = strtoul(text + 2, &endPtr, 2);
        } else { // Decimal or exponential
            result = strtod(text, &endPtr);
        }

        if (*endPtr == '.') { // Handle fractional part
            result += convertFractionalPart(endPtr + 1, (*text == '0' && *(text + 1) == 'x') ? 16 : 10);
            endPtr = strchr(endPtr + 1, 'E');
        }

        if (endPtr && *endPtr == 'E') { // Handle exponential part
            result *= pow(10, convertExponentialPart(endPtr + 1));
        }

        return result;
    }

    void error_handler()
    {
        printf("Error #%d found at line %d.\n", errors, line_number);  

        // Ανοίγω το αρχείο κώδικα
        FILE *fp1 = fopen(filename, "r");
        int i = 1;
        char line_text[4096];
        // διαβάζω line_number γραμμές ώστε να υπάρχει στο line_text 
        // η γραμμή στην οποία έγινε το σφάλμα
        while (i <= line_number)
        {
            memset(line_text, 0, 4096);     // Διαγράφουμε ό,τι χαρακτήρες είχε line_text.
            fgets(line_text,  4096, fp1);   // διαβάζει την επομένη γραμμή από το αρχείο και την αποθηκεύει στο line_text
            i++;                            
        }

        // Τυπώνουμε τη γραμμή που έχει γίνει λεκτικό σφάλμα.
        printf("The error line is:\n%s\n", line_text);
        fclose(fp1);

        // Σε περίπτωση που έχουμε δύο λεκτικά σφάλματα σταματάμε το πρόγραμμα.
        if (errors==2) 
        {
            printf("You have code issues. Fix them and then come back.\n"); 
            exit(1);
        }
    }

%}

%x STRING
%x COMMENTS_SINGLELINE
%x COMMENTS_MULTILINE

%option noyywrap
%option case-insensitive

%%
(typedef)       {printf("Found TYPEDEF\n");     return T_TYPEDEF;}
(char)          {printf("Found CHAR\n");        return T_CHAR;}
(int)           {printf("Found INT\n");         return T_INT;}
(float)         {printf("Found FLOAT\n");       return T_FLOAT;}
(enum)          {printf("Found ENUM\n");        return T_ENUM;}
(class)         {printf("Found CLASS\n");       return T_CLASS;}
(private)       {printf("Found PRIVATE\n");     return T_PRIVATE;}
(protected)     {printf("Found PROTECTED\n");   return T_PROTECTED;}
(public)        {printf("Found PUBLIC\n");      return T_PUBLIC;}
(void)          {printf("Found VOID\n");        return T_VOID;}
(static)        {printf("Found STATIC\n");      return T_STATIC;}
(continue)      {printf("Found CONTINUE\n");    return T_CONTINUE;}
(break)         {printf("Found BREAK\n");       return T_BREAK;}
(this)          {printf("Found THIS\n");        return T_THIS;}
(if)            {printf("Found IF\n");          return T_IF;}
(else)          {printf("Found ELSE\n");        return T_ELSE;}
(while)         {printf("Found WHILE\n");       return T_WHILE;}
(for)           {printf("Found FOR\n");         return T_FOR;}
(switch)        {printf("Found SWITCH\n");      return T_SWITCH;}
(case)          {printf("Found CASE\n");        return T_CASE;}
(default)       {printf("Found DEFAULT\n");     return T_DEFAULT;}
(return)        {printf("Found RETURN\n");      return T_RETURN;}
(cin)           {printf("Found CIN\n");         return T_CIN;}
(cout)          {printf("Found COUT\n");        return T_COUT;}
(length)        {printf("Found LENGTH\n");      return T_LENGTH;}
(main)          {printf("Found MAIN\n");        return T_MAIN;}

\"                          { BEGIN(STRING);    memset(yylval.str, 0, 4096);}
<STRING>\\[nfrtbv"]         { strcat(yylval.str, yytext); /* Βάζω στο τέλος του str ό,τι διάβασα τώρα από την ΚΕ. */}
<STRING>\\\\                { strcat(yylval.str, yytext); }
<STRING>\\\n                { line_number++; }
<STRING>\"                  { BEGIN(INITIAL); printf("String is finished: %s\n", yylval.str); return T_STRING; }
<STRING>[^\\"\n]+           { strcat(yylval.str, yytext); }
<STRING>\n                  { line_number++; }


"/*"                            { BEGIN(COMMENTS_MULTILINE); }
<COMMENTS_MULTILINE>"*/"        { BEGIN(INITIAL); printf("Multiline comment section ended\n");}
<COMMENTS_MULTILINE>[^*\n]+     { ; }
<COMMENTS_MULTILINE>"*"         { ; }
<COMMENTS_MULTILINE>\n          { line_number++; }

"//"                            { BEGIN(COMMENTS_SINGLELINE); }
<COMMENTS_SINGLELINE>\n         { BEGIN(INITIAL); line_number++; printf("Single line comment section ended\n"); } 
<COMMENTS_SINGLELINE>[^\n]+     { ; }


"||"            {strcpy(yylval.str, "||");      printf("Found OROP || %d\n", T_OROP);        return T_OROP;}
"&&"            {strcpy(yylval.str, "&&");      printf("Found ANDOP && %d\n", T_ANDOP);       return T_ANDOP;}
"=="            {strcpy(yylval.str, "==");      printf("Found EQUOP == %d\n", T_EQUOP);       return T_EQUOP;}
"!="            {strcpy(yylval.str, "!=");      printf("Found EQUOP\n");       return T_EQUOP;}
">"             {strcpy(yylval.str, ">");       printf("Found RELOP > %d\n", T_RELOP);        return T_RELOP;}
">="            {strcpy(yylval.str, ">=");      printf("Found RELOP >= %d\n", T_RELOP);        return T_RELOP;}
"<"             {strcpy(yylval.str, "<");       printf("Found RELOP\n");        return T_RELOP;}
"<="            {strcpy(yylval.str, "<=");      printf("Found RELOP\n");        return T_RELOP;}
"+"             {strcpy(yylval.str, "+");       printf("Found ADDOP\n");        return T_ADDOP;}
"-"             {strcpy(yylval.str, "-");       printf("Found ADDOP\n");        return T_ADDOP;}
"*"             {strcpy(yylval.str, "*");       printf("Found MULOP\n");        return T_MULOP;}
"/"             {strcpy(yylval.str, "/");       printf("Found MULOP\n");        return T_MULOP;}
"%"             {strcpy(yylval.str, "%");       printf("Found MULOP\n");        return T_MULOP;}
"!"             {strcpy(yylval.str, "!");       printf("Found NOTOP\n");        return T_NOTOP;}
"++"            {strcpy(yylval.str, "++");      printf("Found INCDEC\n");       return T_INCDEC;}
"--"            {strcpy(yylval.str, "--");      printf("Found INCDEC\n");       return T_INCDEC;}
"SIZEOF"        {strcpy(yylval.str, "SIZEOF");  printf("Found SIZEOP\n");       return T_SIZEOP;}

"("     {strcpy(yylval.str, "(");  printf("Found LPAREN\n");        return T_LPAREN;}
")"     {strcpy(yylval.str, ")");  printf("Found RPAREN\n");        return T_RPAREN;}
";"     {strcpy(yylval.str, ";");  printf("Found SEMI\n");          return T_SEMI;}
"."     {strcpy(yylval.str, ".");  printf("Found DOT\n");           return T_DOT;}
","     {strcpy(yylval.str, ",");  printf("Found COMMA\n");         return T_COMMA;}
"="     {strcpy(yylval.str, "=");  printf("Found ASSIGN\n");        return T_ASSIGN;}
":"     {strcpy(yylval.str, ":");  printf("Found COLON\n");         return T_COLON;}
"["     {strcpy(yylval.str, "[");  printf("Found LBRACK\n");        return T_LBRACK;}
"]"     {strcpy(yylval.str, "]");  printf("Found RBRACK\n");        return T_RBRACK;}
"&"     {strcpy(yylval.str, "&");  printf("Found REFER\n");         return T_REFER;}
"{"     {strcpy(yylval.str, "{");  printf("Found LBRACE\n");        return T_LBRACE;}
"}"     {strcpy(yylval.str, "}");  printf("Found RBRACE\n");        return T_RBRACE;}
"::"    {strcpy(yylval.str, "::");  printf("Found METH\n");         return T_METH;}
">>"    {strcpy(yylval.str, ">>");  printf("Found INP\n");          return T_INP;}
"<<"    {strcpy(yylval.str, "<<");  printf("Found OUT\n");          return T_OUT;}

[a-z]([_]*[a-z0-9]+)* {strcpy(yylval.str, yytext);  printf("Found ID named %s\n", yylval.str);  return T_ID;}

([1-9][0-9]*)?"."("0"|(0*[1-9]0*)+)("E"("+"|"-")?[0-9]+)?           { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
("0"|[1-9][0-9]*)"E"("+"|"-")?[0-9]+                                { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0b"(1[01]*)?"."([0]*[1][01]*)("E"("+"|"-")?[01]+)?                 { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0b"("0"|"1"[01]*)"E"("+"|"-")?[01]+                                { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0o"("0"|[1-7][0-7]*)?"."([0]*[1-7][0-7]*)("E"("+"|"-")?[0-7]+)?    { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0o"("0"|[1-7][0-7]*)"E"("+"|"-")?[0-7]+                            { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0x"([1-9A-F][0-9A-F]*)?"."("0"|("0"*[1-9A-F]0*)+)("E"("+"|"-")?[0-9A-F]+)?   { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}
"0x"("0"|[1-9A-F][0-9A-F]*)"E"("+"|"-")?[0-9A-F]+                             { yylval.real = convertToFloat(yytext);   printf("Found FCONST value %lf\n", yylval.real); return T_FCONST;}

"0"                     {yylval.integer = 0;                                        printf("Found ICONST value %d\n", yylval.integer);      return T_ICONST;}
[1-9][0-9]*             {yylval.integer = atoi(yytext);                             printf("Found ICONST value %d\n", yylval.integer);      return T_ICONST;}
"0b"[1][0-1]*           {yylval.integer = integer_binary_to_decimal(yytext);        printf("Found ICONST value %d\n", yylval.integer);      return T_ICONST;}
"0o"[1-7][0-7]*         {yylval.integer = integer_octal_to_decimal(yytext);         printf("Found ICONST value %d\n", yylval.integer);      return T_ICONST;}
"0x"[1-9A-F][0-9A-F]*   {yylval.integer = integer_hexadecimal_to_decimal(yytext);   printf("Found ICONST value %d\n", yylval.integer);      return T_ICONST;}

"'"[ -~]"'"             {yylval.character = yytext[1]; printf("Found CHAR value %s\n", yytext);    return T_CCONST;}
" "
"\t"
"\n"    {line_number++;}
"\r"

.       {errors++; error_handler(); }

%%

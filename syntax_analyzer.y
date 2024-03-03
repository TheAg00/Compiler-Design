%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    char namefile[512];
    extern FILE *yyin;
    extern int yychar;
    unsigned int syntax_errors = 0;
    extern unsigned int line;

    int yylex(void);
    void yyerror(const char *s) {
        fprintf(stderr, "Error: %s\n", s);
    }

%}

%union  {
    unsigned int integer;
    double real;
    char str[4096];
    char character;
};

%token<str> T_TYPEDEF T_CHAR T_INT T_FLOAT T_ENUM T_CLASS T_PRIVATE T_PROTECTED T_PUBLIC T_VOID T_STATIC T_CONTINUE T_BREAK T_THIS T_IF T_ELSE T_WHILE T_FOR T_SWITCH T_CASE T_DEFAULT T_RETURN T_CIN T_COUT T_LENGTH T_MAIN T_ID T_OROP T_ANDOP T_EQUOP T_RELOP T_ADDOP T_MULOP T_NOTOP T_INCDEC T_SIZEOP T_STRING T_LPAREN T_RPAREN T_SEMI T_DOT T_COMMA T_ASSIGN T_COLON T_LBRACK T_RBRACK T_REFER T_LBRACE T_RBRACE T_METH T_INP T_OUT
%token<integer> T_ICONST
%token<real> T_FCONST
%token<character> T_CCONST
%token T_EOF 0

%left T_COMMA
%right T_ASSIGN 
%left T_OROP
%left T_ANDOP
%left T_NOTOP
%left T_EQUOP
%left T_RELOP
%left T_ADDOP
%left T_MULOP
%nonassoc T_SIZEOP 
%left T_INCDEC T_DOT T_LBRACK T_RBRACK T_LPAREN T_RPAREN

%nonassoc T_ELSE
%nonassoc T_THEN

%start program 

%%
program : 
    global_declarations main_function
    ;

global_declarations : 
    global_declarations global_declaration
    |
    ;

global_declaration :
    typedef_declaration
    | class_declaration
    | enum_declaration
    | global_var_declaration        
    | func_declaration
    ;

typedef_declaration :
    T_TYPEDEF typename T_ID dims T_SEMI
    ;

typename :
    standard_type
    | T_ID    
    ;

standard_type :
    T_CHAR    
    | T_INT   
    | T_FLOAT 
    | T_VOID  
    ;

dims: 
    dims dim 
    | 
    ;

dim:
    T_LBRACK T_ICONST T_RBRACK  
    | T_LBRACK T_RBRACK      
    ;

class_declaration: 
    T_CLASS T_ID class_body T_SEMI
    ;

class_body: 
    parent T_LBRACE members_methods T_RBRACE
    ;

parent: 
    T_COLON T_ID  
    |
    ;

members_methods: 
    members_methods access member_or_method
    | access member_or_method;

access: 
    T_PRIVATE T_COLON       
    | T_PROTECTED T_COLON   
    | T_PUBLIC T_COLON      
    |                       
    ;

member_or_method: 
    member
    | method 
    ;

member: 
    var_declaration 
    ;

var_declaration: 
    typename variabledefs T_SEMI
    ;

variabledefs: variabledefs T_COMMA variabledef
    | variabledef
    ;

variabledef: 
    T_ID dims 
    ;

method: 
    short_func_declaration
    ;

short_func_declaration: 
    short_par_func_header T_SEMI
    | nopar_func_header T_SEMI
    ;

short_par_func_header:
    func_header_start T_LPAREN parameter_type_list T_RPAREN
    ;

func_header_start: 
    typename T_ID 
    ;

parameter_type_list :
    parameter_type_list T_COMMA typename pass_dims
    | typename pass_dims
    ;

pass_dims :
    dims 
    | T_REFER
    ;

nopar_func_header :
    func_header_start T_LPAREN T_RPAREN
    ;

enum_declaration :
    T_ENUM T_ID enum_body T_SEMI    
    ;

enum_body :
    T_LBRACE id_list T_RBRACE      
    ;
    
id_list :
    id_list T_COMMA T_ID initializer    
    | T_ID initializer                  
    ;

global_var_declaration :
    typename init_variabledefs T_SEMI
    ;

init_variabledefs :
    init_variabledefs T_COMMA init_variabledef
    | init_variabledef
    ;

init_variabledef :
    variabledef initializer
    ;

initializer :
    T_ASSIGN init_value     
    |                       
    ;

init_value :
    sign constant                       
    | sign T_ID                         
    | T_LBRACE init_values  T_RBRACE     
    | T_STRING   
    ;

sign :
    T_ADDOP                             
    |                                   
    ;

constant :
    T_CCONST        
    | T_ICONST      
    | T_FCONST      
    ;

init_values :
    init_values T_COMMA init_value      
    | init_value                        
    ;

func_declaration :
    short_func_declaration      
    | full_func_declaration 
    ;

full_func_declaration :
    full_par_func_header T_LBRACE decl_statements T_RBRACE          
    | nopar_class_func_header T_LBRACE decl_statements T_RBRACE      
    | nopar_func_header T_LBRACE decl_statements T_RBRACE           
    ;

full_par_func_header :
    class_func_header_start T_LPAREN parameter_list T_RPAREN
    | func_header_start T_LPAREN parameter_list T_RPAREN
    ;

class_func_header_start :
    typename func_class T_ID        
    ;

func_class :
    T_ID T_METH                     
    ;

parameter_list :
    parameter_list T_COMMA typename pass_variabledef
    | typename pass_variabledef
    ;

pass_variabledef :
    variabledef
    | T_REFER T_ID
    ;

nopar_class_func_header :
    class_func_header_start T_LPAREN T_RPAREN
    ;

decl_statements : 
    declarations statements
    | declarations
    | statements 
    |
    ;

declarations : 
    declarations decltype typename variabledefs T_SEMI
    | decltype typename variabledefs T_SEMI
    ;

decltype : 
    T_STATIC 
    |
    ;

statements : 
    statements statement 
    | statement 
    ;

statement : 
    expression_statement
    | if_statement
    | while_statement
    | for_statement
    | switch_statement
    | return_statement
    | io_statement
    | comp_statement
    | T_CONTINUE T_SEMI
    | T_BREAK T_SEMI
    | T_SEMI
    ;

expression_statement : 
    general_expression T_SEMI
    ;

general_expression : 
    general_expression T_COMMA general_expression
    | assignment
    ;

assignment : 
    variable T_ASSIGN assignment
    | variable T_ASSIGN T_STRING
    | expression 
    ;

variable : 
    variable T_LBRACK general_expression T_RBRACK
    | variable T_DOT T_ID
    | decltype T_ID
    | T_THIS
    ;

expression : 
    expression T_OROP expression
    | expression T_ANDOP expression
    | expression T_EQUOP expression
    | expression T_RELOP expression
    | expression T_ADDOP expression
    | expression T_MULOP expression
    | T_NOTOP expression
    | T_ADDOP expression
    | T_SIZEOP expression
    | T_INCDEC variable
    | variable T_INCDEC
    | variable
    | variable T_LPAREN expression_list T_RPAREN
    | T_LENGTH T_LPAREN expression_list T_RPAREN
    | constant
    | T_LPAREN general_expression T_RPAREN 
    | T_LPAREN standard_type T_RPAREN      
    ;
            
expression_list : 
    general_expression
    |
    ;

if_statement : 
    if_statement_with_else
    | if_statement_without_else
    ;

if_statement_with_else : 
    T_IF T_LPAREN general_expression T_RPAREN statement T_ELSE statement
    ;

if_statement_without_else : 
    T_IF T_LPAREN general_expression T_RPAREN statement
    ;


while_statement :
    T_WHILE T_LPAREN general_expression T_RPAREN statement
    ;

for_statement :
    T_FOR T_LPAREN optexpr T_SEMI optexpr T_SEMI optexpr T_RPAREN statement
    ;

optexpr :
    general_expression
    |
    ;

switch_statement :
    T_SWITCH T_LPAREN general_expression T_RPAREN switch_tail
    ;

switch_tail :
    T_LBRACE decl_cases T_RBRACE 
    | single_casestatement
    ;

decl_cases :
    declarations casestatements
    | declarations
    | casestatements
    |
    ;

casestatements :
    casestatements casestatement
    | casestatement
    ;

casestatement :
    T_CASE constant T_COLON casestatement
    | T_CASE constant T_COLON statements
    | T_DEFAULT T_COLON statements

single_casestatement :
  T_CASE constant T_COLON single_casestatement 
  | T_CASE constant T_COLON statement
  ;

return_statement :
    T_RETURN optexpr T_SEMI 
    ;

io_statement :
    T_CIN T_INP in_list T_SEMI 
    | T_COUT T_OUT out_list T_SEMI
    ;

in_list :
    in_list T_INP in_item
    | in_item
    ;

in_item :
    variable
    ;

out_list :
    out_list T_OUT out_item 
    | out_item
    ;

out_item :
    general_expression 
    | T_STRING 
    ;
 
comp_statement :
    T_LBRACE decl_statements T_RBRACE 
    ;

main_function :
    main_header T_LBRACE decl_statements T_RBRACE 
    ;

main_header :
    T_INT T_MAIN T_LPAREN T_RPAREN 
    ;

%%

int main(int argc, char **argv) {
    int out;

	if (argc!=2)
    {
        printf("Error reading file!\n");
		exit(1);
    }
		
	yyin = fopen(argv[1],"r");
    strcpy(namefile, argv[1]);

    if (yyin == NULL) 
    {
        printf("File not found!\n");
        exit(1);
    }
        
    printf("Syntax analyzer started.\n");        
    out=yyparse();
    
    printf("\n\nSyntax analysis is over... ");
    if(!out) {
        printf("Success\n");
        fclose(yyin);
        return 0;
    }
    printf("Failure\n");
    fclose(yyin);
    return 1;
    
}
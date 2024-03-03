/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    T_EOF = 0,                     /* T_EOF  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_TYPEDEF = 258,               /* T_TYPEDEF  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_INT = 260,                   /* T_INT  */
    T_FLOAT = 261,                 /* T_FLOAT  */
    T_ENUM = 262,                  /* T_ENUM  */
    T_CLASS = 263,                 /* T_CLASS  */
    T_PRIVATE = 264,               /* T_PRIVATE  */
    T_PROTECTED = 265,             /* T_PROTECTED  */
    T_PUBLIC = 266,                /* T_PUBLIC  */
    T_VOID = 267,                  /* T_VOID  */
    T_STATIC = 268,                /* T_STATIC  */
    T_CONTINUE = 269,              /* T_CONTINUE  */
    T_BREAK = 270,                 /* T_BREAK  */
    T_THIS = 271,                  /* T_THIS  */
    T_IF = 272,                    /* T_IF  */
    T_ELSE = 273,                  /* T_ELSE  */
    T_WHILE = 274,                 /* T_WHILE  */
    T_FOR = 275,                   /* T_FOR  */
    T_SWITCH = 276,                /* T_SWITCH  */
    T_CASE = 277,                  /* T_CASE  */
    T_DEFAULT = 278,               /* T_DEFAULT  */
    T_RETURN = 279,                /* T_RETURN  */
    T_CIN = 280,                   /* T_CIN  */
    T_COUT = 281,                  /* T_COUT  */
    T_LENGTH = 282,                /* T_LENGTH  */
    T_MAIN = 283,                  /* T_MAIN  */
    T_ID = 284,                    /* T_ID  */
    T_OROP = 285,                  /* T_OROP  */
    T_ANDOP = 286,                 /* T_ANDOP  */
    T_EQUOP = 287,                 /* T_EQUOP  */
    T_RELOP = 288,                 /* T_RELOP  */
    T_ADDOP = 289,                 /* T_ADDOP  */
    T_MULOP = 290,                 /* T_MULOP  */
    T_NOTOP = 291,                 /* T_NOTOP  */
    T_INCDEC = 292,                /* T_INCDEC  */
    T_SIZEOP = 293,                /* T_SIZEOP  */
    T_STRING = 294,                /* T_STRING  */
    T_LPAREN = 295,                /* T_LPAREN  */
    T_RPAREN = 296,                /* T_RPAREN  */
    T_SEMI = 297,                  /* T_SEMI  */
    T_DOT = 298,                   /* T_DOT  */
    T_COMMA = 299,                 /* T_COMMA  */
    T_ASSIGN = 300,                /* T_ASSIGN  */
    T_COLON = 301,                 /* T_COLON  */
    T_LBRACK = 302,                /* T_LBRACK  */
    T_RBRACK = 303,                /* T_RBRACK  */
    T_REFER = 304,                 /* T_REFER  */
    T_LBRACE = 305,                /* T_LBRACE  */
    T_RBRACE = 306,                /* T_RBRACE  */
    T_METH = 307,                  /* T_METH  */
    T_INP = 308,                   /* T_INP  */
    T_OUT = 309,                   /* T_OUT  */
    T_ICONST = 310,                /* T_ICONST  */
    T_FCONST = 311,                /* T_FCONST  */
    T_CCONST = 312,                /* T_CCONST  */
    T_THEN = 313                   /* T_THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "syntax_analyzer.y"

    unsigned int integer;
    double real;
    char str[4096];
    char character;

#line 129 "syntax_analyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED  */

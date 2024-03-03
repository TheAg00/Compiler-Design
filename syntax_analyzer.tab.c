/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax_analyzer.y"

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


#line 89 "syntax_analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax_analyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* T_EOF  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_TYPEDEF = 3,                  /* T_TYPEDEF  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_INT = 5,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 6,                    /* T_FLOAT  */
  YYSYMBOL_T_ENUM = 7,                     /* T_ENUM  */
  YYSYMBOL_T_CLASS = 8,                    /* T_CLASS  */
  YYSYMBOL_T_PRIVATE = 9,                  /* T_PRIVATE  */
  YYSYMBOL_T_PROTECTED = 10,               /* T_PROTECTED  */
  YYSYMBOL_T_PUBLIC = 11,                  /* T_PUBLIC  */
  YYSYMBOL_T_VOID = 12,                    /* T_VOID  */
  YYSYMBOL_T_STATIC = 13,                  /* T_STATIC  */
  YYSYMBOL_T_CONTINUE = 14,                /* T_CONTINUE  */
  YYSYMBOL_T_BREAK = 15,                   /* T_BREAK  */
  YYSYMBOL_T_THIS = 16,                    /* T_THIS  */
  YYSYMBOL_T_IF = 17,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 18,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 19,                   /* T_WHILE  */
  YYSYMBOL_T_FOR = 20,                     /* T_FOR  */
  YYSYMBOL_T_SWITCH = 21,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 22,                    /* T_CASE  */
  YYSYMBOL_T_DEFAULT = 23,                 /* T_DEFAULT  */
  YYSYMBOL_T_RETURN = 24,                  /* T_RETURN  */
  YYSYMBOL_T_CIN = 25,                     /* T_CIN  */
  YYSYMBOL_T_COUT = 26,                    /* T_COUT  */
  YYSYMBOL_T_LENGTH = 27,                  /* T_LENGTH  */
  YYSYMBOL_T_MAIN = 28,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 29,                      /* T_ID  */
  YYSYMBOL_T_OROP = 30,                    /* T_OROP  */
  YYSYMBOL_T_ANDOP = 31,                   /* T_ANDOP  */
  YYSYMBOL_T_EQUOP = 32,                   /* T_EQUOP  */
  YYSYMBOL_T_RELOP = 33,                   /* T_RELOP  */
  YYSYMBOL_T_ADDOP = 34,                   /* T_ADDOP  */
  YYSYMBOL_T_MULOP = 35,                   /* T_MULOP  */
  YYSYMBOL_T_NOTOP = 36,                   /* T_NOTOP  */
  YYSYMBOL_T_INCDEC = 37,                  /* T_INCDEC  */
  YYSYMBOL_T_SIZEOP = 38,                  /* T_SIZEOP  */
  YYSYMBOL_T_STRING = 39,                  /* T_STRING  */
  YYSYMBOL_T_LPAREN = 40,                  /* T_LPAREN  */
  YYSYMBOL_T_RPAREN = 41,                  /* T_RPAREN  */
  YYSYMBOL_T_SEMI = 42,                    /* T_SEMI  */
  YYSYMBOL_T_DOT = 43,                     /* T_DOT  */
  YYSYMBOL_T_COMMA = 44,                   /* T_COMMA  */
  YYSYMBOL_T_ASSIGN = 45,                  /* T_ASSIGN  */
  YYSYMBOL_T_COLON = 46,                   /* T_COLON  */
  YYSYMBOL_T_LBRACK = 47,                  /* T_LBRACK  */
  YYSYMBOL_T_RBRACK = 48,                  /* T_RBRACK  */
  YYSYMBOL_T_REFER = 49,                   /* T_REFER  */
  YYSYMBOL_T_LBRACE = 50,                  /* T_LBRACE  */
  YYSYMBOL_T_RBRACE = 51,                  /* T_RBRACE  */
  YYSYMBOL_T_METH = 52,                    /* T_METH  */
  YYSYMBOL_T_INP = 53,                     /* T_INP  */
  YYSYMBOL_T_OUT = 54,                     /* T_OUT  */
  YYSYMBOL_T_ICONST = 55,                  /* T_ICONST  */
  YYSYMBOL_T_FCONST = 56,                  /* T_FCONST  */
  YYSYMBOL_T_CCONST = 57,                  /* T_CCONST  */
  YYSYMBOL_T_THEN = 58,                    /* T_THEN  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_program = 60,                   /* program  */
  YYSYMBOL_global_declarations = 61,       /* global_declarations  */
  YYSYMBOL_global_declaration = 62,        /* global_declaration  */
  YYSYMBOL_typedef_declaration = 63,       /* typedef_declaration  */
  YYSYMBOL_typename = 64,                  /* typename  */
  YYSYMBOL_standard_type = 65,             /* standard_type  */
  YYSYMBOL_dims = 66,                      /* dims  */
  YYSYMBOL_dim = 67,                       /* dim  */
  YYSYMBOL_class_declaration = 68,         /* class_declaration  */
  YYSYMBOL_class_body = 69,                /* class_body  */
  YYSYMBOL_parent = 70,                    /* parent  */
  YYSYMBOL_members_methods = 71,           /* members_methods  */
  YYSYMBOL_access = 72,                    /* access  */
  YYSYMBOL_member_or_method = 73,          /* member_or_method  */
  YYSYMBOL_member = 74,                    /* member  */
  YYSYMBOL_var_declaration = 75,           /* var_declaration  */
  YYSYMBOL_variabledefs = 76,              /* variabledefs  */
  YYSYMBOL_variabledef = 77,               /* variabledef  */
  YYSYMBOL_method = 78,                    /* method  */
  YYSYMBOL_short_func_declaration = 79,    /* short_func_declaration  */
  YYSYMBOL_short_par_func_header = 80,     /* short_par_func_header  */
  YYSYMBOL_func_header_start = 81,         /* func_header_start  */
  YYSYMBOL_parameter_type_list = 82,       /* parameter_type_list  */
  YYSYMBOL_pass_dims = 83,                 /* pass_dims  */
  YYSYMBOL_nopar_func_header = 84,         /* nopar_func_header  */
  YYSYMBOL_enum_declaration = 85,          /* enum_declaration  */
  YYSYMBOL_enum_body = 86,                 /* enum_body  */
  YYSYMBOL_id_list = 87,                   /* id_list  */
  YYSYMBOL_global_var_declaration = 88,    /* global_var_declaration  */
  YYSYMBOL_init_variabledefs = 89,         /* init_variabledefs  */
  YYSYMBOL_init_variabledef = 90,          /* init_variabledef  */
  YYSYMBOL_initializer = 91,               /* initializer  */
  YYSYMBOL_init_value = 92,                /* init_value  */
  YYSYMBOL_sign = 93,                      /* sign  */
  YYSYMBOL_constant = 94,                  /* constant  */
  YYSYMBOL_init_values = 95,               /* init_values  */
  YYSYMBOL_func_declaration = 96,          /* func_declaration  */
  YYSYMBOL_full_func_declaration = 97,     /* full_func_declaration  */
  YYSYMBOL_full_par_func_header = 98,      /* full_par_func_header  */
  YYSYMBOL_class_func_header_start = 99,   /* class_func_header_start  */
  YYSYMBOL_func_class = 100,               /* func_class  */
  YYSYMBOL_parameter_list = 101,           /* parameter_list  */
  YYSYMBOL_pass_variabledef = 102,         /* pass_variabledef  */
  YYSYMBOL_nopar_class_func_header = 103,  /* nopar_class_func_header  */
  YYSYMBOL_decl_statements = 104,          /* decl_statements  */
  YYSYMBOL_declarations = 105,             /* declarations  */
  YYSYMBOL_decltype = 106,                 /* decltype  */
  YYSYMBOL_statements = 107,               /* statements  */
  YYSYMBOL_statement = 108,                /* statement  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_general_expression = 110,       /* general_expression  */
  YYSYMBOL_assignment = 111,               /* assignment  */
  YYSYMBOL_variable = 112,                 /* variable  */
  YYSYMBOL_expression = 113,               /* expression  */
  YYSYMBOL_expression_list = 114,          /* expression_list  */
  YYSYMBOL_if_statement = 115,             /* if_statement  */
  YYSYMBOL_if_statement_with_else = 116,   /* if_statement_with_else  */
  YYSYMBOL_if_statement_without_else = 117, /* if_statement_without_else  */
  YYSYMBOL_while_statement = 118,          /* while_statement  */
  YYSYMBOL_for_statement = 119,            /* for_statement  */
  YYSYMBOL_optexpr = 120,                  /* optexpr  */
  YYSYMBOL_switch_statement = 121,         /* switch_statement  */
  YYSYMBOL_switch_tail = 122,              /* switch_tail  */
  YYSYMBOL_decl_cases = 123,               /* decl_cases  */
  YYSYMBOL_casestatements = 124,           /* casestatements  */
  YYSYMBOL_casestatement = 125,            /* casestatement  */
  YYSYMBOL_single_casestatement = 126,     /* single_casestatement  */
  YYSYMBOL_return_statement = 127,         /* return_statement  */
  YYSYMBOL_io_statement = 128,             /* io_statement  */
  YYSYMBOL_in_list = 129,                  /* in_list  */
  YYSYMBOL_in_item = 130,                  /* in_item  */
  YYSYMBOL_out_list = 131,                 /* out_list  */
  YYSYMBOL_out_item = 132,                 /* out_item  */
  YYSYMBOL_comp_statement = 133,           /* comp_statement  */
  YYSYMBOL_main_function = 134,            /* main_function  */
  YYSYMBOL_main_header = 135               /* main_header  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    55,    56,    60,    61,    62,    63,    64,
      68,    72,    73,    77,    78,    79,    80,    84,    85,    89,
      90,    94,    98,   102,   103,   107,   108,   111,   112,   113,
     114,   118,   119,   123,   127,   130,   131,   135,   139,   143,
     144,   148,   152,   156,   157,   161,   162,   166,   170,   174,
     178,   179,   183,   187,   188,   192,   196,   197,   201,   202,
     203,   204,   208,   209,   213,   214,   215,   219,   220,   224,
     225,   229,   230,   231,   235,   236,   240,   244,   248,   249,
     253,   254,   258,   262,   263,   264,   265,   269,   270,   274,
     275,   279,   280,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   298,   302,   303,   307,   308,   309,
     313,   314,   315,   316,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   340,   341,   345,   346,   350,   354,   359,   363,   367,
     368,   372,   376,   377,   381,   382,   383,   384,   388,   389,
     393,   394,   395,   398,   399,   403,   407,   408,   412,   413,
     417,   421,   422,   426,   427,   431,   435,   439
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_EOF", "error", "\"invalid token\"", "T_TYPEDEF", "T_CHAR", "T_INT",
  "T_FLOAT", "T_ENUM", "T_CLASS", "T_PRIVATE", "T_PROTECTED", "T_PUBLIC",
  "T_VOID", "T_STATIC", "T_CONTINUE", "T_BREAK", "T_THIS", "T_IF",
  "T_ELSE", "T_WHILE", "T_FOR", "T_SWITCH", "T_CASE", "T_DEFAULT",
  "T_RETURN", "T_CIN", "T_COUT", "T_LENGTH", "T_MAIN", "T_ID", "T_OROP",
  "T_ANDOP", "T_EQUOP", "T_RELOP", "T_ADDOP", "T_MULOP", "T_NOTOP",
  "T_INCDEC", "T_SIZEOP", "T_STRING", "T_LPAREN", "T_RPAREN", "T_SEMI",
  "T_DOT", "T_COMMA", "T_ASSIGN", "T_COLON", "T_LBRACK", "T_RBRACK",
  "T_REFER", "T_LBRACE", "T_RBRACE", "T_METH", "T_INP", "T_OUT",
  "T_ICONST", "T_FCONST", "T_CCONST", "T_THEN", "$accept", "program",
  "global_declarations", "global_declaration", "typedef_declaration",
  "typename", "standard_type", "dims", "dim", "class_declaration",
  "class_body", "parent", "members_methods", "access", "member_or_method",
  "member", "var_declaration", "variabledefs", "variabledef", "method",
  "short_func_declaration", "short_par_func_header", "func_header_start",
  "parameter_type_list", "pass_dims", "nopar_func_header",
  "enum_declaration", "enum_body", "id_list", "global_var_declaration",
  "init_variabledefs", "init_variabledef", "initializer", "init_value",
  "sign", "constant", "init_values", "func_declaration",
  "full_func_declaration", "full_par_func_header",
  "class_func_header_start", "func_class", "parameter_list",
  "pass_variabledef", "nopar_class_func_header", "decl_statements",
  "declarations", "decltype", "statements", "statement",
  "expression_statement", "general_expression", "assignment", "variable",
  "expression", "expression_list", "if_statement",
  "if_statement_with_else", "if_statement_without_else", "while_statement",
  "for_statement", "optexpr", "switch_statement", "switch_tail",
  "decl_cases", "casestatements", "casestatement", "single_casestatement",
  "return_statement", "io_statement", "in_list", "in_item", "out_list",
  "out_item", "comp_statement", "main_function", "main_header", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-270)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -270,    62,   282,  -270,   176,  -270,    47,  -270,    76,    93,
    -270,  -270,  -270,  -270,   121,  -270,  -270,  -270,    91,   144,
      58,  -270,  -270,  -270,  -270,   162,   164,   179,  -270,   187,
    -270,   212,   205,   201,   206,    -3,   215,    -4,  -270,   248,
    -270,   148,  -270,   289,   289,   167,   289,   289,  -270,   254,
     252,   241,   267,   258,   257,  -270,   265,    49,  -270,  -270,
     291,  -270,  -270,     1,    80,    98,  -270,   279,   280,  -270,
     284,   288,   290,   292,   107,   281,   283,   293,   591,   591,
     178,   591,    55,  -270,   289,  -270,  -270,  -270,  -270,   285,
     334,   181,   379,  -270,  -270,   104,  -270,   166,   185,  -270,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,  -270,   287,  -270,
       4,   154,   301,   305,   136,  -270,   215,    13,  -270,  -270,
    -270,   239,    26,  -270,  -270,  -270,    49,  -270,    41,  -270,
    -270,   306,   265,  -270,  -270,  -270,  -270,   176,  -270,   176,
    -270,  -270,   591,   591,   107,   591,   312,   298,   315,   178,
     500,   531,    66,   308,   133,     5,  -270,   321,   182,   313,
    -270,   181,   379,   336,   291,  -270,  -270,   591,  -270,   531,
     337,   557,   591,   591,   591,   591,   591,   591,   591,  -270,
     306,  -270,  -270,  -270,  -270,  -270,   338,  -270,   317,   323,
     327,    14,   176,  -270,   329,  -270,    43,  -270,  -270,  -270,
     326,     4,   195,   202,   339,   203,  -270,  -270,     5,    16,
    -270,  -270,   298,     0,  -270,   298,   341,  -270,  -270,  -270,
     291,   114,  -270,  -270,   342,  -270,  -270,  -270,    92,   200,
     133,   240,   141,   308,  -270,   215,  -270,  -270,  -270,  -270,
     176,   349,  -270,  -270,  -270,  -270,  -270,   340,   344,  -270,
      49,  -270,  -270,  -270,  -270,   469,   469,   107,    -6,  -270,
     178,  -270,   500,  -270,   228,  -270,   291,  -270,  -270,  -270,
    -270,   347,   249,   148,  -270,   361,  -270,   346,   262,    33,
    -270,  -270,  -270,  -270,  -270,  -270,  -270,   326,   469,   565,
     351,   262,   355,    50,   176,   356,   177,  -270,  -270,   368,
     424,   364,   469,   176,   177,  -270,  -270,   469,  -270,  -270,
     242,   379,  -270,   379,  -270
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    13,    14,    15,     0,     0,
      16,    12,     3,     5,     0,    11,     6,    69,     0,     0,
       0,     7,     8,     9,    70,     0,     0,     0,     2,     0,
      14,     0,     0,     0,    24,    18,    57,     0,    54,     0,
      39,     0,    40,    90,    90,     0,    90,    90,    18,     0,
       0,     0,     0,     0,     0,    77,    37,    63,    55,    52,
       0,    76,    47,    18,     0,     0,    89,     0,     0,   113,
       0,     0,     0,     0,    90,     0,     0,     0,    90,    90,
      90,    90,    90,   103,    90,    65,    66,    64,   128,     0,
      90,     0,    85,    92,    93,     0,   106,   125,   109,    94,
     133,   134,    95,    96,    97,    98,    99,   100,     0,    82,
       0,     0,     0,     0,     0,   167,    57,     0,    48,    23,
      21,    30,     0,    17,    62,    61,    63,    56,     0,    18,
      53,    46,    45,    80,    44,    79,    41,     0,    75,     0,
     101,   102,    90,    90,    90,    90,     0,   139,     0,    90,
      90,    90,   125,   121,   120,   123,   122,     0,     0,     0,
      73,     0,    83,   112,     0,    91,   104,    90,   124,    90,
       0,    90,    90,    90,    90,    90,    90,    90,    90,    71,
       0,    74,    72,   166,    10,    51,     0,    49,     0,     0,
       0,    30,     0,    20,     0,    68,     0,    59,    58,    81,
      18,     0,     0,     0,     0,     0,   112,   155,   160,     0,
     159,   164,   163,     0,   162,   131,     0,   130,   129,   165,
       0,     0,    36,   105,     0,   111,   108,   107,     0,   114,
     115,   116,   117,   118,   119,    57,    27,    28,    29,    22,
       0,     0,    26,    31,    33,    32,    38,     0,     0,    19,
      63,    60,    46,    43,    78,    90,    90,    90,     0,   156,
      90,   157,    90,   127,     0,    88,     0,   126,   110,    50,
      25,    18,     0,     0,    67,   136,   137,     0,     0,    90,
     141,   143,   158,   161,    87,    35,    34,    18,    90,    90,
       0,     0,     0,    90,     0,     0,   146,   149,   135,     0,
      90,     0,    90,     0,   144,   142,   148,    90,   154,   153,
      90,   152,   138,   151,   150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -270,  -270,  -270,  -270,  -270,    -2,   320,   -45,  -270,  -270,
    -270,  -270,  -270,   220,   172,  -270,  -270,  -205,   -13,  -270,
     412,  -270,   416,  -270,   222,   418,  -270,  -270,  -270,  -270,
    -270,   363,  -103,  -112,  -270,  -117,  -270,  -270,  -270,  -270,
    -270,  -270,   380,   223,  -270,   -18,   147,   -39,   -80,   -86,
    -270,   -65,   256,   -59,   -47,   259,  -270,  -270,  -270,  -270,
    -270,  -132,  -270,  -270,  -270,   137,  -269,   131,  -270,  -270,
    -270,   173,  -270,   170,  -270,  -270,  -270
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    12,    13,   164,    15,    56,   123,    16,
      53,    54,   191,   192,   242,   243,   244,   221,   133,   245,
     246,    18,   247,    64,   134,   248,    21,    51,   117,    22,
      37,    38,    58,   127,   128,    88,   196,    23,    24,    25,
      26,    39,    65,   135,    27,    89,    90,   146,    92,    93,
      94,    95,    96,    97,    98,   216,    99,   100,   101,   102,
     103,   148,   104,   280,   295,   296,   297,   281,   105,   106,
     209,   210,   213,   214,   107,    28,    29
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    36,    31,   114,    91,    91,   165,    91,    91,   147,
     162,   198,   204,   185,   195,   264,   278,   158,   132,   152,
     152,   155,   152,   188,   189,   190,   108,   306,   112,   113,
     129,   153,   154,   129,   156,   306,   272,   -42,    59,    63,
      60,   314,   261,   110,   279,    91,    66,    36,   170,    55,
     131,   161,   172,   180,   262,   291,   292,   186,   259,     5,
      30,     7,     3,    66,   187,   239,   159,    10,    66,   260,
     197,    69,   291,   292,   193,    32,   165,   202,   203,   147,
     205,   194,    77,   124,  -147,   212,   215,   250,   125,    78,
     208,    79,    80,    81,   251,    82,    85,    86,    87,   126,
      42,  -145,   223,   168,   215,    33,   169,   228,    43,   170,
      85,    86,    87,   172,   152,   152,   152,   152,   152,   152,
      66,   136,    34,    69,   137,   277,   229,   230,   231,   232,
     233,   234,   269,    40,    77,   200,   167,   201,   274,   138,
     268,    78,   139,    79,    80,    81,   166,    82,   167,  -140,
      35,   222,     5,    30,     7,   132,   265,   299,   266,   220,
      10,   290,    85,    86,    87,   175,   176,   177,   178,   275,
     276,     5,    30,     7,   301,   177,   178,    11,   184,    10,
       5,    30,     7,   122,    41,     5,    30,     7,    10,    62,
     241,    66,   147,    10,    69,   181,    11,   212,   139,   291,
     292,   208,   298,   168,    45,    11,   169,   222,   109,   170,
     163,   171,    44,   172,   308,   173,   174,   175,   176,   177,
     178,   312,   311,   218,   147,   165,   167,   165,   222,    46,
     313,   174,   175,   176,   177,   178,   255,    47,   241,   167,
     294,    48,   132,   256,   258,    49,   167,   167,   188,   189,
     190,    50,    52,   285,   303,    66,    67,    68,    69,    70,
      57,    71,    72,    73,   291,   292,    74,    75,    76,    77,
     284,   287,   266,   176,   177,   178,    78,    61,    79,    80,
      81,   116,    82,   118,    83,     4,     5,     6,     7,     8,
       9,   286,    84,   266,    10,   115,   119,    85,    86,    87,
     120,   220,    66,    67,    68,    69,    70,   121,    71,    72,
      73,    11,   122,    74,    75,    76,    77,    85,    86,    87,
     129,   140,   141,    78,   142,    79,    80,    81,   143,    82,
     144,    83,   145,   151,   149,   199,   160,   150,   179,    84,
     -86,   206,   167,   178,    85,    86,    87,    66,    67,    68,
      69,    70,   182,    71,    72,    73,   183,   207,    74,    75,
      76,    77,   217,   236,   219,   -12,   225,   235,    78,   237,
      79,    80,    81,   238,    82,   252,    83,   249,   271,   288,
     273,   257,   263,   267,    84,   -84,    42,   -42,   289,    85,
      86,    87,    66,    67,    68,    69,    70,   300,    71,    72,
      73,   302,   157,    74,    75,    76,    77,   305,   -90,   307,
     310,   240,   270,    78,    17,    79,    80,    81,    19,    82,
      20,    83,   253,   130,   254,   111,   293,   227,   224,    84,
     304,   309,   283,   282,    85,    86,    87,    66,    67,    68,
      69,    70,     0,    71,    72,    73,   278,     0,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,    78,     0,
      79,    80,    81,     0,    82,     0,    83,     0,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,    85,
      86,    87,    66,    67,    68,    69,    70,     0,    71,    72,
      73,     0,     0,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    78,     0,    79,    80,    81,     0,    82,
       0,    83,     0,    66,     0,     0,    69,     0,     0,    84,
       0,     0,     0,     0,    85,    86,    87,    77,     0,     0,
       0,     0,     0,     0,    78,     0,    79,    80,    81,   211,
      82,     0,     0,     0,    66,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,    85,    86,    87,    77,     0,
       0,     0,     0,     0,     0,    78,     0,    79,    80,    81,
      66,    82,  -132,    69,     0,     0,     0,     0,    66,     0,
       0,    69,     0,     0,    77,     0,    85,    86,    87,     0,
       0,    78,    77,    79,    80,    81,   226,    82,     0,    78,
       0,    79,    80,    81,    66,    82,  -140,    69,     0,     0,
       0,     0,    85,    86,    87,     0,     0,     0,    77,     0,
      85,    86,    87,     0,     0,    78,     0,    79,    80,    81,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    86,    87
};

static const yytype_int16 yycheck[] =
{
       2,    14,     4,    48,    43,    44,    92,    46,    47,    74,
      90,   128,   144,   116,   126,   220,    22,    82,    63,    78,
      79,    80,    81,     9,    10,    11,    44,   296,    46,    47,
      29,    78,    79,    29,    81,   304,   241,    40,    42,    41,
      44,   310,    42,    45,    50,    84,    13,    60,    43,    52,
      49,    90,    47,    49,    54,    22,    23,    44,    42,     4,
       5,     6,     0,    13,    51,    51,    84,    12,    13,    53,
      29,    16,    22,    23,    48,    28,   162,   142,   143,   144,
     145,    55,    27,    34,    51,   150,   151,    44,    39,    34,
     149,    36,    37,    38,    51,    40,    55,    56,    57,    50,
      42,    51,   167,    37,   169,    29,    40,   172,    50,    43,
      55,    56,    57,    47,   173,   174,   175,   176,   177,   178,
      13,    41,    29,    16,    44,   257,   173,   174,   175,   176,
     177,   178,   235,    42,    27,   137,    44,   139,   250,    41,
      48,    34,    44,    36,    37,    38,    42,    40,    44,    42,
      29,   164,     4,     5,     6,   200,    42,   289,    44,   161,
      12,   278,    55,    56,    57,    32,    33,    34,    35,   255,
     256,     4,     5,     6,   291,    34,    35,    29,    42,    12,
       4,     5,     6,    47,    40,     4,     5,     6,    12,    41,
     192,    13,   257,    12,    16,    41,    29,   262,    44,    22,
      23,   260,   288,    37,    40,    29,    40,   220,    41,    43,
      29,    45,    50,    47,   300,    30,    31,    32,    33,    34,
      35,   307,   302,    41,   289,   311,    44,   313,   241,    50,
     310,    31,    32,    33,    34,    35,    41,    50,   240,    44,
     279,    29,   287,    41,    41,    40,    44,    44,     9,    10,
      11,    50,    46,   266,   293,    13,    14,    15,    16,    17,
      45,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      42,   273,    44,    33,    34,    35,    34,    29,    36,    37,
      38,    29,    40,    42,    42,     3,     4,     5,     6,     7,
       8,    42,    50,    44,    12,    41,    29,    55,    56,    57,
      42,   303,    13,    14,    15,    16,    17,    50,    19,    20,
      21,    29,    47,    24,    25,    26,    27,    55,    56,    57,
      29,    42,    42,    34,    40,    36,    37,    38,    40,    40,
      40,    42,    40,    40,    53,    29,    51,    54,    51,    50,
      51,    29,    44,    35,    55,    56,    57,    13,    14,    15,
      16,    17,    51,    19,    20,    21,    51,    42,    24,    25,
      26,    27,    41,    46,    51,    29,    29,    29,    34,    46,
      36,    37,    38,    46,    40,    49,    42,    48,    29,    18,
      40,    42,    41,    41,    50,    51,    42,    40,    42,    55,
      56,    57,    13,    14,    15,    16,    17,    46,    19,    20,
      21,    46,    82,    24,    25,    26,    27,    51,    29,    41,
      46,   191,   240,    34,     2,    36,    37,    38,     2,    40,
       2,    42,   200,    60,   201,    45,   279,   171,   169,    50,
     293,   300,   262,   260,    55,    56,    57,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    55,
      56,    57,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      -1,    42,    -1,    13,    -1,    -1,    16,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    55,    56,    57,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,
      13,    40,    41,    16,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    27,    -1,    55,    56,    57,    -1,
      -1,    34,    27,    36,    37,    38,    39,    40,    -1,    34,
      -1,    36,    37,    38,    13,    40,    41,    16,    -1,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    27,    -1,
      55,    56,    57,    -1,    -1,    34,    -1,    36,    37,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    60,    61,     0,     3,     4,     5,     6,     7,     8,
      12,    29,    62,    63,    64,    65,    68,    79,    80,    81,
      84,    85,    88,    96,    97,    98,    99,   103,   134,   135,
       5,    64,    28,    29,    29,    29,    77,    89,    90,   100,
      42,    40,    42,    50,    50,    40,    50,    50,    29,    40,
      50,    86,    46,    69,    70,    52,    66,    45,    91,    42,
      44,    29,    41,    64,    82,   101,    13,    14,    15,    16,
      17,    19,    20,    21,    24,    25,    26,    27,    34,    36,
      37,    38,    40,    42,    50,    55,    56,    57,    94,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   115,
     116,   117,   118,   119,   121,   127,   128,   133,   104,    41,
      64,   101,   104,   104,    66,    41,    29,    87,    42,    29,
      42,    50,    47,    67,    34,    39,    50,    92,    93,    29,
      90,    49,    66,    77,    83,   102,    41,    44,    41,    44,
      42,    42,    40,    40,    40,    40,   106,   110,   120,    53,
      54,    40,   112,   113,   113,   112,   113,    65,   110,   104,
      51,   106,   107,    29,    64,   108,    42,    44,    37,    40,
      43,    45,    47,    30,    31,    32,    33,    34,    35,    51,
      49,    41,    51,    51,    42,    91,    44,    51,     9,    10,
      11,    71,    72,    48,    55,    92,    95,    29,    94,    29,
      64,    64,   110,   110,   120,   110,    29,    42,   112,   129,
     130,    39,   110,   131,   132,   110,   114,    41,    41,    51,
      64,    76,    77,   110,   114,    29,    39,   111,   110,   113,
     113,   113,   113,   113,   113,    29,    46,    46,    46,    51,
      72,    64,    73,    74,    75,    78,    79,    81,    84,    48,
      44,    51,    49,    83,   102,    41,    41,    42,    41,    42,
      53,    42,    54,    41,    76,    42,    44,    41,    48,    91,
      73,    29,    76,    40,    92,   108,   108,   120,    22,    50,
     122,   126,   130,   132,    42,    77,    42,    64,    18,    42,
      94,    22,    23,   105,   106,   123,   124,   125,   108,   120,
      46,    94,    46,   106,   124,    51,   125,    41,   108,   126,
      46,   107,   108,   107,   125
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      63,    64,    64,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    69,    70,    70,    71,    71,    72,    72,    72,
      72,    73,    73,    74,    75,    76,    76,    77,    78,    79,
      79,    80,    81,    82,    82,    83,    83,    84,    85,    86,
      87,    87,    88,    89,    89,    90,    91,    91,    92,    92,
      92,    92,    93,    93,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    98,    98,    99,   100,   101,   101,
     102,   102,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   109,   110,   110,   111,   111,   111,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   115,   115,   116,   117,   118,   119,   120,
     120,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   127,   128,   128,   129,   129,
     130,   131,   131,   132,   132,   133,   134,   135
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       5,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       2,     4,     4,     2,     0,     3,     2,     2,     2,     2,
       0,     1,     1,     1,     3,     3,     1,     2,     1,     2,
       2,     4,     2,     4,     2,     1,     1,     3,     4,     3,
       4,     2,     3,     3,     1,     2,     2,     0,     2,     2,
       3,     1,     1,     0,     1,     1,     1,     3,     1,     1,
       1,     4,     4,     4,     4,     4,     3,     2,     4,     2,
       1,     2,     3,     2,     1,     1,     0,     5,     4,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     3,     1,     3,     3,     1,
       4,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     1,     4,     4,     1,     3,
       3,     1,     0,     1,     1,     7,     5,     5,     9,     1,
       0,     5,     3,     1,     2,     1,     1,     0,     2,     1,
       4,     4,     3,     4,     4,     3,     4,     4,     3,     1,
       1,     3,     1,     1,     1,     3,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1512 "syntax_analyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 442 "syntax_analyzer.y"


int main(int argc, char **argv) {
    int out;

	if (argc!=2)
    {
        printf("No input file!\n");
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
    if(!out) 
    {
        printf("Success\n");
        fclose(yyin);
        return 0;
    }
    else 
    {
        printf("Failure\n");
        fclose(yyin);
        return 1;
    }
}

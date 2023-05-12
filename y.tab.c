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
#line 1 "yaccFile.y"


#include <stdio.h>

void yyerror(const char* message);
void yyrecover();
int yylex();
// int yyllineno;
extern FILE *yyin;
int array[1000];
extern int count;


#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LET = 258,                     /* LET  */
    NUMBER = 259,                  /* NUMBER  */
    IDENTIFIER = 260,              /* IDENTIFIER  */
    NOT = 261,                     /* NOT  */
    AND = 262,                     /* AND  */
    OR = 263,                      /* OR  */
    XOR = 264,                     /* XOR  */
    DATA = 265,                    /* DATA  */
    DEF = 266,                     /* DEF  */
    FN = 267,                      /* FN  */
    DIM = 268,                     /* DIM  */
    END = 269,                     /* END  */
    FOR = 270,                     /* FOR  */
    TO = 271,                      /* TO  */
    NEXT = 272,                    /* NEXT  */
    GOSUB = 273,                   /* GOSUB  */
    GOTO = 274,                    /* GOTO  */
    IF = 275,                      /* IF  */
    THEN = 276,                    /* THEN  */
    INPUT = 277,                   /* INPUT  */
    PRINT = 278,                   /* PRINT  */
    RETURN = 279,                  /* RETURN  */
    STOP = 280,                    /* STOP  */
    STEP = 281,                    /* STEP  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MULTIPLY = 284,                /* MULTIPLY  */
    DIVIDE = 285,                  /* DIVIDE  */
    EQUALS = 286,                  /* EQUALS  */
    NOT_EQUAL = 287,               /* NOT_EQUAL  */
    LESS = 288,                    /* LESS  */
    LESS_EQUAL = 289,              /* LESS_EQUAL  */
    GREATER = 290,                 /* GREATER  */
    GREATER_EQUAL = 291,           /* GREATER_EQUAL  */
    COMMA = 292,                   /* COMMA  */
    SEMICOLON = 293,               /* SEMICOLON  */
    LPAREN = 294,                  /* LPAREN  */
    RPAREN = 295,                  /* RPAREN  */
    EXPO = 296,                    /* EXPO  */
    INTEGER = 297,                 /* INTEGER  */
    DOUBLE = 298,                  /* DOUBLE  */
    STRING = 299,                  /* STRING  */
    SINGLE = 300,                  /* SINGLE  */
    STRING_LITERAL = 301,          /* STRING_LITERAL  */
    EOL = 302,                     /* EOL  */
    SMALLcHAR = 303                /* SMALLcHAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LET 258
#define NUMBER 259
#define IDENTIFIER 260
#define NOT 261
#define AND 262
#define OR 263
#define XOR 264
#define DATA 265
#define DEF 266
#define FN 267
#define DIM 268
#define END 269
#define FOR 270
#define TO 271
#define NEXT 272
#define GOSUB 273
#define GOTO 274
#define IF 275
#define THEN 276
#define INPUT 277
#define PRINT 278
#define RETURN 279
#define STOP 280
#define STEP 281
#define PLUS 282
#define MINUS 283
#define MULTIPLY 284
#define DIVIDE 285
#define EQUALS 286
#define NOT_EQUAL 287
#define LESS 288
#define LESS_EQUAL 289
#define GREATER 290
#define GREATER_EQUAL 291
#define COMMA 292
#define SEMICOLON 293
#define LPAREN 294
#define RPAREN 295
#define EXPO 296
#define INTEGER 297
#define DOUBLE 298
#define STRING 299
#define SINGLE 300
#define STRING_LITERAL 301
#define EOL 302
#define SMALLcHAR 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LET = 3,                        /* LET  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 5,                 /* IDENTIFIER  */
  YYSYMBOL_NOT = 6,                        /* NOT  */
  YYSYMBOL_AND = 7,                        /* AND  */
  YYSYMBOL_OR = 8,                         /* OR  */
  YYSYMBOL_XOR = 9,                        /* XOR  */
  YYSYMBOL_DATA = 10,                      /* DATA  */
  YYSYMBOL_DEF = 11,                       /* DEF  */
  YYSYMBOL_FN = 12,                        /* FN  */
  YYSYMBOL_DIM = 13,                       /* DIM  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_TO = 16,                        /* TO  */
  YYSYMBOL_NEXT = 17,                      /* NEXT  */
  YYSYMBOL_GOSUB = 18,                     /* GOSUB  */
  YYSYMBOL_GOTO = 19,                      /* GOTO  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_THEN = 21,                      /* THEN  */
  YYSYMBOL_INPUT = 22,                     /* INPUT  */
  YYSYMBOL_PRINT = 23,                     /* PRINT  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_STOP = 25,                      /* STOP  */
  YYSYMBOL_STEP = 26,                      /* STEP  */
  YYSYMBOL_PLUS = 27,                      /* PLUS  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 29,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 30,                    /* DIVIDE  */
  YYSYMBOL_EQUALS = 31,                    /* EQUALS  */
  YYSYMBOL_NOT_EQUAL = 32,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS = 33,                      /* LESS  */
  YYSYMBOL_LESS_EQUAL = 34,                /* LESS_EQUAL  */
  YYSYMBOL_GREATER = 35,                   /* GREATER  */
  YYSYMBOL_GREATER_EQUAL = 36,             /* GREATER_EQUAL  */
  YYSYMBOL_COMMA = 37,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 38,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 39,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 40,                    /* RPAREN  */
  YYSYMBOL_EXPO = 41,                      /* EXPO  */
  YYSYMBOL_INTEGER = 42,                   /* INTEGER  */
  YYSYMBOL_DOUBLE = 43,                    /* DOUBLE  */
  YYSYMBOL_STRING = 44,                    /* STRING  */
  YYSYMBOL_SINGLE = 45,                    /* SINGLE  */
  YYSYMBOL_STRING_LITERAL = 46,            /* STRING_LITERAL  */
  YYSYMBOL_EOL = 47,                       /* EOL  */
  YYSYMBOL_SMALLcHAR = 48,                 /* SMALLcHAR  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_StmtList = 51,                  /* StmtList  */
  YYSYMBOL_Stmt = 52,                      /* Stmt  */
  YYSYMBOL_DataStmt = 53,                  /* DataStmt  */
  YYSYMBOL_DataArgs = 54,                  /* DataArgs  */
  YYSYMBOL_DefStmt = 55,                   /* DefStmt  */
  YYSYMBOL_DimStmt = 56,                   /* DimStmt  */
  YYSYMBOL_DimArgs = 57,                   /* DimArgs  */
  YYSYMBOL_ForStmt = 58,                   /* ForStmt  */
  YYSYMBOL_NextStmt = 59,                  /* NextStmt  */
  YYSYMBOL_GosubStmt = 60,                 /* GosubStmt  */
  YYSYMBOL_GotoStmt = 61,                  /* GotoStmt  */
  YYSYMBOL_IfStmt = 62,                    /* IfStmt  */
  YYSYMBOL_AssignStmt = 63,                /* AssignStmt  */
  YYSYMBOL_Assign = 64,                    /* Assign  */
  YYSYMBOL_InputStmt = 65,                 /* InputStmt  */
  YYSYMBOL_InputArgs = 66,                 /* InputArgs  */
  YYSYMBOL_PrintStmt = 67,                 /* PrintStmt  */
  YYSYMBOL_Printparts = 68,                /* Printparts  */
  YYSYMBOL_Delim = 69,                     /* Delim  */
  YYSYMBOL_ReturnStmt = 70,                /* ReturnStmt  */
  YYSYMBOL_StopStmt = 71,                  /* StopStmt  */
  YYSYMBOL_Expression = 72,                /* Expression  */
  YYSYMBOL_Relational_Expression = 73,     /* Relational_Expression  */
  YYSYMBOL_Modifier = 74                   /* Modifier  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   399

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    19,    19,    20,    23,    24,    25,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    44,    45,    47,    48,    49,    50,    53,    54,    55,
      58,    59,    61,    62,    63,    64,    67,    68,    69,    72,
      73,    76,    77,    80,    81,    84,    85,    88,    89,    91,
      92,    93,    94,    95,    97,    98,    99,   102,   103,   106,
     107,   108,   109,   110,   112,   113,   114,   115,   118,   119,
     120,   123,   124,   126,   127,   129,   130,   131,   134,   135,
     136,   139,   140,   143,   144,   148,   149,   150,   151,   152,
     154,   155,   156,   157,   159,   160,   161,   162,   163,   164,
     165,   166,   169,   170,   171,   172,   173,   174,   176,   177,
     179,   180,   182,   183,   185,   186,   188,   189,   192,   193,
     194,   195
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
  "\"end of file\"", "error", "\"invalid token\"", "LET", "NUMBER",
  "IDENTIFIER", "NOT", "AND", "OR", "XOR", "DATA", "DEF", "FN", "DIM",
  "END", "FOR", "TO", "NEXT", "GOSUB", "GOTO", "IF", "THEN", "INPUT",
  "PRINT", "RETURN", "STOP", "STEP", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "EQUALS", "NOT_EQUAL", "LESS", "LESS_EQUAL", "GREATER", "GREATER_EQUAL",
  "COMMA", "SEMICOLON", "LPAREN", "RPAREN", "EXPO", "INTEGER", "DOUBLE",
  "STRING", "SINGLE", "STRING_LITERAL", "EOL", "SMALLcHAR", "$accept",
  "program", "StmtList", "Stmt", "DataStmt", "DataArgs", "DefStmt",
  "DimStmt", "DimArgs", "ForStmt", "NextStmt", "GosubStmt", "GotoStmt",
  "IfStmt", "AssignStmt", "Assign", "InputStmt", "InputArgs", "PrintStmt",
  "Printparts", "Delim", "ReturnStmt", "StopStmt", "Expression",
  "Relational_Expression", "Modifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-78)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,     1,   368,    34,    47,    -8,    30,    16,    42,    35,
      58,    59,    69,    70,   109,    43,    81,  -111,  -111,  -111,
      28,    31,    33,    36,    37,    41,    45,    50,    51,    52,
      56,    61,    64,  -111,   343,  -111,   140,  -111,  -111,  -111,
    -111,    53,    84,  -111,    76,    79,    86,  -111,  -111,  -111,
    -111,  -111,    62,   109,    14,   363,  -111,   306,    82,    74,
    -111,    85,   153,   121,   153,   153,     5,  -111,     0,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   153,   153,   100,   101,   102,   103,
      16,   -13,   131,    35,   153,   153,  -111,  -111,  -111,  -111,
    -111,   -21,    92,    94,   139,   109,   109,   109,   109,   109,
     109,   153,  -111,  -111,  -111,  -111,    43,   153,  -111,   311,
     110,   311,   221,  -111,  -111,  -111,    90,   153,   153,   153,
     153,   153,   153,   153,   153,   141,   311,   166,   153,   153,
     104,   153,    53,   153,   146,    13,    79,   247,   182,  -111,
    -111,  -111,  -111,   341,   341,   341,   341,   341,   341,   206,
      82,   230,   153,  -111,  -111,   311,   311,   311,   311,   311,
     311,   311,   311,  -111,   153,   125,   311,   311,  -111,   311,
     311,   112,   156,  -111,   153,   153,  -111,   153,  -111,  -111,
     257,   272,   153,   130,   122,   296,   287,   302,  -111,   132,
     311,   153,  -111,   153,  -111,  -111,   153,   311,   311,   311
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    83,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,    56,     0,    47,    26,    23,
      24,    21,     0,    35,     0,    30,     0,    39,    41,    43,
     117,   102,   104,     0,   103,     0,    67,    59,    57,   101,
      86,    85,     0,     0,     0,     0,     0,    68,     0,    18,
      16,    15,    17,    19,    12,    11,    10,     7,     9,     8,
      13,    14,     2,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,   119,   121,   120,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,    63,    62,     0,     0,   101,    93,
      89,    99,     0,    80,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,    25,     0,     0,     0,    34,     0,     0,   116,
     110,   111,    45,   108,   109,   112,   113,   114,   115,     0,
      66,     0,     0,   100,    76,    90,    91,    92,    94,    95,
      96,    97,    98,    75,     0,     0,    51,    52,    50,    53,
      28,     0,     0,    32,     0,     0,   106,     0,    64,    87,
       0,     0,     0,     0,     0,    37,     0,     0,    88,     0,
      54,     0,    33,     0,   107,    65,     0,    27,    36,    55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,   133,  -111,    78,  -111,  -111,    71,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,    54,  -111,  -110,
      98,  -111,  -111,   -62,   -49,  -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    19,    20,    41,    21,    22,    45,    23,
      24,    25,    26,    27,    28,    37,    29,    58,    30,    67,
     126,    31,    32,    68,    55,   100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     119,   123,   121,   122,   101,    -6,   123,   127,   128,   129,
     105,   106,   107,   108,   109,   110,   164,    38,   143,   149,
      39,     1,   136,   137,     2,   173,   144,   130,   131,   132,
     133,    35,   147,   148,    33,    36,    43,   124,   125,   -22,
      44,   134,   124,   125,    56,   102,   103,   -71,    57,   159,
     182,    34,   -74,   183,    42,   161,   153,   154,   155,   156,
     157,   158,    40,    46,    47,   165,   166,   167,   168,   169,
     170,   171,   172,    48,    49,    69,   176,   177,    70,   179,
      71,   180,    59,    72,    73,    60,    61,    62,    74,    91,
      90,    59,    75,    63,    60,    61,    62,    76,    77,    78,
     190,    95,    63,    79,    96,    97,    98,    99,    80,    64,
      50,    81,   191,    51,    52,    92,    93,    94,    64,   116,
      65,   -77,   195,   196,   117,   197,   120,    66,   -69,    65,
     200,   138,   139,   140,   141,   145,    66,   -73,   150,   207,
     151,   208,    59,   152,   209,    60,    61,    62,    53,   162,
     178,   181,   193,    63,   118,    54,   192,    60,    61,    62,
     194,   201,   202,   206,   146,    63,   135,    83,   142,    64,
     160,    84,     0,   127,   128,   129,     0,     0,     0,    85,
      65,    64,    86,    87,    88,    89,     0,    66,   -72,   127,
     128,   129,    65,   130,   131,   132,   133,     0,     0,     0,
       0,     0,     0,   174,     0,     0,   175,   134,     0,   130,
     131,   132,   133,   127,   128,   129,     0,     0,     0,   185,
       0,     0,   186,   134,     0,     0,     0,     0,   127,   128,
     129,     0,     0,   130,   131,   132,   133,   127,   128,   129,
       0,     0,     0,   187,     0,     0,   188,   134,   130,   131,
     132,   133,     0,     0,   127,   128,   129,   130,   131,   132,
     133,   163,   134,   184,   127,   128,   129,     0,     0,     0,
     189,   134,     0,     0,   130,   131,   132,   133,     0,   127,
     128,   129,     0,     0,   130,   131,   132,   133,   134,     0,
       0,     0,     0,     0,   127,   128,   129,   198,   134,   130,
     131,   132,   133,   127,   128,   129,     0,     0,     0,   127,
     128,   129,   199,   134,   130,   131,   132,   133,   127,   128,
     129,     0,   203,   130,   131,   132,   133,   204,   134,   130,
     131,   132,   133,     0,     0,     0,     0,   134,   130,   131,
     132,   133,   205,   134,     5,   111,     6,     0,   112,   113,
     114,   115,   134,     7,     8,     0,     9,    82,    10,     0,
      11,    12,    13,    14,     0,    15,    16,    17,    18,     5,
       0,     6,   105,   106,   107,   108,   109,   110,     7,     8,
       0,     9,     0,    10,   104,    11,    12,    13,    14,     0,
      15,    16,    17,    18,   105,   106,   107,   108,   109,   110
};

static const yytype_int16 yycheck[] =
{
      62,     1,    64,    65,    53,     4,     1,     7,     8,     9,
      31,    32,    33,    34,    35,    36,   126,     1,    31,    40,
       4,     1,    84,    85,     4,   135,    39,    27,    28,    29,
      30,     1,    94,    95,     0,     5,     1,    37,    38,    47,
       5,    41,    37,    38,     1,    31,    32,    47,     5,   111,
      37,     4,    47,    40,    12,   117,   105,   106,   107,   108,
     109,   110,    46,     5,     5,   127,   128,   129,   130,   131,
     132,   133,   134,     4,     4,    47,   138,   139,    47,   141,
      47,   143,     1,    47,    47,     4,     5,     6,    47,     5,
      37,     1,    47,    12,     4,     5,     6,    47,    47,    47,
     162,    39,    12,    47,    42,    43,    44,    45,    47,    28,
       1,    47,   174,     4,     5,    39,    37,    31,    28,    37,
      39,    47,   184,   185,    39,   187,     5,    46,    47,    39,
     192,    31,    31,    31,    31,     4,    46,    47,    46,   201,
      46,   203,     1,     4,   206,     4,     5,     6,    39,    39,
      46,     5,    40,    12,     1,    46,    31,     4,     5,     6,
       4,    31,    40,    31,    93,    12,    68,    34,    90,    28,
     116,    31,    -1,     7,     8,     9,    -1,    -1,    -1,    39,
      39,    28,    42,    43,    44,    45,    -1,    46,    47,     7,
       8,     9,    39,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    40,    41,    -1,    27,
      28,    29,    30,     7,     8,     9,    -1,    -1,    -1,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,     7,     8,
       9,    -1,    -1,    27,    28,    29,    30,     7,     8,     9,
      -1,    -1,    -1,    37,    -1,    -1,    40,    41,    27,    28,
      29,    30,    -1,    -1,     7,     8,     9,    27,    28,    29,
      30,    40,    41,    16,     7,     8,     9,    -1,    -1,    -1,
      40,    41,    -1,    -1,    27,    28,    29,    30,    -1,     7,
       8,     9,    -1,    -1,    27,    28,    29,    30,    41,    -1,
      -1,    -1,    -1,    -1,     7,     8,     9,    40,    41,    27,
      28,    29,    30,     7,     8,     9,    -1,    -1,    -1,     7,
       8,     9,    40,    41,    27,    28,    29,    30,     7,     8,
       9,    -1,    26,    27,    28,    29,    30,    40,    41,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    41,    27,    28,
      29,    30,    40,    41,     1,    39,     3,    -1,    42,    43,
      44,    45,    41,    10,    11,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,     1,
      -1,     3,    31,    32,    33,    34,    35,    36,    10,    11,
      -1,    13,    -1,    15,    21,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    31,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     4,    50,    51,     1,     3,    10,    11,    13,
      15,    17,    18,    19,    20,    22,    23,    24,    25,    52,
      53,    55,    56,    58,    59,    60,    61,    62,    63,    65,
      67,    70,    71,     0,     4,     1,     5,    64,     1,     4,
      46,    54,    12,     1,     5,    57,     5,     5,     4,     4,
       1,     4,     5,    39,    46,    73,     1,     5,    66,     1,
       4,     5,     6,    12,    28,    39,    46,    68,    72,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    14,    52,    31,    39,    42,    43,    44,    45,
      37,     5,    39,    37,    31,    39,    42,    43,    44,    45,
      74,    73,    31,    32,    21,    31,    32,    33,    34,    35,
      36,    39,    42,    43,    44,    45,    37,    39,     1,    72,
       5,    72,    72,     1,    37,    38,    69,     7,     8,     9,
      27,    28,    29,    30,    41,    69,    72,    72,    31,    31,
      31,    31,    54,    31,    39,     4,    57,    72,    72,    40,
      46,    46,     4,    73,    73,    73,    73,    73,    73,    72,
      66,    72,    39,    40,    68,    72,    72,    72,    72,    72,
      72,    72,    72,    68,    37,    40,    72,    72,    46,    72,
      72,     5,    37,    40,    16,    37,    40,    37,    40,    40,
      72,    72,    31,    40,     4,    72,    72,    72,    40,    40,
      72,    31,    40,    26,    40,    40,    31,    72,    72,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    54,    54,    54,    54,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     3,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     3,     1,     8,     5,     1,
       2,     1,     4,     6,     3,     1,     8,     6,     1,     2,
       1,     2,     1,     2,     1,     4,     1,     2,     1,     3,
       4,     4,     4,     4,     6,     8,     1,     2,     1,     1,
       2,     2,     2,     2,     4,     6,     3,     1,     2,     1,
       1,     1,     2,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     1,     1,     2,     4,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 7: /* Stmt: AssignStmt EOL  */
#line 28 "yaccFile.y"
                     {printf("AssignStmt\n");}
#line 1461 "y.tab.c"
    break;


#line 1465 "y.tab.c"

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

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
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

#line 197 "yaccFile.y"


int main(int argc, char *argv[]) {

    yyin = fopen(argv[1], "r");

    FILE *temp = fopen(argv[1], "r");

    int index=0;

    while(!feof(temp))
    {
        fscanf(temp, "%d", &array[index]);
        index++;

        while(fgetc(temp) != '\n' && !feof(temp));
    }

    yyparse();
    fclose(yyin);

    printf("\n");

}

void yyerror(const char* message)
{
	printf("ERROR : %s\t", message);
        printf ("Error in line No.: %d\n",array[count]);
}

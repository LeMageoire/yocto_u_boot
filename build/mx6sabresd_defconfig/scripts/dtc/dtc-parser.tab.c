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

#include <stdio.h>
#include <inttypes.h>

#include "dtc.h"
#include "srcpos.h"

extern int yylex(void);
extern void yyerror(char const *s);
#define ERROR(loc, ...) \
	do { \
		srcpos_error((loc), "Error", __VA_ARGS__); \
		treesource_error = true; \
	} while (0)

extern struct dt_info *parser_output;
extern bool treesource_error;


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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    DT_V1 = 258,                   /* DT_V1  */
    DT_PLUGIN = 259,               /* DT_PLUGIN  */
    DT_MEMRESERVE = 260,           /* DT_MEMRESERVE  */
    DT_LSHIFT = 261,               /* DT_LSHIFT  */
    DT_RSHIFT = 262,               /* DT_RSHIFT  */
    DT_LE = 263,                   /* DT_LE  */
    DT_GE = 264,                   /* DT_GE  */
    DT_EQ = 265,                   /* DT_EQ  */
    DT_NE = 266,                   /* DT_NE  */
    DT_AND = 267,                  /* DT_AND  */
    DT_OR = 268,                   /* DT_OR  */
    DT_BITS = 269,                 /* DT_BITS  */
    DT_DEL_PROP = 270,             /* DT_DEL_PROP  */
    DT_DEL_NODE = 271,             /* DT_DEL_NODE  */
    DT_OMIT_NO_REF = 272,          /* DT_OMIT_NO_REF  */
    DT_PROPNODENAME = 273,         /* DT_PROPNODENAME  */
    DT_LITERAL = 274,              /* DT_LITERAL  */
    DT_CHAR_LITERAL = 275,         /* DT_CHAR_LITERAL  */
    DT_BYTE = 276,                 /* DT_BYTE  */
    DT_STRING = 277,               /* DT_STRING  */
    DT_LABEL = 278,                /* DT_LABEL  */
    DT_REF = 279,                  /* DT_REF  */
    DT_INCBIN = 280                /* DT_INCBIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{

	char *propnodename;
	char *labelref;
	uint8_t byte;
	struct data data;

	struct {
		struct data	data;
		int		bits;
	} array;

	struct property *prop;
	struct property *proplist;
	struct node *node;
	struct node *nodelist;
	struct reserve_info *re;
	uint64_t integer;
	unsigned int flags;


};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DT_V1 = 3,                      /* DT_V1  */
  YYSYMBOL_DT_PLUGIN = 4,                  /* DT_PLUGIN  */
  YYSYMBOL_DT_MEMRESERVE = 5,              /* DT_MEMRESERVE  */
  YYSYMBOL_DT_LSHIFT = 6,                  /* DT_LSHIFT  */
  YYSYMBOL_DT_RSHIFT = 7,                  /* DT_RSHIFT  */
  YYSYMBOL_DT_LE = 8,                      /* DT_LE  */
  YYSYMBOL_DT_GE = 9,                      /* DT_GE  */
  YYSYMBOL_DT_EQ = 10,                     /* DT_EQ  */
  YYSYMBOL_DT_NE = 11,                     /* DT_NE  */
  YYSYMBOL_DT_AND = 12,                    /* DT_AND  */
  YYSYMBOL_DT_OR = 13,                     /* DT_OR  */
  YYSYMBOL_DT_BITS = 14,                   /* DT_BITS  */
  YYSYMBOL_DT_DEL_PROP = 15,               /* DT_DEL_PROP  */
  YYSYMBOL_DT_DEL_NODE = 16,               /* DT_DEL_NODE  */
  YYSYMBOL_DT_OMIT_NO_REF = 17,            /* DT_OMIT_NO_REF  */
  YYSYMBOL_DT_PROPNODENAME = 18,           /* DT_PROPNODENAME  */
  YYSYMBOL_DT_LITERAL = 19,                /* DT_LITERAL  */
  YYSYMBOL_DT_CHAR_LITERAL = 20,           /* DT_CHAR_LITERAL  */
  YYSYMBOL_DT_BYTE = 21,                   /* DT_BYTE  */
  YYSYMBOL_DT_STRING = 22,                 /* DT_STRING  */
  YYSYMBOL_DT_LABEL = 23,                  /* DT_LABEL  */
  YYSYMBOL_DT_REF = 24,                    /* DT_REF  */
  YYSYMBOL_DT_INCBIN = 25,                 /* DT_INCBIN  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '{'  */
  YYSYMBOL_29_ = 29,                       /* '}'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '<'  */
  YYSYMBOL_38_ = 38,                       /* '?'  */
  YYSYMBOL_39_ = 39,                       /* ':'  */
  YYSYMBOL_40_ = 40,                       /* '|'  */
  YYSYMBOL_41_ = 41,                       /* '^'  */
  YYSYMBOL_42_ = 42,                       /* '&'  */
  YYSYMBOL_43_ = 43,                       /* '+'  */
  YYSYMBOL_44_ = 44,                       /* '-'  */
  YYSYMBOL_45_ = 45,                       /* '*'  */
  YYSYMBOL_46_ = 46,                       /* '%'  */
  YYSYMBOL_47_ = 47,                       /* '~'  */
  YYSYMBOL_48_ = 48,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_sourcefile = 50,                /* sourcefile  */
  YYSYMBOL_header = 51,                    /* header  */
  YYSYMBOL_headers = 52,                   /* headers  */
  YYSYMBOL_memreserves = 53,               /* memreserves  */
  YYSYMBOL_memreserve = 54,                /* memreserve  */
  YYSYMBOL_devicetree = 55,                /* devicetree  */
  YYSYMBOL_nodedef = 56,                   /* nodedef  */
  YYSYMBOL_proplist = 57,                  /* proplist  */
  YYSYMBOL_propdef = 58,                   /* propdef  */
  YYSYMBOL_propdata = 59,                  /* propdata  */
  YYSYMBOL_propdataprefix = 60,            /* propdataprefix  */
  YYSYMBOL_arrayprefix = 61,               /* arrayprefix  */
  YYSYMBOL_integer_prim = 62,              /* integer_prim  */
  YYSYMBOL_integer_expr = 63,              /* integer_expr  */
  YYSYMBOL_integer_trinary = 64,           /* integer_trinary  */
  YYSYMBOL_integer_or = 65,                /* integer_or  */
  YYSYMBOL_integer_and = 66,               /* integer_and  */
  YYSYMBOL_integer_bitor = 67,             /* integer_bitor  */
  YYSYMBOL_integer_bitxor = 68,            /* integer_bitxor  */
  YYSYMBOL_integer_bitand = 69,            /* integer_bitand  */
  YYSYMBOL_integer_eq = 70,                /* integer_eq  */
  YYSYMBOL_integer_rela = 71,              /* integer_rela  */
  YYSYMBOL_integer_shift = 72,             /* integer_shift  */
  YYSYMBOL_integer_add = 73,               /* integer_add  */
  YYSYMBOL_integer_mul = 74,               /* integer_mul  */
  YYSYMBOL_integer_unary = 75,             /* integer_unary  */
  YYSYMBOL_bytestring = 76,                /* bytestring  */
  YYSYMBOL_subnodes = 77,                  /* subnodes  */
  YYSYMBOL_subnode = 78                    /* subnode  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   147

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,    48,     2,     2,     2,    46,    42,     2,
      34,    36,    45,    43,    35,    44,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    26,
      37,    30,    31,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,    40,    29,    47,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   110,   110,   118,   122,   129,   130,   140,   143,   150,
     154,   162,   166,   170,   181,   192,   211,   223,   238,   246,
     249,   256,   260,   264,   268,   276,   280,   284,   288,   292,
     308,   318,   326,   329,   333,   340,   356,   361,   380,   394,
     401,   402,   403,   410,   414,   415,   419,   420,   424,   425,
     429,   430,   434,   435,   439,   440,   444,   445,   446,   450,
     451,   452,   453,   454,   458,   459,   460,   464,   465,   466,
     470,   471,   480,   489,   493,   494,   495,   496,   501,   504,
     508,   516,   519,   523,   531,   535,   539,   543
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
  "\"end of file\"", "error", "\"invalid token\"", "DT_V1", "DT_PLUGIN",
  "DT_MEMRESERVE", "DT_LSHIFT", "DT_RSHIFT", "DT_LE", "DT_GE", "DT_EQ",
  "DT_NE", "DT_AND", "DT_OR", "DT_BITS", "DT_DEL_PROP", "DT_DEL_NODE",
  "DT_OMIT_NO_REF", "DT_PROPNODENAME", "DT_LITERAL", "DT_CHAR_LITERAL",
  "DT_BYTE", "DT_STRING", "DT_LABEL", "DT_REF", "DT_INCBIN", "';'", "'/'",
  "'{'", "'}'", "'='", "'>'", "'['", "']'", "'('", "','", "')'", "'<'",
  "'?'", "':'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'%'", "'~'",
  "'!'", "$accept", "sourcefile", "header", "headers", "memreserves",
  "memreserve", "devicetree", "nodedef", "proplist", "propdef", "propdata",
  "propdataprefix", "arrayprefix", "integer_prim", "integer_expr",
  "integer_trinary", "integer_or", "integer_and", "integer_bitor",
  "integer_bitxor", "integer_bitand", "integer_eq", "integer_rela",
  "integer_shift", "integer_add", "integer_mul", "integer_unary",
  "bytestring", "subnodes", "subnode", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,    -6,    26,     8,    10,    38,   -82,   -82,    -7,    10,
      67,    10,    48,   -82,   -82,   -10,    -7,   -82,    62,    62,
      53,   -82,   -82,   -10,   -10,   -10,   -82,    63,   -82,     1,
      90,    -4,    64,    61,    54,    -2,    72,    29,    -5,   -82,
      78,   -82,   -82,   -82,    82,    83,    84,    62,    62,   -82,
     -82,   -82,   -82,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,   -10,
     -10,   -10,   -82,    66,    85,    86,    62,   -82,   -82,    90,
      70,    -4,    64,    61,    54,    -2,    -2,    72,    72,    72,
      72,    29,    29,    -5,    -5,   -82,   -82,   -82,    92,    95,
       0,    17,    66,   -82,    87,    66,   -82,   -82,   -82,   -10,
      88,    89,    62,     0,   -82,   -82,   -82,   -82,   -82,   -82,
      91,   -82,   -82,   -82,   -82,   -82,    40,    30,   -82,   -82,
     -82,   -82,    99,   -82,   -82,   -82,    93,   -82,   -82,    37,
      96,    97,    25,   -82,   -82,   -82,   -82,   -82,    57,   -82,
     -82,   -82,    -7,   -82,    94,    -7,    98,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     7,     3,     1,     6,     0,     0,
       0,     7,     0,    40,    41,     0,     0,    10,     0,     0,
       2,     8,     4,     0,     0,     0,    74,     0,    43,    44,
      46,    48,    50,    52,    54,    56,    59,    66,    69,    73,
       0,    19,    13,    11,     0,     0,     0,     0,     0,    75,
      76,    77,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    81,     0,     0,     0,    15,    12,    47,
       0,    49,    51,    53,    55,    57,    58,    62,    63,    61,
      60,    64,    65,    67,    68,    71,    70,    72,     0,     0,
       0,     0,     0,    20,     0,    81,    16,    17,    14,     0,
       0,     0,     0,     0,    86,    22,    32,    84,    24,    87,
       0,    83,    82,    45,    23,    85,     0,     0,    18,    31,
      21,    33,     0,    25,    34,    28,     0,    78,    36,     0,
       0,     0,     0,    39,    38,    26,    37,    35,     0,    79,
      80,    27,     0,    30,     0,     0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -82,   -82,   -82,   117,   110,   113,   -82,   -17,   -82,   -77,
     -82,   -82,   -82,    -8,    69,    15,   -82,    73,    75,    76,
      68,    77,    36,    24,    32,    33,   -20,   -82,    23,   -81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    11,    20,   117,    73,   103,
     126,   127,   139,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   142,   104,   105
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    42,    43,    49,    50,    51,    61,    62,    40,    13,
      14,     1,    13,    14,    53,     8,    99,   100,   112,   114,
       5,   119,    69,   113,    15,   118,     6,    15,   121,    63,
      77,    78,   119,     9,    23,    64,    56,    24,    25,    54,
      70,    71,    12,   115,   132,    41,   149,   116,   150,    95,
      96,    97,   133,   134,   135,   136,    13,    14,   151,   108,
     143,   144,   137,   129,    59,    60,   130,   138,   145,    44,
      45,    15,    67,    68,    22,   131,    46,    47,    65,    66,
      48,    98,    99,   100,   101,    87,    88,    89,    90,   102,
      41,    18,   152,   153,    19,    85,    86,    91,    92,    52,
      93,    94,    55,    58,    72,    57,    74,    75,    76,   109,
     110,   106,   107,   111,   124,   125,   120,   128,   140,   148,
       7,    21,    17,    80,   123,    83,    79,   141,   122,   155,
      81,   146,    82,   147,   157,    84,     0,     0,     0,     0,
       0,     0,     0,     0,   154,     0,     0,   156
};

static const yytype_int16 yycheck[] =
{
       8,    18,    19,    23,    24,    25,     8,     9,    16,    19,
      20,     3,    19,    20,    13,     5,    16,    17,    18,   100,
      26,   102,    27,    23,    34,   102,     0,    34,   105,    31,
      47,    48,   113,    23,    44,    37,    40,    47,    48,    38,
      45,    46,     4,    26,    14,    28,    21,    30,    23,    69,
      70,    71,    22,    23,    24,    25,    19,    20,    33,    76,
      23,    24,    32,    23,    10,    11,    26,    37,    31,    16,
      17,    34,    43,    44,    26,    35,    23,    24,     6,     7,
      27,    15,    16,    17,    18,    61,    62,    63,    64,    23,
      28,    24,    35,    36,    27,    59,    60,    65,    66,    36,
      67,    68,    12,    42,    26,    41,    24,    24,    24,    39,
      18,    26,    26,    18,    26,    26,    29,    26,    19,    22,
       3,    11,     9,    54,   109,    57,    53,    34,   105,    35,
      55,   139,    56,    37,    36,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    -1,    -1,   155
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    50,    51,    52,    26,     0,    52,     5,    23,
      53,    54,     4,    19,    20,    34,    62,    54,    24,    27,
      55,    53,    26,    44,    47,    48,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      62,    28,    56,    56,    16,    17,    23,    24,    27,    75,
      75,    75,    36,    13,    38,    12,    40,    41,    42,    10,
      11,     8,     9,    31,    37,     6,     7,    43,    44,    27,
      45,    46,    26,    57,    24,    24,    24,    56,    56,    66,
      63,    67,    68,    69,    70,    71,    71,    72,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    15,    16,
      17,    18,    23,    58,    77,    78,    26,    26,    56,    39,
      18,    18,    18,    23,    78,    26,    30,    56,    58,    78,
      29,    58,    77,    64,    26,    26,    59,    60,    26,    23,
      26,    35,    14,    22,    23,    24,    25,    32,    37,    61,
      19,    34,    76,    23,    24,    31,    62,    37,    22,    21,
      23,    33,    35,    36,    62,    35,    62,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    56,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    61,    61,    61,    61,    61,
      62,    62,    62,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    72,    72,    72,    73,    73,    73,
      74,    74,    74,    74,    75,    75,    75,    75,    76,    76,
      76,    77,    77,    77,    78,    78,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     4,     1,     2,     0,     2,     4,
       2,     2,     3,     2,     4,     3,     4,     4,     5,     0,
       2,     4,     2,     3,     2,     2,     3,     4,     2,     9,
       5,     2,     0,     2,     2,     3,     1,     2,     2,     2,
       1,     1,     3,     1,     1,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     2,     2,     2,     0,     2,
       2,     0,     2,     2,     2,     3,     2,     2
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* sourcefile: headers memreserves devicetree  */
                {
			parser_output = build_dt_info((yyvsp[-2].flags), (yyvsp[-1].re), (yyvsp[0].node),
			                              guess_boot_cpuid((yyvsp[0].node)));
		}
    break;

  case 3: /* header: DT_V1 ';'  */
                {
			(yyval.flags) = DTSF_V1;
		}
    break;

  case 4: /* header: DT_V1 ';' DT_PLUGIN ';'  */
                {
			(yyval.flags) = DTSF_V1 | DTSF_PLUGIN;
		}
    break;

  case 6: /* headers: header headers  */
                {
			if ((yyvsp[0].flags) != (yyvsp[-1].flags))
				ERROR(&(yylsp[0]), "Header flags don't match earlier ones");
			(yyval.flags) = (yyvsp[-1].flags);
		}
    break;

  case 7: /* memreserves: %empty  */
                {
			(yyval.re) = NULL;
		}
    break;

  case 8: /* memreserves: memreserve memreserves  */
                {
			(yyval.re) = chain_reserve_entry((yyvsp[-1].re), (yyvsp[0].re));
		}
    break;

  case 9: /* memreserve: DT_MEMRESERVE integer_prim integer_prim ';'  */
                {
			(yyval.re) = build_reserve_entry((yyvsp[-2].integer), (yyvsp[-1].integer));
		}
    break;

  case 10: /* memreserve: DT_LABEL memreserve  */
                {
			add_label(&(yyvsp[0].re)->labels, (yyvsp[-1].labelref));
			(yyval.re) = (yyvsp[0].re);
		}
    break;

  case 11: /* devicetree: '/' nodedef  */
                {
			(yyval.node) = name_node((yyvsp[0].node), "");
		}
    break;

  case 12: /* devicetree: devicetree '/' nodedef  */
                {
			(yyval.node) = merge_nodes((yyvsp[-2].node), (yyvsp[0].node));
		}
    break;

  case 13: /* devicetree: DT_REF nodedef  */
                {
			/*
			 * We rely on the rule being always:
			 *   versioninfo plugindecl memreserves devicetree
			 * so $-1 is what we want (plugindecl)
			 */
			if (!((yyvsp[(-1) - (2)].flags) & DTSF_PLUGIN))
				ERROR(&(yylsp[0]), "Label or path %s not found", (yyvsp[-1].labelref));
			(yyval.node) = add_orphan_node(name_node(build_node(NULL, NULL), ""), (yyvsp[0].node), (yyvsp[-1].labelref));
		}
    break;

  case 14: /* devicetree: devicetree DT_LABEL DT_REF nodedef  */
                {
			struct node *target = get_node_by_ref((yyvsp[-3].node), (yyvsp[-1].labelref));

			if (target) {
				add_label(&target->labels, (yyvsp[-2].labelref));
				merge_nodes(target, (yyvsp[0].node));
			} else
				ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));
			(yyval.node) = (yyvsp[-3].node);
		}
    break;

  case 15: /* devicetree: devicetree DT_REF nodedef  */
                {
			/*
			 * We rely on the rule being always:
			 *   versioninfo plugindecl memreserves devicetree
			 * so $-1 is what we want (plugindecl)
			 */
			if ((yyvsp[(-1) - (3)].flags) & DTSF_PLUGIN) {
				add_orphan_node((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].labelref));
			} else {
				struct node *target = get_node_by_ref((yyvsp[-2].node), (yyvsp[-1].labelref));

				if (target)
					merge_nodes(target, (yyvsp[0].node));
				else
					ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));
			}
			(yyval.node) = (yyvsp[-2].node);
		}
    break;

  case 16: /* devicetree: devicetree DT_DEL_NODE DT_REF ';'  */
                {
			struct node *target = get_node_by_ref((yyvsp[-3].node), (yyvsp[-1].labelref));

			if (target)
				delete_node(target);
			else
				ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));


			(yyval.node) = (yyvsp[-3].node);
		}
    break;

  case 17: /* devicetree: devicetree DT_OMIT_NO_REF DT_REF ';'  */
                {
			struct node *target = get_node_by_ref((yyvsp[-3].node), (yyvsp[-1].labelref));

			if (target)
				omit_node_if_unused(target);
			else
				ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));


			(yyval.node) = (yyvsp[-3].node);
		}
    break;

  case 18: /* nodedef: '{' proplist subnodes '}' ';'  */
                {
			(yyval.node) = build_node((yyvsp[-3].proplist), (yyvsp[-2].nodelist));
		}
    break;

  case 19: /* proplist: %empty  */
                {
			(yyval.proplist) = NULL;
		}
    break;

  case 20: /* proplist: proplist propdef  */
                {
			(yyval.proplist) = chain_property((yyvsp[0].prop), (yyvsp[-1].proplist));
		}
    break;

  case 21: /* propdef: DT_PROPNODENAME '=' propdata ';'  */
                {
			(yyval.prop) = build_property((yyvsp[-3].propnodename), (yyvsp[-1].data));
		}
    break;

  case 22: /* propdef: DT_PROPNODENAME ';'  */
                {
			(yyval.prop) = build_property((yyvsp[-1].propnodename), empty_data);
		}
    break;

  case 23: /* propdef: DT_DEL_PROP DT_PROPNODENAME ';'  */
                {
			(yyval.prop) = build_property_delete((yyvsp[-1].propnodename));
		}
    break;

  case 24: /* propdef: DT_LABEL propdef  */
                {
			add_label(&(yyvsp[0].prop)->labels, (yyvsp[-1].labelref));
			(yyval.prop) = (yyvsp[0].prop);
		}
    break;

  case 25: /* propdata: propdataprefix DT_STRING  */
                {
			(yyval.data) = data_merge((yyvsp[-1].data), (yyvsp[0].data));
		}
    break;

  case 26: /* propdata: propdataprefix arrayprefix '>'  */
                {
			(yyval.data) = data_merge((yyvsp[-2].data), (yyvsp[-1].array).data);
		}
    break;

  case 27: /* propdata: propdataprefix '[' bytestring ']'  */
                {
			(yyval.data) = data_merge((yyvsp[-3].data), (yyvsp[-1].data));
		}
    break;

  case 28: /* propdata: propdataprefix DT_REF  */
                {
			(yyval.data) = data_add_marker((yyvsp[-1].data), REF_PATH, (yyvsp[0].labelref));
		}
    break;

  case 29: /* propdata: propdataprefix DT_INCBIN '(' DT_STRING ',' integer_prim ',' integer_prim ')'  */
                {
			FILE *f = srcfile_relative_open((yyvsp[-5].data).val, NULL);
			struct data d;

			if ((yyvsp[-3].integer) != 0)
				if (fseek(f, (yyvsp[-3].integer), SEEK_SET) != 0)
					die("Couldn't seek to offset %llu in \"%s\": %s",
					    (unsigned long long)(yyvsp[-3].integer), (yyvsp[-5].data).val,
					    strerror(errno));

			d = data_copy_file(f, (yyvsp[-1].integer));

			(yyval.data) = data_merge((yyvsp[-8].data), d);
			fclose(f);
		}
    break;

  case 30: /* propdata: propdataprefix DT_INCBIN '(' DT_STRING ')'  */
                {
			FILE *f = srcfile_relative_open((yyvsp[-1].data).val, NULL);
			struct data d = empty_data;

			d = data_copy_file(f, -1);

			(yyval.data) = data_merge((yyvsp[-4].data), d);
			fclose(f);
		}
    break;

  case 31: /* propdata: propdata DT_LABEL  */
                {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
    break;

  case 32: /* propdataprefix: %empty  */
                {
			(yyval.data) = empty_data;
		}
    break;

  case 33: /* propdataprefix: propdata ','  */
                {
			(yyval.data) = (yyvsp[-1].data);
		}
    break;

  case 34: /* propdataprefix: propdataprefix DT_LABEL  */
                {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
    break;

  case 35: /* arrayprefix: DT_BITS DT_LITERAL '<'  */
                {
			unsigned long long bits;

			bits = (yyvsp[-1].integer);

			if ((bits !=  8) && (bits != 16) &&
			    (bits != 32) && (bits != 64)) {
				ERROR(&(yylsp[-1]), "Array elements must be"
				      " 8, 16, 32 or 64-bits");
				bits = 32;
			}

			(yyval.array).data = empty_data;
			(yyval.array).bits = bits;
		}
    break;

  case 36: /* arrayprefix: '<'  */
                {
			(yyval.array).data = empty_data;
			(yyval.array).bits = 32;
		}
    break;

  case 37: /* arrayprefix: arrayprefix integer_prim  */
                {
			if ((yyvsp[-1].array).bits < 64) {
				uint64_t mask = (1ULL << (yyvsp[-1].array).bits) - 1;
				/*
				 * Bits above mask must either be all zero
				 * (positive within range of mask) or all one
				 * (negative and sign-extended). The second
				 * condition is true if when we set all bits
				 * within the mask to one (i.e. | in the
				 * mask), all bits are one.
				 */
				if (((yyvsp[0].integer) > mask) && (((yyvsp[0].integer) | mask) != -1ULL))
					ERROR(&(yylsp[0]), "Value out of range for"
					      " %d-bit array element", (yyvsp[-1].array).bits);
			}

			(yyval.array).data = data_append_integer((yyvsp[-1].array).data, (yyvsp[0].integer), (yyvsp[-1].array).bits);
		}
    break;

  case 38: /* arrayprefix: arrayprefix DT_REF  */
                {
			uint64_t val = ~0ULL >> (64 - (yyvsp[-1].array).bits);

			if ((yyvsp[-1].array).bits == 32)
				(yyvsp[-1].array).data = data_add_marker((yyvsp[-1].array).data,
							  REF_PHANDLE,
							  (yyvsp[0].labelref));
			else
				ERROR(&(yylsp[0]), "References are only allowed in "
					    "arrays with 32-bit elements.");

			(yyval.array).data = data_append_integer((yyvsp[-1].array).data, val, (yyvsp[-1].array).bits);
		}
    break;

  case 39: /* arrayprefix: arrayprefix DT_LABEL  */
                {
			(yyval.array).data = data_add_marker((yyvsp[-1].array).data, LABEL, (yyvsp[0].labelref));
		}
    break;

  case 42: /* integer_prim: '(' integer_expr ')'  */
                {
			(yyval.integer) = (yyvsp[-1].integer);
		}
    break;

  case 45: /* integer_trinary: integer_or '?' integer_expr ':' integer_trinary  */
                                                          { (yyval.integer) = (yyvsp[-4].integer) ? (yyvsp[-2].integer) : (yyvsp[0].integer); }
    break;

  case 47: /* integer_or: integer_or DT_OR integer_and  */
                                       { (yyval.integer) = (yyvsp[-2].integer) || (yyvsp[0].integer); }
    break;

  case 49: /* integer_and: integer_and DT_AND integer_bitor  */
                                           { (yyval.integer) = (yyvsp[-2].integer) && (yyvsp[0].integer); }
    break;

  case 51: /* integer_bitor: integer_bitor '|' integer_bitxor  */
                                           { (yyval.integer) = (yyvsp[-2].integer) | (yyvsp[0].integer); }
    break;

  case 53: /* integer_bitxor: integer_bitxor '^' integer_bitand  */
                                            { (yyval.integer) = (yyvsp[-2].integer) ^ (yyvsp[0].integer); }
    break;

  case 55: /* integer_bitand: integer_bitand '&' integer_eq  */
                                        { (yyval.integer) = (yyvsp[-2].integer) & (yyvsp[0].integer); }
    break;

  case 57: /* integer_eq: integer_eq DT_EQ integer_rela  */
                                        { (yyval.integer) = (yyvsp[-2].integer) == (yyvsp[0].integer); }
    break;

  case 58: /* integer_eq: integer_eq DT_NE integer_rela  */
                                        { (yyval.integer) = (yyvsp[-2].integer) != (yyvsp[0].integer); }
    break;

  case 60: /* integer_rela: integer_rela '<' integer_shift  */
                                         { (yyval.integer) = (yyvsp[-2].integer) < (yyvsp[0].integer); }
    break;

  case 61: /* integer_rela: integer_rela '>' integer_shift  */
                                         { (yyval.integer) = (yyvsp[-2].integer) > (yyvsp[0].integer); }
    break;

  case 62: /* integer_rela: integer_rela DT_LE integer_shift  */
                                           { (yyval.integer) = (yyvsp[-2].integer) <= (yyvsp[0].integer); }
    break;

  case 63: /* integer_rela: integer_rela DT_GE integer_shift  */
                                           { (yyval.integer) = (yyvsp[-2].integer) >= (yyvsp[0].integer); }
    break;

  case 64: /* integer_shift: integer_shift DT_LSHIFT integer_add  */
                                              { (yyval.integer) = (yyvsp[-2].integer) << (yyvsp[0].integer); }
    break;

  case 65: /* integer_shift: integer_shift DT_RSHIFT integer_add  */
                                              { (yyval.integer) = (yyvsp[-2].integer) >> (yyvsp[0].integer); }
    break;

  case 67: /* integer_add: integer_add '+' integer_mul  */
                                      { (yyval.integer) = (yyvsp[-2].integer) + (yyvsp[0].integer); }
    break;

  case 68: /* integer_add: integer_add '-' integer_mul  */
                                      { (yyval.integer) = (yyvsp[-2].integer) - (yyvsp[0].integer); }
    break;

  case 70: /* integer_mul: integer_mul '*' integer_unary  */
                                        { (yyval.integer) = (yyvsp[-2].integer) * (yyvsp[0].integer); }
    break;

  case 71: /* integer_mul: integer_mul '/' integer_unary  */
                {
			if ((yyvsp[0].integer) != 0) {
				(yyval.integer) = (yyvsp[-2].integer) / (yyvsp[0].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		}
    break;

  case 72: /* integer_mul: integer_mul '%' integer_unary  */
                {
			if ((yyvsp[0].integer) != 0) {
				(yyval.integer) = (yyvsp[-2].integer) % (yyvsp[0].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		}
    break;

  case 75: /* integer_unary: '-' integer_unary  */
                            { (yyval.integer) = -(yyvsp[0].integer); }
    break;

  case 76: /* integer_unary: '~' integer_unary  */
                            { (yyval.integer) = ~(yyvsp[0].integer); }
    break;

  case 77: /* integer_unary: '!' integer_unary  */
                            { (yyval.integer) = !(yyvsp[0].integer); }
    break;

  case 78: /* bytestring: %empty  */
                {
			(yyval.data) = empty_data;
		}
    break;

  case 79: /* bytestring: bytestring DT_BYTE  */
                {
			(yyval.data) = data_append_byte((yyvsp[-1].data), (yyvsp[0].byte));
		}
    break;

  case 80: /* bytestring: bytestring DT_LABEL  */
                {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
    break;

  case 81: /* subnodes: %empty  */
                {
			(yyval.nodelist) = NULL;
		}
    break;

  case 82: /* subnodes: subnode subnodes  */
                {
			(yyval.nodelist) = chain_node((yyvsp[-1].node), (yyvsp[0].nodelist));
		}
    break;

  case 83: /* subnodes: subnode propdef  */
                {
			ERROR(&(yylsp[0]), "Properties must precede subnodes");
			YYERROR;
		}
    break;

  case 84: /* subnode: DT_PROPNODENAME nodedef  */
                {
			(yyval.node) = name_node((yyvsp[0].node), (yyvsp[-1].propnodename));
		}
    break;

  case 85: /* subnode: DT_DEL_NODE DT_PROPNODENAME ';'  */
                {
			(yyval.node) = name_node(build_node_delete(), (yyvsp[-1].propnodename));
		}
    break;

  case 86: /* subnode: DT_OMIT_NO_REF subnode  */
                {
			(yyval.node) = omit_node_if_unused((yyvsp[0].node));
		}
    break;

  case 87: /* subnode: DT_LABEL subnode  */
                {
			add_label(&(yyvsp[0].node)->labels, (yyvsp[-1].labelref));
			(yyval.node) = (yyvsp[0].node);
		}
    break;



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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}



void yyerror(char const *s)
{
	ERROR(&yylloc, "%s", s);
}

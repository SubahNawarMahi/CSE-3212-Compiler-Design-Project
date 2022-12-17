
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1807006.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include<math.h>
    #include <string.h>	

	void yyerror(char *);

	char variable[1000][1000];
 int store[1000];
int ara_int[10000];
double ara_double[10000];
char store_string[1000][1000];
float store_float[1000];
int type_of_id[1000];
int last_point=1,f=1;
//condition for if else
int match_condition;
//switch case handle
double switchValue;
//fucntion parameter
char parameterar[100][100];
int cnt_func = 1;

//parameter function here
int func_here(char *s)
{
	int i;
	for(i=1;i<cnt_func;i++)
	{
		if(strcmp(parameterar[i],s)==0)
		return 1;
	}
	return 0;
}
//assign function
int assign_func(char *s)
{
  strcpy(parameterar[cnt_func],s);
	cnt_func++;
return 1;
}
//is the variable declared?
int isdeclared(char *s)
{
//printf("\nisdeclared function called\n");
int i;
for(i=1;i<last_point;i++)
{
	if(strcmp(variable[i],s)==0)
	return 1;
}
return 0;
}
//is the FUNCTION variable declared?
int isdeclaredf(char *s)
{
//printf("\nisdeclared function called\n");
int i;
for(i=1;i<last_point;i++)
{
	if(strcmp(variable[i],s)==0)
	return 1;
}
return 0;
}
//assign value
int assign(char *s)
{
	//printf("\nassign function called\n");
	if(isdeclared(s)==1)
 	return 0;
	strcpy(variable[last_point],s);
	store[last_point]=0;
	last_point++;
	return 1;
}


 int setval(char *s,int val)
    {
        if(isdeclared(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store[ok]=val;
        return 1;
    }

    int getval(char *s)
    {

        int pos=-1;
        int i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }



/* Line 189 of yacc.c  */
#line 188 "1807006.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     AVARIABLE = 260,
     STRING = 261,
     INT = 262,
     FLOAT = 263,
     DOUBLE = 264,
     CHAR = 265,
     BOOL = 266,
     ARRAY_TYPE = 267,
     START = 268,
     INC = 269,
     DEC = 270,
     EOL = 271,
     FOB = 272,
     FCB = 273,
     FACTORIAL = 274,
     POWER = 275,
     VOID = 276,
     EXIT = 277,
     PI = 278,
     WHILE = 279,
     FOR = 280,
     IF = 281,
     ELSEIF = 282,
     ELSE = 283,
     THEN = 284,
     PRINT = 285,
     SCAN = 286,
     SWITCH = 287,
     CASE = 288,
     DEFAULT = 289,
     ASSIGN = 290,
     LOG10 = 291,
     LN = 292,
     EXP = 293,
     SQRT = 294,
     FLOOR = 295,
     CEIL = 296,
     ABS = 297,
     SIN = 298,
     ASIN = 299,
     COS = 300,
     ACOS = 301,
     TAN = 302,
     ATAN = 303,
     BREAK = 304,
     INCLUDE = 305,
     HEADER = 306,
     FUNC = 307,
     IFX = 308,
     NE = 309,
     LE = 310,
     GE = 311,
     XOR = 312,
     OR = 313,
     AND = 314,
     NOT = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 115 "1807006.y"

	
	double floating;
	char   *varName;
	char   *stringName;
	int param;
	int e;
	int ei;




/* Line 214 of yacc.c  */
#line 297 "1807006.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 309 "1807006.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   532

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    64,     2,     2,
       2,     2,    62,    60,    71,    61,     2,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,     2,
      56,    54,    55,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,     2,     2,     2,     2,     2,    76,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    57,
      58,    59,    65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    12,    15,    16,    25,    26,
      30,    32,    37,    38,    39,    41,    44,    46,    50,    53,
      60,    62,    64,    66,    68,    70,    72,    74,    78,    80,
      85,    89,    91,    93,    96,   102,   108,   114,   116,   121,
     138,   155,   166,   173,   175,   177,   183,   186,   195,   196,
     198,   201,   203,   204,   209,   212,   214,   223,   231,   233,
     236,   238,   243,   246,   248,   254,   256,   258,   262,   266,
     270,   274,   278,   282,   286,   290,   294,   298,   302,   306,
     310,   314,   317,   321,   324,   331,   334,   337,   340,   343,
     346,   349,   352,   355,   358,   361,   364
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    82,    79,    13,    69,    83,    70,    -1,
      -1,    -1,    80,    80,    -1,    -1,    52,     4,    17,    81,
      18,    69,    83,    70,    -1,    -1,    81,    71,     4,    -1,
       4,    -1,    50,    72,    51,    73,    -1,    -1,    -1,     3,
      -1,    83,    88,    -1,    84,    -1,    86,    87,    16,    -1,
      85,    16,    -1,    12,    86,     4,    72,     3,    73,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      21,    -1,     6,    -1,    87,    71,     4,    -1,     4,    -1,
       5,    35,     3,    16,    -1,    87,    35,   101,    -1,    16,
      -1,    84,    -1,   101,    16,    -1,    30,    17,     4,    18,
      16,    -1,    30,    17,   101,    18,    16,    -1,    30,    17,
       6,    18,    16,    -1,    31,    -1,     4,    35,   101,    16,
      -1,    25,    17,     4,    35,     3,    74,     4,    59,     3,
      74,     4,    15,     3,    18,    69,    70,    -1,    25,    17,
       4,    35,     3,    74,     4,    58,     3,    74,     4,    14,
       3,    18,    69,    70,    -1,    24,    17,     4,    58,     3,
      74,     3,    18,    69,    70,    -1,    24,    17,     3,    18,
      69,    70,    -1,    89,    -1,    95,    -1,    52,     4,    17,
      18,    16,    -1,    90,    91,    -1,    26,    17,   101,    18,
      29,    69,    88,    70,    -1,    -1,    93,    -1,    93,    92,
      -1,    92,    -1,    -1,    28,    69,    88,    70,    -1,    93,
      94,    -1,    94,    -1,    27,    17,   101,    18,    29,    69,
      88,    70,    -1,    32,    17,    96,    18,    69,    97,    70,
      -1,     4,    -1,    99,    98,    -1,    98,    -1,    34,    74,
      88,    49,    -1,    99,   100,    -1,   100,    -1,    33,   101,
      74,    88,    49,    -1,     3,    -1,     4,    -1,   101,    60,
     101,    -1,   101,    61,   101,    -1,   101,    62,   101,    -1,
     101,    63,   101,    -1,   101,    64,   101,    -1,   101,    56,
     101,    -1,   101,    55,   101,    -1,   101,    58,   101,    -1,
     101,    75,   101,    -1,   101,    54,   101,    -1,   101,    76,
     101,    -1,   101,    67,   101,    -1,   101,    66,   101,    -1,
     101,    65,   101,    -1,    68,   101,    -1,    17,   101,    18,
      -1,    42,   101,    -1,    20,    17,     3,    71,     3,    18,
      -1,    40,   101,    -1,    39,   101,    -1,    41,   101,    -1,
      43,   101,    -1,    44,   101,    -1,    45,   101,    -1,    46,
     101,    -1,    47,   101,    -1,    48,   101,    -1,    36,   101,
      -1,    37,   101,    -1,   101,    19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   151,   151,   152,   154,   155,   157,   159,   162,   163,
     169,   180,   181,   183,   184,   185,   186,   189,   190,   193,
     202,   203,   204,   205,   206,   207,   208,   211,   219,   225,
     252,   273,   274,   275,   276,   286,   290,   291,   298,   309,
     317,   326,   333,   342,   343,   344,   351,   354,   364,   365,
     366,   367,   369,   370,   383,   384,   387,   403,   406,   418,
     419,   421,   428,   429,   431,   451,   452,   461,   466,   473,
     479,   490,   497,   500,   503,   506,   509,   512,   515,   518,
     521,   524,   528,   529,   538,   544,   552,   560,   569,   577,
     585,   593,   601,   609,   617,   625,   633
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "AVARIABLE",
  "STRING", "INT", "FLOAT", "DOUBLE", "CHAR", "BOOL", "ARRAY_TYPE",
  "START", "INC", "DEC", "EOL", "FOB", "FCB", "FACTORIAL", "POWER", "VOID",
  "EXIT", "PI", "WHILE", "FOR", "IF", "ELSEIF", "ELSE", "THEN", "PRINT",
  "SCAN", "SWITCH", "CASE", "DEFAULT", "ASSIGN", "LOG10", "LN", "EXP",
  "SQRT", "FLOOR", "CEIL", "ABS", "SIN", "ASIN", "COS", "ACOS", "TAN",
  "ATAN", "BREAK", "INCLUDE", "HEADER", "FUNC", "IFX", "'='", "'>'", "'<'",
  "NE", "LE", "GE", "'+'", "'-'", "'*'", "'/'", "'%'", "XOR", "OR", "AND",
  "NOT", "'{'", "'}'", "','", "'['", "']'", "':'", "'G'", "'N'", "$accept",
  "program", "functions", "function", "parameters", "include", "lines",
  "declaration", "array_declaration", "type", "id", "statement",
  "if_statements", "if_statement", "els_statement", "last_else",
  "elif_statement", "last_elif", "switch_statements", "switch_variable",
  "cases", "default", "caselist", "case", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    61,    62,    60,   309,   310,   311,
      43,    45,    42,    47,    37,   312,   313,   314,   315,   123,
     125,    44,    91,    93,    58,    71,    78
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      81,    82,    82,    83,    83,    83,    83,    84,    84,    85,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    90,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    95,    96,    97,
      97,    98,    99,    99,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     0,     2,     0,     8,     0,     3,
       1,     4,     0,     0,     1,     2,     1,     3,     2,     6,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     1,     1,     2,     5,     5,     5,     1,     4,    16,
      16,    10,     6,     1,     1,     5,     2,     8,     0,     1,
       2,     1,     0,     4,     2,     1,     8,     7,     1,     2,
       1,     4,     2,     1,     5,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     6,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,     0,     0,     4,     0,     1,     0,     0,     6,     0,
       0,     0,     5,    11,     8,    13,    10,     0,    14,    26,
      20,    21,    22,    23,    24,     0,    25,     0,    16,     0,
       0,     0,     0,     0,    65,    66,    31,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      32,    15,    43,    48,    44,     0,    18,    28,     0,     0,
      13,     9,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,    94,    95,    86,    85,    87,    83,    88,    89,
      90,    91,    92,    93,     0,    81,     0,     0,    46,    51,
      49,    55,    33,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,    66,     0,     0,    58,     0,     0,     0,     0,    50,
      54,    76,    73,    72,    74,    67,    68,    69,    70,    71,
      80,    79,    78,    75,    77,     0,    30,    27,     7,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    19,     0,     0,     0,     0,     0,
      34,    36,    35,     0,    45,     0,    53,    84,    42,     0,
       0,     0,     0,     0,     0,    60,     0,    63,     0,     0,
       0,     0,     0,     0,    57,    59,    62,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    61,
      56,    41,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    17,     3,    27,    60,    29,    30,
      69,    61,    62,    63,    98,    99,   100,   101,    64,   135,
     194,   195,   196,   197,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -111
static const yytype_int16 yypact[] =
{
       5,   -70,     4,   -45,   -31,  -111,    22,    25,   -45,   -34,
      23,   -28,  -111,  -111,    57,   511,  -111,    13,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,    80,  -111,   100,  -111,    48,
      18,    -4,    62,    81,  -111,    59,  -111,   272,    78,    79,
      82,    88,    96,  -111,    97,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,    94,   272,  -111,
    -111,  -111,  -111,    -3,  -111,   268,  -111,  -111,    83,    21,
     511,  -111,    43,   272,  -111,   318,   116,    26,   118,   272,
     257,   119,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   110,   -18,   111,    60,  -111,  -111,
      -3,  -111,  -111,  -111,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   130,  -111,
     272,   131,   155,   135,   291,  -111,    63,   132,    91,   121,
     341,   133,   136,   368,  -111,   139,   142,   272,   210,  -111,
    -111,   -16,   -16,   -16,   -16,   205,   205,   -13,   -13,   -13,
     -18,   -18,   -18,   440,   440,   137,   440,  -111,  -111,   101,
    -111,   166,   104,   174,   175,   153,   167,   168,   172,   120,
     177,   391,   134,  -111,  -111,   187,   138,   141,   154,   140,
    -111,  -111,  -111,    -1,  -111,   161,  -111,  -111,  -111,   203,
     206,   210,   272,   158,   159,  -111,    -1,  -111,   143,   193,
     -24,   163,   417,   210,  -111,  -111,  -111,   210,   169,   234,
     236,  -111,   210,   194,   178,   189,   170,   171,   215,  -111,
    -111,  -111,   261,   262,  -111,   259,   264,   279,   280,   267,
     270,   217,   221,   225,   251,  -111,  -111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,  -111,   283,  -111,  -111,   269,    12,  -111,   281,
    -111,  -110,  -111,  -111,  -111,   227,  -111,   238,  -111,  -111,
    -111,   145,  -111,   146,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      75,   103,     4,   103,     5,    -3,   103,     6,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       9,    95,    67,    68,    96,    97,    10,    28,   172,   127,
     128,    31,   192,   193,   209,   210,   124,   119,    11,    13,
      14,    15,   130,   133,   108,   109,   110,   111,   112,   113,
     114,   115,   113,   114,   115,     1,   120,   116,   117,   116,
     117,    16,   116,   117,    66,    70,    71,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   201,    28,   156,    32,    72,    19,    20,    21,    22,
      23,    24,   121,   213,    73,    76,    77,   214,    94,    78,
     171,    26,   218,    34,    35,    79,    19,    20,    21,    22,
      23,    24,    25,    80,    81,   123,    36,    37,   118,   126,
      38,    26,   129,   134,    39,    40,    41,   136,   137,   138,
      42,    43,    44,   155,   161,   157,    45,    46,   159,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   163,
     162,   166,    57,   173,   167,   202,   164,   169,    34,    35,
     170,    19,    20,    21,    22,    23,    24,    25,    58,   175,
      59,    36,    37,   176,   174,    38,    26,   177,   178,    39,
      40,    41,   179,   180,   181,    42,    43,    44,   182,   183,
     198,    45,    46,   184,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   186,   187,   199,    57,   188,   191,
     200,   208,   207,    34,    35,   189,    19,    20,    21,    22,
      23,    24,    25,    58,   103,   158,    36,    37,   190,   204,
      38,    26,   203,   211,    39,    40,    41,   216,   215,   217,
      42,    43,    44,   219,   222,   223,    45,    46,   220,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   221,
      34,   131,    57,   132,   224,   225,   226,   110,   111,   112,
     113,   114,   115,   227,    37,    34,    74,    38,    58,   228,
     116,   117,   229,   230,   102,   231,   233,   103,   232,    37,
     234,    12,    38,    45,    46,   235,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    33,   160,    45,    46,
     103,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   236,   104,   105,   106,    58,   107,   139,   108,   109,
     110,   111,   112,   113,   114,   115,   125,   103,   140,   122,
      58,   205,   206,   116,   117,   104,   105,   106,     0,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   165,
     103,     0,     0,     0,     0,     0,   116,   117,     0,     0,
       0,     0,   104,   105,   106,     0,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   168,   103,     0,     0,
       0,     0,     0,   116,   117,   104,   105,   106,     0,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   185,
     103,     0,     0,     0,     0,     0,   116,   117,     0,     0,
       0,     0,   104,   105,   106,     0,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   103,     0,     0,     0,
       0,     0,     0,   116,   117,   104,   105,   106,     0,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   103,
       0,     0,     0,     0,     0,     0,   116,   117,     0,     0,
       0,   104,   105,   106,     0,   107,     0,   108,   109,   110,
     111,   112,   113,   114,   115,     0,     0,     0,     0,     0,
       0,   212,   116,   117,   104,   105,   106,     0,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
       0,     0,     0,     0,    18,   116,   117,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    26
};

static const yytype_int16 yycheck[] =
{
      37,    19,    72,    19,     0,     0,    19,    52,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      51,    58,     4,     5,    27,    28,     4,    15,   138,     3,
       4,    18,    33,    34,    58,    59,    73,    16,    13,    73,
      17,    69,    79,    80,    60,    61,    62,    63,    64,    65,
      66,    67,    65,    66,    67,    50,    35,    75,    76,    75,
      76,     4,    75,    76,    16,    69,     4,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   191,    70,   120,    71,     4,     6,     7,     8,     9,
      10,    11,    71,   203,    35,    17,    17,   207,     4,    17,
     137,    21,   212,     3,     4,    17,     6,     7,     8,     9,
      10,    11,    12,    17,    17,    72,    16,    17,    35,     3,
      20,    21,     4,     4,    24,    25,    26,    17,    17,    69,
      30,    31,    32,     3,    71,     4,    36,    37,     3,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    58,
      18,    18,    52,    16,    18,   192,    35,    18,     3,     4,
      18,     6,     7,     8,     9,    10,    11,    12,    68,     3,
      70,    16,    17,    69,    73,    20,    21,     3,     3,    24,
      25,    26,    29,    16,    16,    30,    31,    32,    16,    69,
      29,    36,    37,    16,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    70,    18,     3,    52,    70,    69,
       4,    18,    69,     3,     4,    74,     6,     7,     8,     9,
      10,    11,    12,    68,    19,    70,    16,    17,    74,    70,
      20,    21,    74,    70,    24,    25,    26,     3,    69,     3,
      30,    31,    32,    49,    74,    74,    36,    37,    70,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    70,
       3,     4,    52,     6,    49,     4,     4,    62,    63,    64,
      65,    66,    67,    14,    17,     3,     4,    20,    68,    15,
      75,    76,     3,     3,    16,    18,    69,    19,    18,    17,
      69,     8,    20,    36,    37,    70,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    25,    16,    36,    37,
      19,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    70,    54,    55,    56,    68,    58,   100,    60,    61,
      62,    63,    64,    65,    66,    67,    18,    19,   100,    70,
      68,   196,   196,    75,    76,    54,    55,    56,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    18,
      19,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    18,    19,    -1,    -1,
      -1,    -1,    -1,    75,    76,    54,    55,    56,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    18,
      19,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    54,    55,    56,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    54,    55,    56,    -1,    58,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    75,    76,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    78,    82,    72,     0,    52,    79,    80,    51,
       4,    13,    80,    73,    17,    69,     4,    81,     3,     6,
       7,     8,     9,    10,    11,    12,    21,    83,    84,    85,
      86,    18,    71,    86,     3,     4,    16,    17,    20,    24,
      25,    26,    30,    31,    32,    36,    37,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    52,    68,    70,
      84,    88,    89,    90,    95,   101,    16,     4,     5,    87,
      69,     4,     4,    35,     4,   101,    17,    17,    17,    17,
      17,    17,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,     4,   101,    27,    28,    91,    92,
      93,    94,    16,    19,    54,    55,    56,    58,    60,    61,
      62,    63,    64,    65,    66,    67,    75,    76,    35,    16,
      35,    71,    83,    72,   101,    18,     3,     3,     4,     4,
     101,     4,     6,   101,     4,    96,    17,    17,    69,    92,
      94,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,     3,   101,     4,    70,     3,
      16,    71,    18,    58,    35,    18,    18,    18,    18,    18,
      18,   101,    88,    16,    73,     3,    69,     3,     3,    29,
      16,    16,    16,    69,    16,    18,    70,    18,    70,    74,
      74,    69,    33,    34,    97,    98,    99,   100,    29,     3,
       4,    88,   101,    74,    70,    98,   100,    69,    18,    58,
      59,    70,    74,    88,    88,    69,     3,     3,    88,    49,
      70,    70,    74,    74,    49,     4,     4,    14,    15,     3,
       3,    18,    18,    69,    69,    70,    70
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 151 "1807006.y"
    {printf("\n Program executed successfully\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 159 "1807006.y"
    {	
												printf("\nFunction Declared\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 163 "1807006.y"
    { 
									if(func_here((yyvsp[(3) - (3)].varName))==1)
									 printf("\n parameter already exists!\n");
									else
									 assign_func((yyvsp[(3) - (3)].varName));
								;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 169 "1807006.y"
    { 
								if(func_here((yyvsp[(1) - (1)].varName))==1)
									printf("\nparameter already exists!\n");
								else
									 assign_func((yyvsp[(1) - (1)].varName));

								
							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 180 "1807006.y"
    {printf("\nheader found\n");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 189 "1807006.y"
    {printf("\nValid declaration\n");;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 190 "1807006.y"
    {printf("\nArray declaration Successful\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 193 "1807006.y"
    { 
									if(isdeclared((yyvsp[(3) - (6)].varName))==1)
									{printf("\nDouble declaration!");}
									else
									{
										assign((yyvsp[(3) - (6)].varName));
									}
										;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 202 "1807006.y"
    {printf("\nInteger Type declaration\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 203 "1807006.y"
    {printf("\nFloat Type declaration\n");;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 204 "1807006.y"
    {printf("\nDouble Type declaration\n");;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 205 "1807006.y"
    {printf("\nChar Type declaration\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 206 "1807006.y"
    {printf("\nBool Type declaration\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 207 "1807006.y"
    {printf("\nVoid Type declaration\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 211 "1807006.y"
    {
					if(isdeclared((yyvsp[(3) - (3)].varName))==1)
						printf("\nDouble declaration!");
					else
						assign((yyvsp[(3) - (3)].varName));

				;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 219 "1807006.y"
    {
				if(isdeclared((yyvsp[(1) - (1)].varName))==1)
						printf("\nDouble declaration!");
					else
						assign((yyvsp[(1) - (1)].varName));
			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 225 "1807006.y"
    {
				if(isdeclared((yyvsp[(1) - (4)].varName))==1)
						{//printf("\nDouble declaration!");
						int a;		
						}
					else
						{assign((yyvsp[(1) - (4)].varName));}
				printf("\n%s",(yyvsp[(1) - (4)].varName));
				if(setval((yyvsp[(1) - (4)].varName),(yyvsp[(3) - (4)].floating))==0)
								{
								 (yyval.ei)=0;
							//	printf("\nNot declared\n");
									}
								else
								{
								(yyval.ei)=(yyvsp[(3) - (4)].floating);
								}
			if(isdeclared((yyvsp[(1) - (4)].varName))==0)
				{
					printf("Can't print, Value is not declared.\n");
				}
			else 
			{	
				printf("\nValue of the variable %s:  %d\t\n",(yyvsp[(1) - (4)].varName), store[getval((yyvsp[(1) - (4)].varName))]);
			}
				
			;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 252 "1807006.y"
    {	printf("\ninit called\n");
						/*	if(isdeclared($1)==1)
						printf("\nDouble declaration!");
					  else
						assign($1);*/
								 if(setval((yyvsp[(1) - (3)].ei),(yyvsp[(3) - (3)].floating))==0)
								{
								 (yyval.ei)=0;
								printf("\nNot declared\n");
									}
								else
								{
								(yyval.ei)=(yyvsp[(3) - (3)].floating);
								}
					
							;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 275 "1807006.y"
    {(yyval.ei)=(yyvsp[(1) - (2)].floating);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 276 "1807006.y"
    {
								if(isdeclared((yyvsp[(3) - (5)].varName))==0)
				{
					printf("Can't print, Value is not declared.\n");
				}
			else 
			{	
				printf("\nValue of the variable %s:  %d\t\n",(yyvsp[(3) - (5)].varName), store[getval((yyvsp[(3) - (5)].varName))]);
			}
							;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 286 "1807006.y"
    {	int c=(yyvsp[(3) - (5)].floating);
								(yyval.ei)=c;
								printf("\n%d\n",c);
								;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 290 "1807006.y"
    { printf("\n%s\n",(yyvsp[(3) - (5)].stringName));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 291 "1807006.y"
    {	double a;
				scanf("%lf",&a);
				printf("Input value is %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				//printf("%lf\n",ceil(a)); return 0;
				;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 298 "1807006.y"
    {
								if(setval((yyvsp[(1) - (4)].varName),(yyvsp[(3) - (4)].floating))==0)
								{
								 (yyval.ei)=0;
								printf("\nNot declared\n");
									}
								else
								{
								(yyval.ei)=(yyvsp[(3) - (4)].floating);
								}
								;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 310 "1807006.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (16)].floating) ; i>= (yyvsp[(9) - (16)].floating) ; i-=(yyvsp[(13) - (16)].floating))
			{
				printf("for loop Decreasing %d\n",i);
			}printf("\n");		    
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 318 "1807006.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (16)].floating) ; i<= (yyvsp[(9) - (16)].floating) ; i+=(yyvsp[(13) - (16)].floating))
			{
				printf("for loop increasing %d\n",i);
			} printf("\n");	 			    
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 326 "1807006.y"
    {
			int a = store[getval((yyvsp[(3) - (10)].varName))], inc = (yyvsp[(7) - (10)].floating);
			while((a+=inc)<= (yyvsp[(5) - (10)].floating))
			{
				printf("While loop is executing value of variable %s : %d\n", (yyvsp[(3) - (10)].varName), a);
			}
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 333 "1807006.y"
    {
			int inc = (yyvsp[(3) - (6)].floating);
			if(inc!=0)
			
				printf("Condition always true,Infinity While loop is executing\n");
			else
				printf("Condition always false,While loop won't be executed\n");
			
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 342 "1807006.y"
    { match_condition=0;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 343 "1807006.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 344 "1807006.y"
    {
								
				                     printf("function (%s) is called",(yyvsp[(2) - (5)].varName));
								;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 354 "1807006.y"
    { 	if((int)(yyvsp[(3) - (8)].floating))
													{	
														printf("Value of expression in if block is %.0lf\n",(yyvsp[(3) - (8)].floating));
														printf("\nCondition is true; Inside If block\n");
														match_condition=1;
													}
												else
												     {printf("\nCondition is not true; Inside Else-if block\n");}	
												;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 370 "1807006.y"
    {    if(match_condition)
										{printf("\ncondition is already true. so ignore else statement \n");}
									else
									{
										printf("\ncondition for else statement is true\n");
										match_condition=1;
										//printf("Value of expression in else block is %.0lf\n",$3);
									}
								;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 387 "1807006.y"
    { 	if(match_condition)
												{printf("\ncondition is already true. so ignore else-if statement \n");}
												else
													{
												printf("\ncondition for else if statement is checking\n");
												
												//printf("Value of expression in else block is %.0lf\n",$3);
													
													if((int)(yyvsp[(3) - (8)].floating))
													{printf("\nCondition is true; Inside Else-If block\n");
														match_condition=1;}
												else
												     {printf("\nCondition is not true; Inside Else block\n");}
												}
											;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 403 "1807006.y"
    {	printf("\nSwitch Case matched\n");
														match_condition=0;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 406 "1807006.y"
    {
						if( isdeclared((yyvsp[(1) - (1)].varName)) == 0)
						{
							//$$=0;
							printf("\nNot declared\n");
						}
						else
						{  
							//$$=store[getval($1)];
							switchValue=store[getval((yyvsp[(1) - (1)].varName))];}
					;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 421 "1807006.y"
    {
						if(match_condition){
						 printf("Condition already fulfilled.Ignoring default option.\n");}
						else{
						 printf(" No match found.Executing default option.\n");}
					;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 431 "1807006.y"
    {
									if(match_condition){
                        			printf("Condition already fulfilled.Ignoring current option\n");
                       						 }
                    else{
                        int isTrue = (fabs((yyvsp[(2) - (5)].floating)-switchValue)<1e-9);
                            if(isTrue){
                                printf("Case matched.\n");
                                printf("Value of expression in current case %.4lf\n",(yyvsp[(2) - (5)].floating));
                                match_condition = 1;
                            }
                            else{
                                
                                printf("Condition of current case doesn't match.\n");
                              
                            }
								}
					;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 451 "1807006.y"
    {(yyval.floating) = (yyvsp[(1) - (1)].floating);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 452 "1807006.y"
    {
						if( isdeclared((yyvsp[(1) - (1)].varName)) == 0)
						{
							(yyval.floating)=0;
							printf("\nNot declared\n");
						}
						else
						(yyval.floating)=store[getval((yyvsp[(1) - (1)].varName))];
					;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 461 "1807006.y"
    { 	int d=(yyvsp[(3) - (3)].floating),c=(yyvsp[(1) - (3)].floating),r;
									r = c + d; 
								printf("Sum=\n",r);
									(yyval.floating)=r;
							;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 466 "1807006.y"
    {
								int d=(yyvsp[(3) - (3)].floating),c=(yyvsp[(1) - (3)].floating),r;
								r = c-d;
								  
								printf("Subtraction=%d\n",r);
								(yyval.floating) = r;
							;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 473 "1807006.y"
    { 
								int d=(yyvsp[(3) - (3)].floating),c=(yyvsp[(1) - (3)].floating),r;
								r = c*d;
								printf("Multiplication=%d\n",r);
								(yyval.floating)=r;
							;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 479 "1807006.y"
    {	
								int d = (yyvsp[(3) - (3)].floating),c=(yyvsp[(1) - (3)].floating);
								if(d != 0)
								{ 
								(yyval.floating) = c / d; 
								printf("Division=\n");}
								else
								{
									printf("\nDivision by zero\n");
								}
							;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 490 "1807006.y"
    { 	int a,b,c;
								a = (yyvsp[(1) - (3)].floating);
								b=(yyvsp[(3) - (3)].floating);
								c = a % b; 
								printf("Modulus=%d\n",c);
								(yyval.floating)=c;
							;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 497 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating)<(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 500 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating)>(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 503 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating)<=(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 506 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating)>=(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 509 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating)==(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 512 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating) != (yyvsp[(3) - (3)].floating));
							;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 515 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating) && (yyvsp[(3) - (3)].floating));
							;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 518 "1807006.y"
    {
							 (yyval.floating) = ((yyvsp[(1) - (3)].floating) || (yyvsp[(3) - (3)].floating));
							;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 521 "1807006.y"
    {
							 (yyval.floating) = ((int)(yyvsp[(1) - (3)].floating) ^ (int)(yyvsp[(3) - (3)].floating));
							;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 524 "1807006.y"
    {
							(yyval.floating) = !(yyvsp[(2) - (2)].floating);
						;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 528 "1807006.y"
    { (yyval.floating) = (yyvsp[(2) - (3)].floating);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 529 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("Absolute value is %d\n",abs((yyvsp[(2) - (2)].floating)));
				(yyval.floating)=abs((yyvsp[(2) - (2)].floating));
				;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 538 "1807006.y"
    {     int a,b,c;
									a=(yyvsp[(3) - (6)].floating),b=(yyvsp[(5) - (6)].floating);
									c = pow((yyvsp[(3) - (6)].floating),(yyvsp[(5) - (6)].floating));
									printf("%d^%d value is %d\n",a,b,c);
									(yyval.floating) = c;
								;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 544 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("floor value is %lf\n",floor((yyvsp[(2) - (2)].floating)));
				(yyval.floating)=floor((yyvsp[(2) - (2)].floating));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 552 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("square root value is %lf\n",sqrt((yyvsp[(2) - (2)].floating)));
				(yyval.floating)=sqrt((yyvsp[(2) - (2)].floating));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 560 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("ceil value is %lf\n",ceil((yyvsp[(2) - (2)].floating)));
				(yyval.floating)=ceil((yyvsp[(2) - (2)].floating));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 569 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("sine value of %d is %lf\n",(yyvsp[(2) - (2)].floating),sin((yyvsp[(2) - (2)].floating)*3.1416/180));
				(yyval.floating)=sin((yyvsp[(2) - (2)].floating)*3.1416/180);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 577 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				a=(yyvsp[(2) - (2)].floating);
				printf("asine/Inverse of sine value of %d in degree is %lf\n",(yyvsp[(2) - (2)].floating),asin(a)*180/3.1416);
				(yyval.floating)=acos((yyvsp[(2) - (2)].floating)*180/3.1416);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 585 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("cosine value of %d is %lf\n",(yyvsp[(2) - (2)].floating),cos((yyvsp[(2) - (2)].floating)*3.1416/180));
				(yyval.floating)=cos((yyvsp[(2) - (2)].floating)*3.1416/180);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 593 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("acosine/Inverse of cosine value of %d in degree is %lf\n",(yyvsp[(2) - (2)].floating),acos((yyvsp[(2) - (2)].floating))*180/3.1416);
				(yyval.floating)=acos((yyvsp[(2) - (2)].floating)*180/3.1416);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 601 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("tangent value of %d is %lf\n",(yyvsp[(2) - (2)].floating),tan((yyvsp[(2) - (2)].floating)*3.1416/180));
				(yyval.floating)=tan((yyvsp[(2) - (2)].floating)*3.1416/180);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 609 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("Inverse of tangent value of %d in degree is %lf\n",(yyvsp[(2) - (2)].floating),atan((yyvsp[(2) - (2)].floating))*180/3.1416);
				(yyval.floating)=acos((yyvsp[(2) - (2)].floating)*180/3.1416);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 617 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("LOG10 value of %d is %lf\n",(yyvsp[(2) - (2)].floating),(log((yyvsp[(2) - (2)].floating)*1.0)/log(10.0)));
				(yyval.floating)=(log((yyvsp[(2) - (2)].floating)*1.0)/log(10.0));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 625 "1807006.y"
    {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("ln value of %d is %lf\n",(yyvsp[(2) - (2)].floating),log((yyvsp[(2) - (2)].floating)));
				(yyval.floating)=log((yyvsp[(2) - (2)].floating));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 633 "1807006.y"
    { int ans = 1;
				for(int i=1;i<=(yyvsp[(1) - (2)].floating); i++)
				{
				 ans*=i;
				}
				printf("Value of Factorial is: %d\n",ans);
				(yyval.floating)=ans;
	 			;}
    break;



/* Line 1455 of yacc.c  */
#line 2600 "1807006.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 645 "1807006.y"




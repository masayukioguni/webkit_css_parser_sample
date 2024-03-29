/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse cssyyparse
#define yylex   cssyylex
#define yyerror cssyyerror
#define yylval  cssyylval
#define yychar  cssyychar
#define yydebug cssyydebug
#define yynerrs cssyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     LOWEST_PREC = 258,
     UNIMPORTANT_TOK = 259,
     WHITESPACE = 260,
     SGML_CD = 261,
     INCLUDES = 262,
     DASHMATCH = 263,
     BEGINSWITH = 264,
     ENDSWITH = 265,
     CONTAINS = 266,
     STRING = 267,
     IDENT = 268,
     NTH = 269,
     HEX = 270,
     IDSEL = 271,
     IMPORT_SYM = 272,
     PAGE_SYM = 273,
     MEDIA_SYM = 274,
     FONT_FACE_SYM = 275,
     CHARSET_SYM = 276,
     NAMESPACE_SYM = 277,
     WEBKIT_RULE_SYM = 278,
     WEBKIT_DECLS_SYM = 279,
     WEBKIT_KEYFRAME_RULE_SYM = 280,
     WEBKIT_KEYFRAMES_SYM = 281,
     WEBKIT_VALUE_SYM = 282,
     WEBKIT_MEDIAQUERY_SYM = 283,
     WEBKIT_SELECTOR_SYM = 284,
     TOPLEFTCORNER_SYM = 285,
     TOPLEFT_SYM = 286,
     TOPCENTER_SYM = 287,
     TOPRIGHT_SYM = 288,
     TOPRIGHTCORNER_SYM = 289,
     BOTTOMLEFTCORNER_SYM = 290,
     BOTTOMLEFT_SYM = 291,
     BOTTOMCENTER_SYM = 292,
     BOTTOMRIGHT_SYM = 293,
     BOTTOMRIGHTCORNER_SYM = 294,
     LEFTTOP_SYM = 295,
     LEFTMIDDLE_SYM = 296,
     LEFTBOTTOM_SYM = 297,
     RIGHTTOP_SYM = 298,
     RIGHTMIDDLE_SYM = 299,
     RIGHTBOTTOM_SYM = 300,
     ATKEYWORD = 301,
     IMPORTANT_SYM = 302,
     MEDIA_ONLY = 303,
     MEDIA_NOT = 304,
     MEDIA_AND = 305,
     REMS = 306,
     QEMS = 307,
     EMS = 308,
     EXS = 309,
     PXS = 310,
     CMS = 311,
     MMS = 312,
     INS = 313,
     PTS = 314,
     PCS = 315,
     DEGS = 316,
     RADS = 317,
     GRADS = 318,
     TURNS = 319,
     MSECS = 320,
     SECS = 321,
     HERTZ = 322,
     KHERTZ = 323,
     DIMEN = 324,
     INVALIDDIMEN = 325,
     PERCENTAGE = 326,
     FLOATTOKEN = 327,
     INTEGER = 328,
     URI = 329,
     FUNCTION = 330,
     ANYFUNCTION = 331,
     NOTFUNCTION = 332,
     CALCFUNCTION = 333,
     MINFUNCTION = 334,
     MAXFUNCTION = 335,
     UNICODERANGE = 336
   };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define LOWEST_PREC 258
#define UNIMPORTANT_TOK 259
#define WHITESPACE 260
#define SGML_CD 261
#define INCLUDES 262
#define DASHMATCH 263
#define BEGINSWITH 264
#define ENDSWITH 265
#define CONTAINS 266
#define STRING 267
#define IDENT 268
#define NTH 269
#define HEX 270
#define IDSEL 271
#define IMPORT_SYM 272
#define PAGE_SYM 273
#define MEDIA_SYM 274
#define FONT_FACE_SYM 275
#define CHARSET_SYM 276
#define NAMESPACE_SYM 277
#define WEBKIT_RULE_SYM 278
#define WEBKIT_DECLS_SYM 279
#define WEBKIT_KEYFRAME_RULE_SYM 280
#define WEBKIT_KEYFRAMES_SYM 281
#define WEBKIT_VALUE_SYM 282
#define WEBKIT_MEDIAQUERY_SYM 283
#define WEBKIT_SELECTOR_SYM 284
#define TOPLEFTCORNER_SYM 285
#define TOPLEFT_SYM 286
#define TOPCENTER_SYM 287
#define TOPRIGHT_SYM 288
#define TOPRIGHTCORNER_SYM 289
#define BOTTOMLEFTCORNER_SYM 290
#define BOTTOMLEFT_SYM 291
#define BOTTOMCENTER_SYM 292
#define BOTTOMRIGHT_SYM 293
#define BOTTOMRIGHTCORNER_SYM 294
#define LEFTTOP_SYM 295
#define LEFTMIDDLE_SYM 296
#define LEFTBOTTOM_SYM 297
#define RIGHTTOP_SYM 298
#define RIGHTMIDDLE_SYM 299
#define RIGHTBOTTOM_SYM 300
#define ATKEYWORD 301
#define IMPORTANT_SYM 302
#define MEDIA_ONLY 303
#define MEDIA_NOT 304
#define MEDIA_AND 305
#define REMS 306
#define QEMS 307
#define EMS 308
#define EXS 309
#define PXS 310
#define CMS 311
#define MMS 312
#define INS 313
#define PTS 314
#define PCS 315
#define DEGS 316
#define RADS 317
#define GRADS 318
#define TURNS 319
#define MSECS 320
#define SECS 321
#define HERTZ 322
#define KHERTZ 323
#define DIMEN 324
#define INVALIDDIMEN 325
#define PERCENTAGE 326
#define FLOATTOKEN 327
#define INTEGER 328
#define URI 329
#define FUNCTION 330
#define ANYFUNCTION 331
#define NOTFUNCTION 332
#define CALCFUNCTION 333
#define MINFUNCTION 334
#define MAXFUNCTION 335
#define UNICODERANGE 336




/* Copy the first part of user declarations.  */
#line 1 "CSSGrammar.y"


/*
 *  Copyright (C) 2002-2003 Lars Knoll (knoll@kde.org)
 *  Copyright (C) 2004, 2005, 2006, 2007, 2008, 2009, 2010 Apple Inc. All rights reserved.
 *  Copyright (C) 2006 Alexey Proskuryakov (ap@nypop.com)
 *  Copyright (C) 2008 Eric Seidel <eric@webkit.org>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "config.h"

#include "CSSMediaRule.h"
#include "CSSParser.h"
#include "CSSPrimitiveValue.h"
#include "CSSPropertyNames.h"
#include "CSSRuleList.h"
#include "CSSSelector.h"
#include "CSSStyleSheet.h"
#include "Document.h"
#include "HTMLNames.h"
#include "MediaList.h"
#include "MediaQueryExp.h"
#include "WebKitCSSKeyframeRule.h"
#include "WebKitCSSKeyframesRule.h"
#include <wtf/FastMalloc.h>
#include <stdlib.h>
#include <string.h>

using namespace WebCore;
using namespace HTMLNames;

#define YYMALLOC fastMalloc
#define YYFREE fastFree

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 1
#define YYMAXDEPTH 10000
#define YYDEBUG 0

// FIXME: Replace with %parse-param { CSSParser* parser } once we can depend on bison 2.x
#define YYPARSE_PARAM parser
#define YYLEX_PARAM parser



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 63 "CSSGrammar.y"
{
    bool boolean;
    char character;
    int integer;
    double number;
    CSSParserString string;

    CSSRule* rule;
    CSSRuleList* ruleList;
    CSSParserSelector* selector;
    Vector<OwnPtr<CSSParserSelector> >* selectorList;
    CSSSelector::MarginBoxType marginBox;
    CSSSelector::Relation relation;
    MediaList* mediaList;
    MediaQuery* mediaQuery;
    MediaQuery::Restrictor mediaQueryRestrictor;
    MediaQueryExp* mediaQueryExp;
    CSSParserValue value;
    CSSParserValueList* valueList;
    Vector<OwnPtr<MediaQueryExp> >* mediaQueryExpList;
    WebKitCSSKeyframeRule* keyframeRule;
    WebKitCSSKeyframesRule* keyframesRule;
    float val;
}
/* Line 193 of yacc.c.  */
#line 353 "css.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 88 "CSSGrammar.y"


static inline int cssyyerror(const char*)
{
    return 1;
}

static int cssyylex(YYSTYPE* yylval, void* parser)
{
    return static_cast<CSSParser*>(parser)->lex(yylval);
}



/* Line 216 of yacc.c.  */
#line 379 "css.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1676

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNRULES -- Number of states.  */
#define YYNSTATES  543

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   100,     2,   101,     2,     2,
      90,    91,    20,    93,    92,    96,    18,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    17,    89,
       2,    98,    95,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,    97,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    21,    88,    94,     2,     2,     2,
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
      15,    16,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    17,    20,    23,    26,
      33,    40,    46,    52,    58,    64,    65,    68,    69,    72,
      75,    76,    78,    80,    82,    88,    92,    96,   102,   103,
     107,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   131,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,   162,   169,   173,   177,   184,   191,
     195,   199,   200,   203,   205,   207,   210,   211,   216,   224,
     226,   232,   233,   237,   238,   240,   242,   244,   249,   250,
     252,   254,   259,   262,   270,   277,   280,   289,   291,   293,
     294,   298,   305,   307,   313,   315,   317,   326,   330,   334,
     336,   339,   341,   342,   344,   349,   350,   358,   360,   362,
     364,   366,   368,   370,   372,   374,   376,   378,   380,   382,
     384,   386,   388,   390,   398,   402,   406,   409,   412,   415,
     417,   418,   420,   422,   424,   425,   426,   433,   435,   440,
     443,   446,   448,   450,   453,   457,   460,   462,   465,   468,
     470,   473,   475,   478,   482,   485,   487,   493,   496,   498,
     500,   502,   505,   508,   510,   512,   514,   516,   518,   521,
     524,   529,   538,   544,   554,   556,   558,   560,   562,   564,
     566,   568,   570,   573,   576,   580,   587,   594,   602,   609,
     616,   618,   621,   623,   627,   629,   632,   635,   639,   643,
     648,   652,   658,   663,   668,   675,   681,   684,   691,   698,
     701,   705,   710,   713,   716,   719,   720,   722,   726,   729,
     733,   736,   739,   742,   743,   745,   748,   751,   754,   757,
     761,   764,   767,   770,   773,   775,   777,   779,   782,   785,
     788,   791,   794,   797,   800,   803,   806,   809,   812,   815,
     818,   821,   824,   827,   830,   833,   836,   839,   842,   845,
     851,   855,   857,   860,   863,   866,   869,   872,   875,   882,
     885,   889,   893,   895,   898,   900,   905,   911,   915,   917,
     919,   925,   929,   931,   934,   938,   942,   945,   951,   955,
     957
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     103,     0,    -1,   110,   112,   111,   116,    -1,   104,   110,
      -1,   106,   110,    -1,   107,   110,    -1,   108,   110,    -1,
     109,   110,    -1,   105,   110,    -1,    28,    87,   110,   117,
     110,    88,    -1,    30,    87,   110,   140,   110,    88,    -1,
      29,    87,   153,   173,    88,    -1,    32,    87,   110,   178,
      88,    -1,    33,     5,   110,   132,    88,    -1,    34,    87,
     110,   157,    88,    -1,    -1,   110,     5,    -1,    -1,   111,
       6,    -1,   111,     5,    -1,    -1,   114,    -1,    88,    -1,
       0,    -1,    26,   110,    12,   110,    89,    -1,    26,     1,
     194,    -1,    26,     1,    89,    -1,    26,   110,    12,   110,
      89,    -1,    -1,   116,   118,   111,    -1,   154,   156,    -1,
     135,    -1,   143,    -1,   149,    -1,   137,    -1,   123,    -1,
     122,    -1,   117,    -1,   115,    -1,   193,    -1,   192,    -1,
      -1,   119,   121,   111,    -1,   156,    -1,   143,    -1,   149,
      -1,   137,    -1,   120,    -1,   193,    -1,   192,    -1,   123,
      -1,   122,    -1,   135,    -1,    22,   110,   125,   110,   133,
      89,    -1,    22,   110,   125,   110,   133,   194,    -1,    22,
       1,    89,    -1,    22,     1,   194,    -1,    27,   110,   124,
     125,   110,    89,    -1,    27,   110,   124,   125,   110,   194,
      -1,    27,     1,   194,    -1,    27,     1,    89,    -1,    -1,
      13,   110,    -1,    12,    -1,    79,    -1,    13,   110,    -1,
      -1,    17,   110,   178,   110,    -1,    90,   110,   126,   110,
     127,    91,   110,    -1,   128,    -1,   129,   110,    55,   110,
     128,    -1,    -1,    55,   110,   129,    -1,    -1,    53,    -1,
      54,    -1,   129,    -1,   131,   110,   136,   130,    -1,    -1,
     134,    -1,   132,    -1,   134,    92,   110,   132,    -1,   134,
       1,    -1,    24,   110,   134,    87,   110,   119,   191,    -1,
      24,   110,    87,   110,   119,   191,    -1,    13,   110,    -1,
      31,   110,   138,   110,    87,   110,   139,    88,    -1,    13,
      -1,    12,    -1,    -1,   139,   140,   110,    -1,   141,   110,
      87,   110,   173,    88,    -1,   142,    -1,   141,   110,    92,
     110,   142,    -1,    76,    -1,    13,    -1,    23,   110,   144,
     110,    87,   110,   145,   113,    -1,    23,     1,   194,    -1,
      23,     1,    89,    -1,    13,    -1,    13,   171,    -1,   171,
      -1,    -1,   173,    -1,   145,   146,   110,   173,    -1,    -1,
     148,   147,   110,    87,   110,   173,   113,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      25,   110,    87,   110,   173,    88,   110,    -1,    25,     1,
     194,    -1,    25,     1,    89,    -1,    93,   110,    -1,    94,
     110,    -1,    95,   110,    -1,   152,    -1,    -1,    96,    -1,
      93,    -1,   110,    -1,    -1,    -1,   157,   155,    87,   153,
     173,   113,    -1,   159,    -1,   157,    92,   110,   159,    -1,
     157,     1,    -1,   159,     5,    -1,   161,    -1,   158,    -1,
     158,   161,    -1,   159,   150,   161,    -1,   159,     1,    -1,
      21,    -1,    20,    21,    -1,    13,    21,    -1,   163,    -1,
     163,   164,    -1,   164,    -1,   160,   163,    -1,   160,   163,
     164,    -1,   160,   164,    -1,   161,    -1,   162,   110,    92,
     110,   161,    -1,   162,     1,    -1,    13,    -1,    20,    -1,
     165,    -1,   164,   165,    -1,   164,     1,    -1,    16,    -1,
      15,    -1,   166,    -1,   168,    -1,   172,    -1,    18,    13,
      -1,    13,   110,    -1,    19,   110,   167,    97,    -1,    19,
     110,   167,   169,   110,   170,   110,    97,    -1,    19,   110,
     160,   167,    97,    -1,    19,   110,   160,   167,   169,   110,
     170,   110,    97,    -1,    98,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    13,    -1,    12,    -1,
      17,    13,    -1,    17,    13,    -1,    17,    17,    13,    -1,
      17,    81,   110,   162,   110,    91,    -1,    17,    80,   110,
      14,   110,    91,    -1,    17,    80,   110,   151,    78,   110,
      91,    -1,    17,    80,   110,    13,   110,    91,    -1,    17,
      82,   110,   161,   110,    91,    -1,   175,    -1,   174,   175,
      -1,   174,    -1,     1,   195,     1,    -1,     1,    -1,   174,
       1,    -1,   174,   195,    -1,   175,    89,   110,    -1,   175,
     195,   110,    -1,   175,   195,    89,   110,    -1,     1,    89,
     110,    -1,     1,   195,     1,    89,   110,    -1,   174,   175,
      89,   110,    -1,   174,     1,    89,   110,    -1,   174,     1,
     195,     1,    89,   110,    -1,   176,    17,   110,   178,   177,
      -1,   176,     1,    -1,   176,    17,   110,     1,   178,   177,
      -1,   176,    17,   110,   178,   177,     1,    -1,    52,   110,
      -1,   176,    17,   110,    -1,   176,    17,   110,     1,    -1,
     176,   194,    -1,    13,   110,    -1,    52,   110,    -1,    -1,
     180,    -1,   178,   179,   180,    -1,   178,   195,    -1,   178,
     195,     1,    -1,   178,     1,    -1,    99,   110,    -1,    92,
     110,    -1,    -1,   181,    -1,   152,   181,    -1,    12,   110,
      -1,    13,   110,    -1,    74,   110,    -1,   152,    74,   110,
      -1,    79,   110,    -1,    86,   110,    -1,    15,   110,    -1,
     100,   110,    -1,   182,    -1,   188,    -1,   190,    -1,   101,
     110,    -1,    78,   110,    -1,    77,   110,    -1,    76,   110,
      -1,    60,   110,    -1,    61,   110,    -1,    62,   110,    -1,
      63,   110,    -1,    64,   110,    -1,    65,   110,    -1,    66,
     110,    -1,    67,   110,    -1,    68,   110,    -1,    69,   110,
      -1,    70,   110,    -1,    71,   110,    -1,    72,   110,    -1,
      73,   110,    -1,    58,   110,    -1,    57,   110,    -1,    59,
     110,    -1,    56,   110,    -1,    80,   110,   178,    91,   110,
      -1,    80,   110,     1,    -1,   181,    -1,   152,   181,    -1,
      93,     5,    -1,    96,     5,    -1,    20,   110,    -1,    99,
     110,    -1,    13,   110,    -1,    90,   110,   186,   110,    91,
     110,    -1,   183,   110,    -1,   186,   184,   183,    -1,   186,
     184,   185,    -1,   185,    -1,   186,     1,    -1,   186,    -1,
     187,    92,   110,   186,    -1,    83,   110,   186,    91,   110,
      -1,    83,   110,     1,    -1,    84,    -1,    85,    -1,   189,
     110,   187,    91,   110,    -1,   189,   110,     1,    -1,   113,
      -1,     1,   113,    -1,    51,     1,   194,    -1,    51,     1,
      89,    -1,     1,   194,    -1,    87,     1,   195,     1,   113,
      -1,    87,     1,   113,    -1,   194,    -1,   195,     1,   194,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   293,   293,   294,   295,   296,   297,   298,   299,   303,
     309,   315,   321,   335,   342,   352,   353,   356,   358,   359,
     362,   364,   369,   370,   374,   380,   382,   387,   393,   395,
     403,   406,   407,   408,   409,   410,   411,   415,   418,   419,
     420,   424,   425,   436,   437,   438,   439,   443,   444,   445,
     446,   447,   448,   453,   456,   459,   462,   468,   472,   475,
     478,   484,   485,   489,   490,   494,   500,   503,   509,   516,
     521,   528,   531,   537,   540,   543,   549,   554,   562,   565,
     569,   574,   579,   585,   588,   594,   600,   607,   608,   612,
     613,   621,   627,   632,   641,   642,   655,   667,   670,   676,
     682,   690,   695,   703,   704,   708,   708,   716,   719,   722,
     725,   728,   731,   734,   737,   740,   743,   746,   749,   752,
     755,   758,   761,   767,   771,   774,   780,   781,   782,   786,
     787,   791,   792,   796,   803,   810,   817,   824,   833,   842,
     848,   854,   857,   861,   875,   888,   894,   895,   896,   900,
     905,   910,   915,   925,   930,   938,   946,   954,   960,   968,
     976,   979,   985,   991,   999,  1011,  1012,  1013,  1017,  1028,
    1039,  1044,  1050,  1058,  1070,  1073,  1076,  1079,  1082,  1085,
    1091,  1092,  1096,  1107,  1116,  1129,  1144,  1155,  1166,  1185,
    1204,  1207,  1212,  1215,  1218,  1221,  1224,  1230,  1235,  1238,
    1241,  1246,  1249,  1256,  1261,  1269,  1287,  1291,  1300,  1307,
    1312,  1319,  1326,  1333,  1339,  1340,  1344,  1349,  1363,  1366,
    1369,  1375,  1378,  1381,  1387,  1388,  1389,  1390,  1396,  1397,
    1398,  1399,  1400,  1401,  1403,  1406,  1409,  1412,  1418,  1419,
    1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,
    1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,  1438,  1449,
    1458,  1470,  1471,  1475,  1478,  1481,  1484,  1487,  1496,  1511,
    1516,  1530,  1542,  1543,  1549,  1552,  1567,  1576,  1583,  1586,
    1592,  1601,  1609,  1612,  1618,  1621,  1627,  1645,  1648,  1654,
    1655
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TOKEN_EOF", "error", "$undefined", "LOWEST_PREC", "UNIMPORTANT_TOK",
  "WHITESPACE", "SGML_CD", "INCLUDES", "DASHMATCH", "BEGINSWITH",
  "ENDSWITH", "CONTAINS", "STRING", "IDENT", "NTH", "HEX", "IDSEL", "':'",
  "'.'", "'['", "'*'", "'|'", "IMPORT_SYM", "PAGE_SYM", "MEDIA_SYM",
  "FONT_FACE_SYM", "CHARSET_SYM", "NAMESPACE_SYM", "WEBKIT_RULE_SYM",
  "WEBKIT_DECLS_SYM", "WEBKIT_KEYFRAME_RULE_SYM", "WEBKIT_KEYFRAMES_SYM",
  "WEBKIT_VALUE_SYM", "WEBKIT_MEDIAQUERY_SYM", "WEBKIT_SELECTOR_SYM",
  "TOPLEFTCORNER_SYM", "TOPLEFT_SYM", "TOPCENTER_SYM", "TOPRIGHT_SYM",
  "TOPRIGHTCORNER_SYM", "BOTTOMLEFTCORNER_SYM", "BOTTOMLEFT_SYM",
  "BOTTOMCENTER_SYM", "BOTTOMRIGHT_SYM", "BOTTOMRIGHTCORNER_SYM",
  "LEFTTOP_SYM", "LEFTMIDDLE_SYM", "LEFTBOTTOM_SYM", "RIGHTTOP_SYM",
  "RIGHTMIDDLE_SYM", "RIGHTBOTTOM_SYM", "ATKEYWORD", "IMPORTANT_SYM",
  "MEDIA_ONLY", "MEDIA_NOT", "MEDIA_AND", "REMS", "QEMS", "EMS", "EXS",
  "PXS", "CMS", "MMS", "INS", "PTS", "PCS", "DEGS", "RADS", "GRADS",
  "TURNS", "MSECS", "SECS", "HERTZ", "KHERTZ", "DIMEN", "INVALIDDIMEN",
  "PERCENTAGE", "FLOATTOKEN", "INTEGER", "URI", "FUNCTION", "ANYFUNCTION",
  "NOTFUNCTION", "CALCFUNCTION", "MINFUNCTION", "MAXFUNCTION",
  "UNICODERANGE", "'{'", "'}'", "';'", "'('", "')'", "','", "'+'", "'~'",
  "'>'", "'-'", "']'", "'='", "'/'", "'#'", "'%'", "$accept", "stylesheet",
  "webkit_rule", "webkit_keyframe_rule", "webkit_decls", "webkit_value",
  "webkit_mediaquery", "webkit_selector", "maybe_space", "maybe_sgml",
  "maybe_charset", "closing_brace", "charset", "ignored_charset",
  "rule_list", "valid_rule", "rule", "block_rule_list", "block_valid_rule",
  "block_rule", "import", "namespace", "maybe_ns_prefix", "string_or_uri",
  "media_feature", "maybe_media_value", "media_query_exp",
  "media_query_exp_list", "maybe_and_media_query_exp_list",
  "maybe_media_restrictor", "media_query", "maybe_media_list",
  "media_list", "media", "medium", "keyframes", "keyframe_name",
  "keyframes_rule", "keyframe_rule", "key_list", "key", "page",
  "page_selector", "declarations_and_margins", "margin_box", "@1",
  "margin_sym", "font_face", "combinator", "maybe_unary_operator",
  "unary_operator", "maybe_space_before_declaration", "before_ruleset",
  "before_rule_opening_brace", "ruleset", "selector_list",
  "selector_with_trailing_whitespace", "selector", "namespace_selector",
  "simple_selector", "simple_selector_list", "element_name",
  "specifier_list", "specifier", "class", "attr_name", "attrib", "match",
  "ident_or_string", "pseudo_page", "pseudo", "declaration_list",
  "decl_list", "declaration", "property", "prio", "expr", "operator",
  "term", "unary_term", "function", "calc_func_term", "calc_func_operator",
  "calc_func_paren_expr", "calc_func_expr", "calc_func_expr_list",
  "calc_function", "min_or_max", "min_or_max_function", "save_block",
  "invalid_at", "invalid_rule", "invalid_block", "invalid_block_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    58,    46,    91,
      42,   124,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   123,   125,    59,
      40,    41,    44,    43,   126,    62,    45,    93,    61,    47,
      35,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   103,   103,   103,   103,   103,   103,   104,
     105,   106,   107,   108,   109,   110,   110,   111,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   123,   123,   123,
     123,   124,   124,   125,   125,   126,   127,   127,   128,   129,
     129,   130,   130,   131,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   136,   137,   138,   138,   139,
     139,   140,   141,   141,   142,   142,   143,   143,   143,   144,
     144,   144,   144,   145,   145,   147,   146,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   151,
     151,   152,   152,   153,   154,   155,   156,   157,   157,   157,
     158,   159,   159,   159,   159,   159,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   164,   165,   165,   165,   165,   165,   166,   167,
     168,   168,   168,   168,   169,   169,   169,   169,   169,   169,
     170,   170,   171,   172,   172,   172,   172,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     175,   175,   175,   176,   177,   177,   178,   178,   178,   178,
     178,   179,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     182,   183,   183,   184,   184,   184,   184,   184,   185,   186,
     186,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   194,   194,   195,
     195
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     6,
       6,     5,     5,     5,     5,     0,     2,     0,     2,     2,
       0,     1,     1,     1,     5,     3,     3,     5,     0,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     3,     3,     6,     6,     3,
       3,     0,     2,     1,     1,     2,     0,     4,     7,     1,
       5,     0,     3,     0,     1,     1,     1,     4,     0,     1,
       1,     4,     2,     7,     6,     2,     8,     1,     1,     0,
       3,     6,     1,     5,     1,     1,     8,     3,     3,     1,
       2,     1,     0,     1,     4,     0,     7,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     3,     3,     2,     2,     2,     1,
       0,     1,     1,     1,     0,     0,     6,     1,     4,     2,
       2,     1,     1,     2,     3,     2,     1,     2,     2,     1,
       2,     1,     2,     3,     2,     1,     5,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     8,     5,     9,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     6,     6,     7,     6,     6,
       1,     2,     1,     3,     1,     2,     2,     3,     3,     4,
       3,     5,     4,     4,     6,     5,     2,     6,     6,     2,
       3,     4,     2,     2,     2,     0,     1,     3,     2,     3,
       2,     2,     2,     0,     1,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     5,
       3,     1,     2,     2,     2,     2,     2,     2,     6,     2,
       3,     3,     1,     2,     1,     4,     5,     3,     1,     1,
       5,     3,     1,     2,     3,     3,     2,     5,     3,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      15,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,    15,    15,    15,    20,    15,    15,    15,    15,    15,
      15,     1,     3,     8,     4,     5,     6,     7,    16,     0,
      17,    21,   134,   133,     0,     0,     0,    73,     0,     0,
       0,    28,     0,     0,    15,     0,     0,    15,    15,    36,
      35,    31,    34,    32,    33,     0,   194,    15,    15,     0,
       0,   190,     0,    95,    94,    15,    15,    92,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,   278,   279,    15,   132,
     131,    15,    15,     0,     0,   216,   224,   234,   235,    15,
     236,    74,    75,    15,    69,    76,    15,     0,   158,   164,
     163,     0,     0,    15,   159,   146,     0,   142,     0,     0,
     141,   149,     0,   160,   165,   166,   167,     0,    26,    25,
      15,    19,    18,     0,     0,     0,     0,   102,    73,     0,
       0,     0,    61,     0,     0,    30,     0,    15,   289,     0,
     213,   209,    11,   195,   191,     0,    15,     0,   206,    15,
     212,     0,     0,   226,   227,   232,   258,   256,   255,   257,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   228,   240,   239,   238,   230,     0,
       0,   231,   233,   237,    15,   225,   220,    12,    15,    15,
       0,     0,     0,     0,     0,     0,    13,   148,   183,     0,
      15,    15,    15,   168,     0,   147,   139,    14,    15,   143,
     145,   140,    15,    15,    15,     0,   158,   159,   152,     0,
       0,   162,   161,     0,     0,     0,    15,     0,    38,    37,
      17,    40,    39,    55,    56,    63,    64,    15,    98,    97,
      99,     0,    15,   101,    15,    80,     0,   125,   124,    15,
      60,    59,    15,     0,    88,    87,    15,     9,     0,   200,
     193,    15,     0,    15,     0,   197,    15,   198,     0,    10,
      15,    15,   260,     0,   277,    15,     0,   261,    15,   272,
       0,   229,   222,   221,   217,   219,   281,     0,     0,    15,
      15,    15,    15,    71,   184,   130,     0,     0,    15,     0,
       0,     0,     0,   126,   127,   128,   144,     0,    23,    22,
     288,     0,    24,   286,     0,     0,    29,    78,   100,   182,
       0,    41,    82,    15,    15,     0,    62,    15,     0,    15,
      15,   290,   203,     0,   202,   199,   211,     0,     0,     0,
      15,     0,   262,   269,   273,    15,    15,    15,     0,     0,
      15,     0,    15,    15,    65,    66,     0,    85,    15,    77,
      15,    15,     0,   129,   155,     0,    15,   169,    15,     0,
     175,   176,   177,   178,   179,   170,   174,    15,     0,     0,
      15,   285,   284,     0,     0,    15,     0,    41,    73,     0,
       0,    15,     0,   201,    15,     0,    15,     0,     0,    93,
     259,     0,   267,   265,   276,   263,   264,   266,   270,   271,
     280,     0,    15,     0,    70,     0,     0,     0,    15,   157,
       0,     0,   172,    15,     0,   287,     0,    53,    54,     0,
       0,   282,    47,    17,    51,    50,    52,    46,    44,    45,
      43,    84,    49,    48,     0,    81,    15,    57,    58,    89,
       0,   204,   207,   214,   208,    91,     0,     0,     0,    15,
      72,   188,   186,     0,   185,    15,   189,     0,   181,   180,
      15,    27,     0,   103,   283,    42,    83,   123,     0,   136,
      15,     0,    68,   187,     0,    15,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    96,    15,   105,    86,    15,   268,    67,
     156,     0,   171,     0,    15,    90,   173,   104,     0,    15,
       0,     0,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,    33,    41,
      30,   451,    31,   248,   143,    48,   250,   406,   452,   453,
      49,    50,   273,   257,   310,   433,   114,   115,   379,   116,
     265,   403,   266,    51,   313,    52,   276,   498,    65,    66,
      67,    53,   262,   492,   524,   534,   525,    54,   235,   382,
     103,    34,    55,   278,   460,   156,   127,   128,   129,   130,
     385,   131,   132,   133,   134,   321,   135,   397,   490,   263,
     136,    59,    60,    61,    62,   417,   104,   210,   105,   106,
     107,   298,   371,   299,   300,   308,   108,   109,   110,   461,
     462,   463,   158,   211
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -305
static const yytype_int16 yypact[] =
{
     454,   -86,    19,    76,    89,   236,   210,   303,  -305,  -305,
    -305,  -305,  -305,  -305,   322,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,   308,   308,   308,   308,   308,   308,  -305,   435,
    -305,  -305,   445,   308,   409,    21,  1132,   263,   476,   148,
      26,   387,   340,   151,  -305,    99,   370,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,   691,   350,  -305,  -305,   248,
    1489,   355,   158,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  1301,   873,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,     1,  -305,   269,   302,  -305,
    -305,   374,   313,  -305,   368,  -305,    54,   691,   212,   513,
    -305,   698,    34,  -305,  -305,  -305,  -305,   375,  -305,  -305,
    -305,  -305,  -305,   603,   359,   372,   384,   418,   309,   388,
      91,   421,   157,   415,   156,  -305,    98,  -305,  -305,   423,
     308,   308,  -305,   425,   352,  1507,  -305,  1416,  -305,  -305,
    -305,   194,   115,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,  1056,
    1178,   308,   308,   308,  -305,  -305,  -305,  -305,  -305,  -305,
    1327,   506,  1219,   346,   160,   390,  -305,  -305,  -305,   440,
    -305,  -305,  -305,  -305,   413,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,   691,  -305,  -305,   698,   802,
     811,  -305,  -305,    24,   184,   371,  -305,   456,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
     457,   452,  -305,  -305,  -305,  -305,   106,  -305,  -305,  -305,
    -305,  -305,  -305,   289,  -305,  -305,  -305,  -305,   391,   308,
     428,  -305,   461,  -305,   371,   308,  -305,   308,   690,  -305,
    -305,  -305,  -305,   963,  -305,  -305,  1598,  -305,  -305,  -305,
     265,   308,   308,   308,  -305,   371,  -305,   104,   338,  -305,
    -305,  -305,  -305,   443,  -305,   130,   476,   476,   302,   368,
     486,    53,   476,   308,   308,   308,  -305,   906,  -305,  -305,
    -305,   501,  -305,  -305,    28,   436,   387,   279,  -305,  -305,
     129,   308,  -305,  -305,  -305,   412,   308,  -305,   168,  -305,
    -305,  -305,   308,   448,   308,   308,  1327,   600,   412,    21,
    -305,  1260,  -305,   308,  -305,  -305,  -305,  -305,   498,   499,
    -305,  1557,  -305,  -305,   308,   131,   128,   308,  -305,  -305,
    -305,  -305,   438,  -305,  -305,   247,  -305,   308,  -305,   173,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,   314,    24,
    -305,  -305,  -305,   449,    66,  -305,  1080,   308,   263,   434,
     207,  -305,   409,   308,  -305,   600,  -305,  1434,   469,  -305,
     308,   238,   308,   308,   308,  -305,  -305,   308,  -305,  -305,
     308,  1260,  -305,   468,  -305,   128,   136,   169,  -305,  -305,
     183,   174,  -305,  -305,   447,  -305,   235,  -305,  -305,   412,
      24,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  1080,  -305,  -305,  -305,  -305,   308,
      59,   308,  -305,   308,  -305,  -305,   189,   229,  1132,  -305,
       1,  -305,  -305,   196,  -305,  -305,  -305,   447,  -305,  -305,
    -305,  -305,  1561,  -305,  -305,   387,  -305,   308,   254,  -305,
    -305,   780,   308,  -305,   476,  -305,    17,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,   308,   308,
    -305,    22,  -305,   412,  -305,   308,  -305,  -305,   201,  -305,
     412,    59,  -305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,     0,  -243,
    -305,  -239,  -305,  -305,  -305,   397,  -305,   154,  -305,  -305,
    -201,  -156,  -305,   315,  -305,  -305,   205,   152,  -305,  -305,
     -34,  -305,   259,  -129,  -305,   -66,  -305,  -305,   111,  -305,
     249,   -60,  -305,  -305,  -305,  -305,  -305,   -52,  -305,  -305,
    -184,   261,  -305,  -305,   556,   576,  -305,   295,   407,  -125,
    -305,   503,  -106,  -102,  -305,   331,  -305,   244,   166,   395,
    -305,  -304,  -305,   615,  -305,   266,  -185,  -305,   472,   -82,
    -305,   323,  -305,   326,  -207,  -305,  -305,  -305,  -305,   234,
     575,   577,   110,   -24
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -276
static const yytype_int16 yytable[] =
{
      14,    15,   229,   117,   330,   307,   -15,   336,    22,    23,
      24,    25,    26,    27,   293,    32,   296,    35,    36,    37,
      38,   205,    28,   239,   328,   240,    28,    28,   296,    40,
     242,    28,   159,    28,    63,   241,   165,   167,   140,  -151,
     400,   409,   145,   147,   148,   150,   152,   153,   154,   119,
     120,   121,   122,   123,   418,   226,   -15,   160,   161,   328,
     390,   391,   392,   393,   394,   171,   172,   342,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,    28,    64,   201,   226,
     149,   202,   203,   357,   -15,   364,    16,   342,   470,   212,
     326,   137,   329,   213,   532,   214,   215,   365,   297,   536,
      28,  -151,  -151,   224,   366,  -151,  -151,  -151,  -151,  -151,
     297,   383,   327,    28,    28,    28,    28,   242,   242,   282,
     244,    28,   227,   380,   381,   493,   228,   329,   432,   139,
     395,   396,   146,   -79,   421,   -79,   -15,   279,   344,   168,
     445,    28,    28,    17,   -15,    28,   285,   287,   -15,   288,
     272,   415,   170,    28,    28,   169,    18,   296,   269,    28,
     390,   391,   392,   393,   394,  -135,   -15,   296,    28,    28,
     228,   384,   386,   343,    28,  -274,  -274,   368,   344,    28,
     369,    28,   290,   370,   301,   454,    28,   291,   302,   303,
     495,   494,    28,   230,   362,   311,   405,   231,   113,   331,
     315,   316,   317,    99,   477,   242,   100,   481,   322,   537,
     364,   499,   323,   324,   325,   137,   541,   138,   -15,   364,
      28,    19,   365,   -15,   277,   137,   334,   296,   439,   366,
     455,   365,   -15,   523,   254,   411,   259,   337,   366,   268,
     482,   271,   340,   454,   341,   486,   364,    63,    28,   345,
     442,   396,   346,   332,   484,   485,   348,   456,   365,   297,
     500,   352,   289,   354,    28,   366,   355,   503,   539,   297,
     358,   359,   -73,   501,   137,   361,   467,    20,   363,  -137,
    -137,   255,   542,    21,  -137,   232,   233,   234,   455,   374,
     375,   376,   377,    28,    28,   230,   111,   112,   387,   231,
    -275,  -275,   368,   217,   491,   369,   223,    28,   370,   -15,
      64,   368,   111,   112,   369,   456,   162,   370,   -15,   -15,
     457,   144,   526,   407,   408,   -15,   458,   410,    29,   297,
     413,    28,   -15,   113,   459,   333,   367,   216,   368,   309,
     420,   369,   111,   112,   370,   422,   423,   424,   256,   113,
     427,   151,   430,   431,   465,   -15,   243,    28,   435,   530,
     436,   437,   -15,   -15,   255,   440,   441,   218,   387,   225,
     351,   219,   141,   142,   351,    28,   264,   444,   457,   113,
     446,  -138,  -138,   312,   458,   449,  -138,   232,   233,   234,
      56,   469,   459,    56,   471,   351,   473,    28,    28,   -15,
      28,   476,    57,    28,   280,    57,   318,   274,   275,   372,
     373,   260,   478,   319,   125,   261,    39,   137,   483,   157,
     -15,   283,   137,   487,   166,   402,   137,   -15,   253,   -15,
      28,   256,    28,   314,   220,   221,   222,   335,   137,   488,
     489,    58,   353,   351,    58,   339,   497,    42,    43,    44,
      45,   137,    46,   258,   261,   137,    47,   267,   349,   502,
     214,    28,     1,     2,     3,   504,     4,     5,     6,   118,
     506,   119,   120,   121,   122,   123,   124,   125,   378,   388,
     528,   529,   399,   425,   426,   531,  -218,   305,   137,   351,
     270,  -218,   137,   448,   281,   137,   438,   350,  -218,  -218,
     468,  -218,   466,   137,   533,   401,   236,   535,   119,   120,
     121,   122,   123,   237,   538,   137,   137,   414,   447,   540,
     249,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,   475,  -218,   479,
     333,   464,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,  -218,
    -218,   434,  -218,  -218,  -218,  -218,  -218,   480,   347,  -218,
    -218,  -218,  -218,  -218,  -218,  -218,   404,  -218,  -218,  -218,
    -215,   206,  -218,    -2,   245,  -218,  -218,  -218,   419,   527,
     412,   155,  -223,  -223,   126,  -223,  -134,   398,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,    42,    43,    44,    45,   246,
      46,   320,   238,   443,    47,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,   389,   416,   505,   247,   338,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   164,  -223,  -223,  -223,  -223,
    -223,   472,   304,  -223,  -223,  -223,  -223,   137,  -215,  -215,
    -210,   356,   208,  -223,   428,    28,  -223,   429,   496,   209,
    -223,  -223,    68,    69,   118,    70,   119,   120,   121,   122,
     123,   124,   125,   119,   120,   121,   122,   123,   251,     0,
     252,     0,     0,     0,     0,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,    90,    91,    92,    93,
      94,     0,     0,    95,    96,    97,    98,  -210,  -210,  -210,
       0,   206,     0,    99,     0,   -15,   100,     0,     0,     0,
     101,   102,  -223,  -223,     0,  -223,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,  -154,     0,     0,
       0,     0,   241,     0,     0,     0,  -150,   119,   120,   121,
     122,   123,     0,     0,     0,     0,   119,   120,   121,   122,
     123,     0,     0,     0,     0,     0,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,     0,  -223,  -223,  -223,  -223,
    -223,     0,     0,  -223,  -223,  -223,  -223,   137,     0,     0,
       0,   -15,   208,  -223,   206,     0,  -223,     0,     0,   209,
    -223,  -223,     0,     0,     0,  -223,  -223,     0,  -223,  -154,
    -154,     0,     0,  -154,  -154,  -154,  -154,  -154,  -150,  -150,
       0,     0,  -150,  -150,  -150,  -150,  -150,   241,     0,     0,
       0,  -153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   119,   120,   121,   122,   123,     0,     0,     0,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,     0,  -223,
    -223,  -223,  -223,  -223,     0,     0,  -223,  -223,  -223,  -223,
     137,   207,     0,     0,   206,   208,  -223,     0,     0,  -223,
       0,     0,   209,  -223,  -223,  -223,  -223,     0,  -223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -153,  -153,     0,     0,  -153,  -153,  -153,
    -153,  -153,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,     0,  -223,
    -223,  -223,  -223,  -223,     0,     0,  -223,  -223,  -223,  -223,
     137,     0,     0,     0,   360,   208,  -223,   292,     0,  -223,
       0,    28,   209,  -223,  -223,     0,     0,     0,    68,    69,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
     328,   450,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,   119,   120,   121,   122,   123,
     124,   125,    42,    43,    44,    45,     0,    46,     0,     0,
       0,    47,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,   247,    90,    91,    92,    93,    94,    28,     0,    95,
      96,    97,    98,     0,    68,    69,     0,    70,     0,    99,
       0,     0,   100,     0,     0,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
       0,     0,     0,    28,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,     0,    90,    91,
      92,    93,    94,     0,     0,    95,    96,    97,    98,     0,
     306,     0,     0,     0,    28,    99,     0,     0,   100,     0,
       0,     0,   101,   102,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,   295,     0,
       0,    99,     0,     0,   100,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,     0,    99,     0,     0,   100,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,    90,    91,    92,    68,
      69,     0,    70,     0,     0,     0,     0,     0,     0,     0,
     295,     0,     0,    99,     0,     0,   100,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   204,     0,    90,    91,    92,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,    90,    91,    92,    93,    94,     0,     0,
      95,    96,    97,    98,     0,     0,   -15,   284,     0,     0,
      99,   -15,     0,   100,     0,     0,     0,   101,   102,   -15,
       0,     0,     0,     0,  -205,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,   -15,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,     0,     0,     0,     0,  -192,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,   -15,   -15,   286,     0,  -196,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -205,  -205,  -205,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
       0,    58,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,     0,     0,
       0,   328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,  -192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -196,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     0,    90,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   295,     0,   329,
      99,     0,     0,   100,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,    90,    91,    92
};

static const yytype_int16 yycheck[] =
{
       0,    87,   127,    37,   243,   212,     5,   250,     8,     9,
      10,    11,    12,    13,   199,    15,   200,    17,    18,    19,
      20,   103,     5,   129,     0,   131,     5,     5,   212,    29,
     132,     5,    56,     5,    13,     1,    60,    61,    12,     5,
      12,   345,    42,    43,    44,    45,    46,    47,    48,    15,
      16,    17,    18,    19,   358,     1,    55,    57,    58,     0,
       7,     8,     9,    10,    11,    65,    66,     1,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     5,    76,    98,     1,
       1,   101,   102,   288,     5,     1,    87,     1,   412,   109,
     235,    87,    88,   113,    97,   115,   116,    13,   200,    97,
       5,    87,    88,   123,    20,    91,    92,    93,    94,    95,
     212,   315,   238,     5,     5,     5,     5,   239,   240,   163,
     140,     5,    88,    13,    14,   449,    92,    88,    17,    39,
      97,    98,     1,    87,   361,    89,     5,   157,    92,     1,
     399,     5,     5,    87,    13,     5,   166,   167,    17,   169,
      13,   356,    62,     5,     5,    17,    87,   361,    87,     5,
       7,     8,     9,    10,    11,    87,    87,   371,     5,     5,
      92,   316,   317,    87,     5,    91,    92,    93,    92,     5,
      96,     5,    87,    99,   204,   406,     5,    92,   208,   209,
     453,   450,     5,     1,   296,    55,    87,     5,    90,   243,
     220,   221,   222,    93,   431,   327,    96,    91,   228,   533,
       1,   470,   232,   233,   234,    87,   540,    89,    87,     1,
       5,     5,    13,     5,    88,    87,   246,   431,     1,    20,
     406,    13,     5,   492,   144,    87,   146,   257,    20,   149,
      91,   151,   262,   464,   264,    91,     1,    13,     5,   269,
      97,    98,   272,    89,    91,    92,   276,   406,    13,   361,
      91,   281,    88,   283,     5,    20,   286,    91,    87,   371,
     290,   291,    13,   478,    87,   295,    89,    87,   298,    87,
      88,    12,   541,     0,    92,    93,    94,    95,   464,   309,
     310,   311,   312,     5,     5,     1,    53,    54,   318,     5,
      91,    92,    93,    21,    89,    96,    13,     5,    99,    91,
      76,    93,    53,    54,    96,   464,    88,    99,    91,    92,
     406,     1,    88,   343,   344,     5,   406,   347,    26,   431,
     350,     5,    12,    90,   406,   245,    91,    88,    93,    13,
     360,    96,    53,    54,    99,   365,   366,   367,    79,    90,
     370,     1,   372,   373,   408,     5,     1,     5,   378,   504,
     380,   381,    12,    13,    12,   385,   386,    13,   388,    21,
     280,    17,     5,     6,   284,     5,    87,   397,   464,    90,
     400,    87,    88,    13,   464,   405,    92,    93,    94,    95,
       1,   411,   464,     1,   414,   305,   416,     5,     5,    79,
       5,   421,    13,     5,     1,    13,    13,    12,    13,    91,
      92,    13,   432,    20,    21,    17,     1,    87,   438,    89,
       5,    89,    87,   443,    89,   335,    87,    12,    89,    79,
       5,    79,     5,    13,    80,    81,    82,     1,    87,    12,
      13,    52,     1,   353,    52,    13,   466,    22,    23,    24,
      25,    87,    27,    89,    17,    87,    31,    89,    87,   479,
     480,     5,    28,    29,    30,   485,    32,    33,    34,    13,
     490,    15,    16,    17,    18,    19,    20,    21,    55,    13,
     500,   501,     1,     5,     5,   505,     0,     1,    87,   399,
      89,     5,    87,   403,    89,    87,    78,    89,    12,    13,
     410,    15,    88,    87,   524,    89,    13,   527,    15,    16,
      17,    18,    19,    20,   534,    87,    87,    89,    89,   539,
     143,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    88,    52,    91,
     450,   407,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,   376,    76,    77,    78,    79,    80,   435,   273,    83,
      84,    85,    86,    87,    88,    89,   337,    91,    92,    93,
       0,     1,    96,     0,     1,    99,   100,   101,   359,   498,
     349,    55,    12,    13,    38,    15,    13,   322,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   224,   129,   389,    31,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   320,    52,   487,    51,   260,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    60,    76,    77,    78,    79,
      80,   415,   210,    83,    84,    85,    86,    87,    88,    89,
       0,     1,    92,    93,   371,     5,    96,   371,   464,    99,
     100,   101,    12,    13,    13,    15,    15,    16,    17,    18,
      19,    20,    21,    15,    16,    17,    18,    19,   143,    -1,
     143,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      -1,     1,    -1,    93,    -1,     5,    96,    -1,    -1,    -1,
     100,   101,    12,    13,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,     5,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    -1,    -1,
      -1,    91,    92,    93,     1,    -1,    96,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    12,    13,    -1,    15,    87,
      88,    -1,    -1,    91,    92,    93,    94,    95,    87,    88,
      -1,    -1,    91,    92,    93,    94,    95,     1,    -1,    -1,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    86,
      87,    88,    -1,    -1,     1,    92,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,   101,    12,    13,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    86,
      87,    -1,    -1,    -1,    91,    92,    93,     1,    -1,    96,
      -1,     5,    99,   100,   101,    -1,    -1,    -1,    12,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    -1,    -1,
      -1,    31,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    51,    76,    77,    78,    79,    80,     5,    -1,    83,
      84,    85,    86,    -1,    12,    13,    -1,    15,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
       1,    -1,    -1,    -1,     5,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    90,    -1,
      -1,    93,    -1,    -1,    96,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    93,    -1,    -1,    96,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    -1,    76,    77,    78,    12,
      13,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    93,    -1,    -1,    96,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    -1,    -1,     0,     1,    -1,    -1,
      93,     5,    -1,    96,    -1,    -1,    -1,   100,   101,    13,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    87,    88,    89,    -1,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    88,
      93,    -1,    -1,    96,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    32,    33,    34,   103,   104,   105,
     106,   107,   108,   109,   110,    87,    87,    87,    87,     5,
      87,     0,   110,   110,   110,   110,   110,   110,     5,    26,
     112,   114,   110,   110,   153,   110,   110,   110,   110,     1,
     110,   111,    22,    23,    24,    25,    27,    31,   117,   122,
     123,   135,   137,   143,   149,   154,     1,    13,    52,   173,
     174,   175,   176,    13,    76,   140,   141,   142,    12,    13,
      15,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      76,    77,    78,    79,    80,    83,    84,    85,    86,    93,
      96,   100,   101,   152,   178,   180,   181,   182,   188,   189,
     190,    53,    54,    90,   128,   129,   131,   132,    13,    15,
      16,    17,    18,    19,    20,    21,   157,   158,   159,   160,
     161,   163,   164,   165,   166,   168,   172,    87,    89,   194,
      12,     5,     6,   116,     1,   110,     1,   110,   110,     1,
     110,     1,   110,   110,   110,   156,   157,    89,   194,   195,
     110,   110,    88,     1,   175,   195,    89,   195,     1,    17,
     194,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,    74,   181,     1,    88,    92,    99,
     179,   195,   110,   110,   110,   110,    88,    21,    13,    17,
      80,    81,    82,    13,   110,    21,     1,    88,    92,   161,
       1,     5,    93,    94,    95,   150,    13,    20,   163,   164,
     164,     1,   165,     1,   110,     1,    26,    51,   115,   117,
     118,   192,   193,    89,   194,    12,    79,   125,    89,   194,
      13,    17,   144,   171,    87,   132,   134,    89,   194,    87,
      89,   194,    13,   124,    12,    13,   138,    88,   155,   110,
       1,    89,   195,    89,     1,   110,    89,   110,   110,    88,
      87,    92,     1,   178,     1,    90,   152,   181,   183,   185,
     186,   110,   110,   110,   180,     1,     1,   186,   187,    13,
     126,    55,    13,   136,    13,   110,   110,   110,    13,    20,
     160,   167,   110,   110,   110,   110,   161,   164,     0,    88,
     113,   195,    89,   194,   110,     1,   111,   110,   171,    13,
     110,   110,     1,    87,    92,   110,   110,   125,   110,    87,
      89,   194,   110,     1,   110,   110,     1,   178,   110,   110,
      91,   110,   181,   110,     1,    13,    20,    91,    93,    96,
      99,   184,    91,    92,   110,   110,   110,   110,    55,   130,
      13,    14,   151,   152,   161,   162,   161,   110,    13,   167,
       7,     8,     9,    10,    11,    97,    98,   169,   159,     1,
      12,    89,   194,   133,   134,    87,   119,   110,   110,   173,
     110,    87,   153,   110,    89,   178,    52,   177,   173,   142,
     110,   186,   110,   110,   110,     5,     5,   110,   183,   185,
     110,   110,    17,   127,   128,   110,   110,   110,    78,     1,
     110,   110,    97,   169,   110,   113,   110,    89,   194,   110,
       1,   113,   120,   121,   122,   123,   135,   137,   143,   149,
     156,   191,   192,   193,   119,   132,    88,    89,   194,   110,
     173,   110,   177,   110,     1,    88,   110,   186,   110,    91,
     129,    91,    91,   110,    91,    92,    91,   110,    12,    13,
     170,    89,   145,   173,   113,   111,   191,   110,   139,   113,
      91,   178,   110,    91,   110,   170,   110,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   113,   146,   148,    88,   140,   110,   110,
     161,   110,    97,   110,   147,   110,    97,   173,   110,    87,
     110,   173,   113
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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






/*----------.
| yyparse.  |
`----------*/

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
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 9:
#line 303 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->m_rule = (yyvsp[(4) - (6)].rule);
    ;}
    break;

  case 10:
#line 309 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->m_keyframe = (yyvsp[(4) - (6)].keyframeRule);
    ;}
    break;

  case 11:
#line 315 "CSSGrammar.y"
    {
        /* can be empty */
    ;}
    break;

  case 12:
#line 321 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        if ((yyvsp[(4) - (5)].valueList)) {
            p->m_valueList = p->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = p->m_numParsedProperties;
            if (!p->parseValue(p->m_id, p->m_important))
                p->rollbackLastProperties(p->m_numParsedProperties - oldParsedProperties);
            delete p->m_valueList;
            p->m_valueList = 0;
        }
    ;}
    break;

  case 13:
#line 335 "CSSGrammar.y"
    {
         CSSParser* p = static_cast<CSSParser*>(parser);
         p->m_mediaQuery = p->sinkFloatingMediaQuery((yyvsp[(4) - (5)].mediaQuery));
     ;}
    break;

  case 14:
#line 342 "CSSGrammar.y"
    {
        if ((yyvsp[(4) - (5)].selectorList)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            if (p->m_selectorListForParseSelector)
                p->m_selectorListForParseSelector->adoptSelectorVector(*(yyvsp[(4) - (5)].selectorList));
        }
    ;}
    break;

  case 21:
#line 364 "CSSGrammar.y"
    {
  ;}
    break;

  case 24:
#line 374 "CSSGrammar.y"
    {
     CSSParser* p = static_cast<CSSParser*>(parser);
     (yyval.rule) = static_cast<CSSParser*>(parser)->createCharsetRule((yyvsp[(3) - (5)].string));
     if ((yyval.rule) && p->m_styleSheet)
         p->m_styleSheet->append((yyval.rule));
  ;}
    break;

  case 25:
#line 380 "CSSGrammar.y"
    {
  ;}
    break;

  case 26:
#line 382 "CSSGrammar.y"
    {
  ;}
    break;

  case 27:
#line 387 "CSSGrammar.y"
    {
        // Ignore any @charset rule not at the beginning of the style sheet.
        (yyval.rule) = 0;
    ;}
    break;

  case 29:
#line 395 "CSSGrammar.y"
    {
     CSSParser* p = static_cast<CSSParser*>(parser);
     if ((yyvsp[(2) - (3)].rule) && p->m_styleSheet)
         p->m_styleSheet->append((yyvsp[(2) - (3)].rule));
 ;}
    break;

  case 30:
#line 403 "CSSGrammar.y"
    {
        (yyval.rule) = (yyvsp[(2) - (2)].rule);
    ;}
    break;

  case 37:
#line 415 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->m_hadSyntacticallyValidCSSRule = true;
    ;}
    break;

  case 41:
#line 424 "CSSGrammar.y"
    { (yyval.ruleList) = 0; ;}
    break;

  case 42:
#line 425 "CSSGrammar.y"
    {
      (yyval.ruleList) = (yyvsp[(1) - (3)].ruleList);
      if ((yyvsp[(2) - (3)].rule)) {
          if (!(yyval.ruleList))
              (yyval.ruleList) = static_cast<CSSParser*>(parser)->createRuleList();
          (yyval.ruleList)->append((yyvsp[(2) - (3)].rule));
      }
  ;}
    break;

  case 53:
#line 453 "CSSGrammar.y"
    {
        (yyval.rule) = static_cast<CSSParser*>(parser)->createImportRule((yyvsp[(3) - (6)].string), (yyvsp[(5) - (6)].mediaList));
    ;}
    break;

  case 54:
#line 456 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 55:
#line 459 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 56:
#line 462 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 57:
#line 468 "CSSGrammar.y"
    {
    static_cast<CSSParser*>(parser)->addNamespace((yyvsp[(3) - (6)].string), (yyvsp[(4) - (6)].string));
    (yyval.rule) = 0;
;}
    break;

  case 58:
#line 472 "CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 59:
#line 475 "CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 60:
#line 478 "CSSGrammar.y"
    {
    (yyval.rule) = 0;
;}
    break;

  case 61:
#line 484 "CSSGrammar.y"
    { (yyval.string).characters = 0; ;}
    break;

  case 62:
#line 485 "CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); ;}
    break;

  case 65:
#line 494 "CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (2)].string);
    ;}
    break;

  case 66:
#line 500 "CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 67:
#line 503 "CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(3) - (4)].valueList);
    ;}
    break;

  case 68:
#line 509 "CSSGrammar.y"
    {
        (yyvsp[(3) - (7)].string).lower();
        (yyval.mediaQueryExp) = static_cast<CSSParser*>(parser)->createFloatingMediaQueryExp((yyvsp[(3) - (7)].string), (yyvsp[(5) - (7)].valueList));
    ;}
    break;

  case 69:
#line 516 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.mediaQueryExpList) = p->createFloatingMediaQueryExpList();
        (yyval.mediaQueryExpList)->append(p->sinkFloatingMediaQueryExp((yyvsp[(1) - (1)].mediaQueryExp)));
    ;}
    break;

  case 70:
#line 521 "CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(1) - (5)].mediaQueryExpList);
        (yyval.mediaQueryExpList)->append(static_cast<CSSParser*>(parser)->sinkFloatingMediaQueryExp((yyvsp[(5) - (5)].mediaQueryExp)));
    ;}
    break;

  case 71:
#line 528 "CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = static_cast<CSSParser*>(parser)->createFloatingMediaQueryExpList();
    ;}
    break;

  case 72:
#line 531 "CSSGrammar.y"
    {
        (yyval.mediaQueryExpList) = (yyvsp[(3) - (3)].mediaQueryExpList);
    ;}
    break;

  case 73:
#line 537 "CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::None;
    ;}
    break;

  case 74:
#line 540 "CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Only;
    ;}
    break;

  case 75:
#line 543 "CSSGrammar.y"
    {
        (yyval.mediaQueryRestrictor) = MediaQuery::Not;
    ;}
    break;

  case 76:
#line 549 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.mediaQuery) = p->createFloatingMediaQuery(p->sinkFloatingMediaQueryExpList((yyvsp[(1) - (1)].mediaQueryExpList)));
    ;}
    break;

  case 77:
#line 554 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyvsp[(3) - (4)].string).lower();
        (yyval.mediaQuery) = p->createFloatingMediaQuery((yyvsp[(1) - (4)].mediaQueryRestrictor), (yyvsp[(3) - (4)].string), p->sinkFloatingMediaQueryExpList((yyvsp[(4) - (4)].mediaQueryExpList)));
    ;}
    break;

  case 78:
#line 562 "CSSGrammar.y"
    {
        (yyval.mediaList) = static_cast<CSSParser*>(parser)->createMediaList();
     ;}
    break;

  case 80:
#line 569 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.mediaList) = p->createMediaList();
        (yyval.mediaList)->appendMediaQuery(p->sinkFloatingMediaQuery((yyvsp[(1) - (1)].mediaQuery)));
    ;}
    break;

  case 81:
#line 574 "CSSGrammar.y"
    {
        (yyval.mediaList) = (yyvsp[(1) - (4)].mediaList);
        if ((yyval.mediaList))
            (yyval.mediaList)->appendMediaQuery(static_cast<CSSParser*>(parser)->sinkFloatingMediaQuery((yyvsp[(4) - (4)].mediaQuery)));
    ;}
    break;

  case 82:
#line 579 "CSSGrammar.y"
    {
        (yyval.mediaList) = 0;
    ;}
    break;

  case 83:
#line 585 "CSSGrammar.y"
    {
        (yyval.rule) = static_cast<CSSParser*>(parser)->createMediaRule((yyvsp[(3) - (7)].mediaList), (yyvsp[(6) - (7)].ruleList));
    ;}
    break;

  case 84:
#line 588 "CSSGrammar.y"
    {
        (yyval.rule) = static_cast<CSSParser*>(parser)->createMediaRule(0, (yyvsp[(5) - (6)].ruleList));
    ;}
    break;

  case 85:
#line 594 "CSSGrammar.y"
    {
      (yyval.string) = (yyvsp[(1) - (2)].string);
  ;}
    break;

  case 86:
#line 600 "CSSGrammar.y"
    {
        (yyval.rule) = (yyvsp[(7) - (8)].keyframesRule);
        (yyvsp[(7) - (8)].keyframesRule)->setNameInternal((yyvsp[(3) - (8)].string));
    ;}
    break;

  case 89:
#line 612 "CSSGrammar.y"
    { (yyval.keyframesRule) = static_cast<CSSParser*>(parser)->createKeyframesRule(); ;}
    break;

  case 90:
#line 613 "CSSGrammar.y"
    {
        (yyval.keyframesRule) = (yyvsp[(1) - (3)].keyframesRule);
        if ((yyvsp[(2) - (3)].keyframeRule))
            (yyval.keyframesRule)->append((yyvsp[(2) - (3)].keyframeRule));
    ;}
    break;

  case 91:
#line 621 "CSSGrammar.y"
    {
        (yyval.keyframeRule) = static_cast<CSSParser*>(parser)->createKeyframeRule((yyvsp[(1) - (6)].valueList));
    ;}
    break;

  case 92:
#line 627 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.valueList) = p->createFloatingValueList();
        (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    ;}
    break;

  case 93:
#line 632 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.valueList) = (yyvsp[(1) - (5)].valueList);
        if ((yyval.valueList))
            (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(5) - (5)].value)));
    ;}
    break;

  case 94:
#line 641 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (1)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 95:
#line 642 "CSSGrammar.y"
    {
        (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER;
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        if (equalIgnoringCase("from", str.characters, str.length))
            (yyval.value).fValue = 0;
        else if (equalIgnoringCase("to", str.characters, str.length))
            (yyval.value).fValue = 100;
        else
            YYERROR;
    ;}
    break;

  case 96:
#line 656 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        if ((yyvsp[(3) - (8)].selector))
            (yyval.rule) = p->createPageRule(p->sinkFloatingSelector((yyvsp[(3) - (8)].selector)));
        else {
            // Clear properties in the invalid @page rule.
            p->clearProperties();
            // Also clear margin at-rules here once we fully implement margin at-rules parsing.
            (yyval.rule) = 0;
        }
    ;}
    break;

  case 97:
#line 667 "CSSGrammar.y"
    {
      (yyval.rule) = 0;
    ;}
    break;

  case 98:
#line 670 "CSSGrammar.y"
    {
      (yyval.rule) = 0;
    ;}
    break;

  case 99:
#line 676 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), p->m_defaultNamespace));
        (yyval.selector)->setForPage();
    ;}
    break;

  case 100:
#line 682 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector)) {
            (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (2)].string), p->m_defaultNamespace));
            (yyval.selector)->setForPage();
        }
    ;}
    break;

  case 101:
#line 690 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            (yyval.selector)->setForPage();
    ;}
    break;

  case 102:
#line 695 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setForPage();
    ;}
    break;

  case 105:
#line 708 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->startDeclarationsForMarginBox();
    ;}
    break;

  case 106:
#line 710 "CSSGrammar.y"
    {
        (yyval.rule) = static_cast<CSSParser*>(parser)->createMarginAtRule((yyvsp[(1) - (7)].marginBox));
    ;}
    break;

  case 107:
#line 716 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftCornerMarginBox;
    ;}
    break;

  case 108:
#line 719 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopLeftMarginBox;
    ;}
    break;

  case 109:
#line 722 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopCenterMarginBox;
    ;}
    break;

  case 110:
#line 725 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightMarginBox;
    ;}
    break;

  case 111:
#line 728 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::TopRightCornerMarginBox;
    ;}
    break;

  case 112:
#line 731 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftCornerMarginBox;
    ;}
    break;

  case 113:
#line 734 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomLeftMarginBox;
    ;}
    break;

  case 114:
#line 737 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomCenterMarginBox;
    ;}
    break;

  case 115:
#line 740 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightMarginBox;
    ;}
    break;

  case 116:
#line 743 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::BottomRightCornerMarginBox;
    ;}
    break;

  case 117:
#line 746 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftTopMarginBox;
    ;}
    break;

  case 118:
#line 749 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftMiddleMarginBox;
    ;}
    break;

  case 119:
#line 752 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::LeftBottomMarginBox;
    ;}
    break;

  case 120:
#line 755 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightTopMarginBox;
    ;}
    break;

  case 121:
#line 758 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightMiddleMarginBox;
    ;}
    break;

  case 122:
#line 761 "CSSGrammar.y"
    {
        (yyval.marginBox) = CSSSelector::RightBottomMarginBox;
    ;}
    break;

  case 123:
#line 768 "CSSGrammar.y"
    {
        (yyval.rule) = static_cast<CSSParser*>(parser)->createFontFaceRule();
    ;}
    break;

  case 124:
#line 771 "CSSGrammar.y"
    {
      (yyval.rule) = 0;
    ;}
    break;

  case 125:
#line 774 "CSSGrammar.y"
    {
      (yyval.rule) = 0;
    ;}
    break;

  case 126:
#line 780 "CSSGrammar.y"
    { (yyval.relation) = CSSSelector::DirectAdjacent; ;}
    break;

  case 127:
#line 781 "CSSGrammar.y"
    { (yyval.relation) = CSSSelector::IndirectAdjacent; ;}
    break;

  case 128:
#line 782 "CSSGrammar.y"
    { (yyval.relation) = CSSSelector::Child; ;}
    break;

  case 129:
#line 786 "CSSGrammar.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); ;}
    break;

  case 130:
#line 787 "CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 131:
#line 791 "CSSGrammar.y"
    { (yyval.integer) = -1; ;}
    break;

  case 132:
#line 792 "CSSGrammar.y"
    { (yyval.integer) = 1; ;}
    break;

  case 133:
#line 796 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
    ;}
    break;

  case 134:
#line 803 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markSelectorListStart();
    ;}
    break;

  case 135:
#line 810 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markSelectorListEnd();
    ;}
    break;

  case 136:
#line 817 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.rule) = p->createStyleRule((yyvsp[(1) - (6)].selectorList));
    ;}
    break;

  case 137:
#line 824 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selectorList) = p->reusableSelectorVector();
            (yyval.selectorList)->shrink(0);
            (yyval.selectorList)->append(p->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
            p->updateLastSelectorLineAndPosition();
        }
    ;}
    break;

  case 138:
#line 833 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (4)].selectorList) && (yyvsp[(4) - (4)].selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selectorList) = (yyvsp[(1) - (4)].selectorList);
            (yyval.selectorList)->append(p->sinkFloatingSelector((yyvsp[(4) - (4)].selector)));
            p->updateLastSelectorLineAndPosition();
        } else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 139:
#line 842 "CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    ;}
    break;

  case 140:
#line 848 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (2)].selector);
    ;}
    break;

  case 141:
#line 854 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 142:
#line 858 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 143:
#line 862 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if (!(yyvsp[(1) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            CSSParserSelector* end = (yyval.selector);
            while (end->tagHistory())
                end = end->tagHistory();
            end->setRelation(CSSSelector::Descendant);
            end->setTagHistory(p->sinkFloatingSelector((yyvsp[(1) - (2)].selector)));
        }
    ;}
    break;

  case 144:
#line 875 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if (!(yyvsp[(1) - (3)].selector))
            (yyval.selector) = 0;
        else if ((yyval.selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            CSSParserSelector* end = (yyval.selector);
            while (end->tagHistory())
                end = end->tagHistory();
            end->setRelation((yyvsp[(2) - (3)].relation));
            end->setTagHistory(p->sinkFloatingSelector((yyvsp[(1) - (3)].selector)));
        }
    ;}
    break;

  case 145:
#line 888 "CSSGrammar.y"
    {
        (yyval.selector) = 0;
    ;}
    break;

  case 146:
#line 894 "CSSGrammar.y"
    { (yyval.string).characters = 0; (yyval.string).length = 0; ;}
    break;

  case 147:
#line 895 "CSSGrammar.y"
    { static UChar star = '*'; (yyval.string).characters = &star; (yyval.string).length = 1; ;}
    break;

  case 148:
#line 896 "CSSGrammar.y"
    { (yyval.string) = (yyvsp[(1) - (2)].string); ;}
    break;

  case 149:
#line 900 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(1) - (1)].string), p->m_defaultNamespace));
    ;}
    break;

  case 150:
#line 905 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            static_cast<CSSParser*>(parser)->updateSpecifiersWithElementName(nullAtom, (yyvsp[(1) - (2)].string), (yyval.selector));
    ;}
    break;

  case 151:
#line 910 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
        if ((yyval.selector))
            static_cast<CSSParser*>(parser)->updateSpecifiersWithElementName(nullAtom, starAtom, (yyval.selector));
    ;}
    break;

  case 152:
#line 915 "CSSGrammar.y"
    {
        AtomicString namespacePrefix = (yyvsp[(1) - (2)].string);
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        if (p->m_styleSheet)
            (yyval.selector)->setTag(QualifiedName(namespacePrefix, (yyvsp[(2) - (2)].string),
                                      p->m_styleSheet->determineNamespace(namespacePrefix)));
        else // FIXME: Shouldn't this case be an error?
            (yyval.selector)->setTag(QualifiedName(nullAtom, (yyvsp[(2) - (2)].string), p->m_defaultNamespace));
    ;}
    break;

  case 153:
#line 925 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(3) - (3)].selector);
        if ((yyval.selector))
            static_cast<CSSParser*>(parser)->updateSpecifiersWithElementName((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string), (yyval.selector));
    ;}
    break;

  case 154:
#line 930 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(2) - (2)].selector);
        if ((yyval.selector))
            static_cast<CSSParser*>(parser)->updateSpecifiersWithElementName((yyvsp[(1) - (2)].string), starAtom, (yyval.selector));
    ;}
    break;

  case 155:
#line 938 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selectorList) = p->createFloatingSelectorVector();
            (yyval.selectorList)->append(p->sinkFloatingSelector((yyvsp[(1) - (1)].selector)));
        } else
            (yyval.selectorList) = 0
    ;}
    break;

  case 156:
#line 946 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (5)].selectorList) && (yyvsp[(5) - (5)].selector)) {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selectorList) = (yyvsp[(1) - (5)].selectorList);
            (yyval.selectorList)->append(p->sinkFloatingSelector((yyvsp[(5) - (5)].selector)));
        } else
            (yyval.selectorList) = 0;
    ;}
    break;

  case 157:
#line 954 "CSSGrammar.y"
    {
        (yyval.selectorList) = 0;
    ;}
    break;

  case 158:
#line 960 "CSSGrammar.y"
    {
        CSSParserString& str = (yyvsp[(1) - (1)].string);
        CSSParser* p = static_cast<CSSParser*>(parser);
        Document* doc = p->document();
        if (doc && doc->isHTMLDocument())
            str.lower();
        (yyval.string) = str;
    ;}
    break;

  case 159:
#line 968 "CSSGrammar.y"
    {
        static UChar star = '*';
        (yyval.string).characters = &star;
        (yyval.string).length = 1;
    ;}
    break;

  case 160:
#line 976 "CSSGrammar.y"
    {
        (yyval.selector) = (yyvsp[(1) - (1)].selector);
    ;}
    break;

  case 161:
#line 979 "CSSGrammar.y"
    {
        if (!(yyvsp[(2) - (2)].selector))
            (yyval.selector) = 0;
        else if ((yyvsp[(1) - (2)].selector))
            (yyval.selector) = static_cast<CSSParser*>(parser)->updateSpecifiers((yyvsp[(1) - (2)].selector), (yyvsp[(2) - (2)].selector));
    ;}
    break;

  case 162:
#line 985 "CSSGrammar.y"
    {
        (yyval.selector) = 0;
    ;}
    break;

  case 163:
#line 991 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Id);
        if (!p->m_strict)
            (yyvsp[(1) - (1)].string).lower();
        (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
    ;}
    break;

  case 164:
#line 999 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (1)].string).characters[0] >= '0' && (yyvsp[(1) - (1)].string).characters[0] <= '9') {
            (yyval.selector) = 0;
        } else {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selector) = p->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::Id);
            if (!p->m_strict)
                (yyvsp[(1) - (1)].string).lower();
            (yyval.selector)->setValue((yyvsp[(1) - (1)].string));
        }
    ;}
    break;

  case 168:
#line 1017 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::Class);
        if (!p->m_strict)
            (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
    ;}
    break;

  case 169:
#line 1028 "CSSGrammar.y"
    {
        CSSParserString& str = (yyvsp[(1) - (2)].string);
        CSSParser* p = static_cast<CSSParser*>(parser);
        Document* doc = p->document();
        if (doc && doc->isHTMLDocument())
            str.lower();
        (yyval.string) = str;
    ;}
    break;

  case 170:
#line 1039 "CSSGrammar.y"
    {
        (yyval.selector) = static_cast<CSSParser*>(parser)->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (4)].string), nullAtom));
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 171:
#line 1044 "CSSGrammar.y"
    {
        (yyval.selector) = static_cast<CSSParser*>(parser)->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(nullAtom, (yyvsp[(3) - (8)].string), nullAtom));
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(4) - (8)].integer));
        (yyval.selector)->setValue((yyvsp[(6) - (8)].string));
    ;}
    break;

  case 172:
#line 1050 "CSSGrammar.y"
    {
        AtomicString namespacePrefix = (yyvsp[(3) - (5)].string);
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(namespacePrefix, (yyvsp[(4) - (5)].string),
                                   p->m_styleSheet->determineNamespace(namespacePrefix)));
        (yyval.selector)->setMatch(CSSSelector::Set);
    ;}
    break;

  case 173:
#line 1058 "CSSGrammar.y"
    {
        AtomicString namespacePrefix = (yyvsp[(3) - (9)].string);
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setAttribute(QualifiedName(namespacePrefix, (yyvsp[(4) - (9)].string),
                                   p->m_styleSheet->determineNamespace(namespacePrefix)));
        (yyval.selector)->setMatch((CSSSelector::Match)(yyvsp[(5) - (9)].integer));
        (yyval.selector)->setValue((yyvsp[(7) - (9)].string));
    ;}
    break;

  case 174:
#line 1070 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Exact;
    ;}
    break;

  case 175:
#line 1073 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::List;
    ;}
    break;

  case 176:
#line 1076 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Hyphen;
    ;}
    break;

  case 177:
#line 1079 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Begin;
    ;}
    break;

  case 178:
#line 1082 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::End;
    ;}
    break;

  case 179:
#line 1085 "CSSGrammar.y"
    {
        (yyval.integer) = CSSSelector::Contain;
    ;}
    break;

  case 182:
#line 1096 "CSSGrammar.y"
    {
        (yyval.selector) = static_cast<CSSParser*>(parser)->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PagePseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 183:
#line 1107 "CSSGrammar.y"
    {
        (yyval.selector) = static_cast<CSSParser*>(parser)->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyvsp[(2) - (2)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (2)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 184:
#line 1116 "CSSGrammar.y"
    {
        (yyval.selector) = static_cast<CSSParser*>(parser)->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoElement);
        (yyvsp[(3) - (3)].string).lower();
        (yyval.selector)->setValue((yyvsp[(3) - (3)].string));
        // FIXME: This call is needed to force selector to compute the pseudoType early enough.
        (yyval.selector)->pseudoType();
    ;}
    break;

  case 185:
#line 1129 "CSSGrammar.y"
    {
        if ((yyvsp[(4) - (6)].selectorList)) {
            CSSParser *p = static_cast<CSSParser*>(parser);
            (yyval.selector) = p->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);
            (yyval.selector)->adoptSelectorVector(*p->sinkFloatingSelectorVector((yyvsp[(4) - (6)].selectorList)));
            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
            CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
            if (type != CSSSelector::PseudoAny)
                (yyval.selector) = 0;
        } else
            (yyval.selector) = 0;
    ;}
    break;

  case 186:
#line 1144 "CSSGrammar.y"
    {
        CSSParser *p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 187:
#line 1155 "CSSGrammar.y"
    {
        CSSParser *p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument(String::number((yyvsp[(4) - (7)].integer) * (yyvsp[(5) - (7)].number)));
        (yyval.selector)->setValue((yyvsp[(2) - (7)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
    ;}
    break;

  case 188:
#line 1166 "CSSGrammar.y"
    {
        CSSParser *p = static_cast<CSSParser*>(parser);
        (yyval.selector) = p->createFloatingSelector();
        (yyval.selector)->setMatch(CSSSelector::PseudoClass);
        (yyval.selector)->setArgument((yyvsp[(4) - (6)].string));
        (yyvsp[(2) - (6)].string).lower();
        (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        CSSSelector::PseudoType type = (yyval.selector)->pseudoType();
        if (type == CSSSelector::PseudoUnknown)
            (yyval.selector) = 0;
        else if (type == CSSSelector::PseudoNthChild ||
                 type == CSSSelector::PseudoNthOfType ||
                 type == CSSSelector::PseudoNthLastChild ||
                 type == CSSSelector::PseudoNthLastOfType) {
            if (!isValidNthToken((yyvsp[(4) - (6)].string)))
                (yyval.selector) = 0;
        }
    ;}
    break;

  case 189:
#line 1185 "CSSGrammar.y"
    {
        if (!(yyvsp[(4) - (6)].selector) || !(yyvsp[(4) - (6)].selector)->isSimple())
            (yyval.selector) = 0;
        else {
            CSSParser* p = static_cast<CSSParser*>(parser);
            (yyval.selector) = p->createFloatingSelector();
            (yyval.selector)->setMatch(CSSSelector::PseudoClass);

            Vector<OwnPtr<CSSParserSelector> > selectorVector;
            selectorVector.append(p->sinkFloatingSelector((yyvsp[(4) - (6)].selector)));
            (yyval.selector)->adoptSelectorVector(selectorVector);

            (yyvsp[(2) - (6)].string).lower();
            (yyval.selector)->setValue((yyvsp[(2) - (6)].string));
        }
    ;}
    break;

  case 190:
#line 1204 "CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    ;}
    break;

  case 191:
#line 1207 "CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
        if ( (yyvsp[(2) - (2)].boolean) )
            (yyval.boolean) = (yyvsp[(2) - (2)].boolean);
    ;}
    break;

  case 192:
#line 1212 "CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (1)].boolean);
    ;}
    break;

  case 193:
#line 1215 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 194:
#line 1218 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 195:
#line 1221 "CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
    ;}
    break;

  case 196:
#line 1224 "CSSGrammar.y"
    {
        (yyval.boolean) = (yyvsp[(1) - (2)].boolean);
    ;}
    break;

  case 197:
#line 1230 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (3)].boolean);
    ;}
    break;

  case 198:
#line 1235 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 199:
#line 1238 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 200:
#line 1241 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
        (yyval.boolean) = false;
    ;}
    break;

  case 201:
#line 1246 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 202:
#line 1249 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
        if ((yyvsp[(2) - (4)].boolean))
            (yyval.boolean) = (yyvsp[(2) - (4)].boolean);
    ;}
    break;

  case 203:
#line 1256 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (4)].boolean);
    ;}
    break;

  case 204:
#line 1261 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyStart();
        (yyval.boolean) = (yyvsp[(1) - (6)].boolean);
    ;}
    break;

  case 205:
#line 1269 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
        CSSParser* p = static_cast<CSSParser*>(parser);
        bool isPropertyParsed = false;
        if ((yyvsp[(1) - (5)].integer) && (yyvsp[(4) - (5)].valueList)) {
            p->m_valueList = p->sinkFloatingValueList((yyvsp[(4) - (5)].valueList));
            int oldParsedProperties = p->m_numParsedProperties;
            (yyval.boolean) = p->parseValue((yyvsp[(1) - (5)].integer), (yyvsp[(5) - (5)].boolean));
            if (!(yyval.boolean))
                p->rollbackLastProperties(p->m_numParsedProperties - oldParsedProperties);
            else
                isPropertyParsed = true;
            delete p->m_valueList;
            p->m_valueList = 0;
        }
        p->markPropertyEnd((yyvsp[(5) - (5)].boolean), isPropertyParsed);
    ;}
    break;

  case 206:
#line 1287 "CSSGrammar.y"
    {
        (yyval.boolean) = false;
    ;}
    break;

  case 207:
#line 1291 "CSSGrammar.y"
    {
        /* The default movable type template has letter-spacing: .none;  Handle this by looking for
        error tokens at the start of an expr, recover the expr and then treat as an error, cleaning
        up and deleting the shifted expr.  */
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 208:
#line 1300 "CSSGrammar.y"
    {
        /* When we encounter something like p {color: red !important fail;} we should drop the declaration */
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 209:
#line 1307 "CSSGrammar.y"
    {
        /* Handle this case: div { text-align: center; !important } Just reduce away the stray !important. */
        (yyval.boolean) = false;
    ;}
    break;

  case 210:
#line 1312 "CSSGrammar.y"
    {
        /* div { font-family: } Just reduce away this property with no value. */
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 211:
#line 1319 "CSSGrammar.y"
    {
        /* if we come across rules with invalid values like this case: p { weight: *; }, just discard the rule */
        CSSParser* p = static_cast<CSSParser*>(parser);
        p->markPropertyEnd(false, false);
        (yyval.boolean) = false;
    ;}
    break;

  case 212:
#line 1326 "CSSGrammar.y"
    {
        /* if we come across: div { color{;color:maroon} }, ignore everything within curly brackets */
        (yyval.boolean) = false;
    ;}
    break;

  case 213:
#line 1333 "CSSGrammar.y"
    {
        (yyval.integer) = cssPropertyID((yyvsp[(1) - (2)].string));
    ;}
    break;

  case 214:
#line 1339 "CSSGrammar.y"
    { (yyval.boolean) = true; ;}
    break;

  case 215:
#line 1340 "CSSGrammar.y"
    { (yyval.boolean) = false; ;}
    break;

  case 216:
#line 1344 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.valueList) = p->createFloatingValueList();
        (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(1) - (1)].value)));
    ;}
    break;

  case 217:
#line 1349 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
        if ((yyval.valueList)) {
            if ((yyvsp[(2) - (3)].character)) {
                CSSParserValue v;
                v.id = 0;
                v.unit = CSSParserValue::Operator;
                v.iValue = (yyvsp[(2) - (3)].character);
                (yyval.valueList)->addValue(v);
            }
            (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        }
    ;}
    break;

  case 218:
#line 1363 "CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 219:
#line 1366 "CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 220:
#line 1369 "CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 221:
#line 1375 "CSSGrammar.y"
    {
        (yyval.character) = '/';
    ;}
    break;

  case 222:
#line 1378 "CSSGrammar.y"
    {
        (yyval.character) = ',';
    ;}
    break;

  case 223:
#line 1381 "CSSGrammar.y"
    {
        (yyval.character) = 0;
  ;}
    break;

  case 224:
#line 1387 "CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); ;}
    break;

  case 225:
#line 1388 "CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); ;}
    break;

  case 226:
#line 1389 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_STRING; ;}
    break;

  case 227:
#line 1390 "CSSGrammar.y"
    {
      (yyval.value).id = cssValueKeywordID((yyvsp[(1) - (2)].string));
      (yyval.value).unit = CSSPrimitiveValue::CSS_IDENT;
      (yyval.value).string = (yyvsp[(1) - (2)].string);
  ;}
    break;

  case 228:
#line 1396 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 229:
#line 1397 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(2) - (3)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_DIMENSION; ;}
    break;

  case 230:
#line 1398 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_URI; ;}
    break;

  case 231:
#line 1399 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_UNICODE_RANGE; ;}
    break;

  case 232:
#line 1400 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = (yyvsp[(1) - (2)].string); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 233:
#line 1401 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).string = CSSParserString(); (yyval.value).unit = CSSPrimitiveValue::CSS_PARSER_HEXCOLOR; ;}
    break;

  case 234:
#line 1403 "CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  ;}
    break;

  case 235:
#line 1406 "CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  ;}
    break;

  case 236:
#line 1409 "CSSGrammar.y"
    {
      (yyval.value) = (yyvsp[(1) - (1)].value);
  ;}
    break;

  case 237:
#line 1412 "CSSGrammar.y"
    { /* Handle width: %; */
      (yyval.value).id = 0; (yyval.value).unit = 0;
  ;}
    break;

  case 238:
#line 1418 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = true; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 239:
#line 1419 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).isInt = false; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_NUMBER; ;}
    break;

  case 240:
#line 1420 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PERCENTAGE; ;}
    break;

  case 241:
#line 1421 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PX; ;}
    break;

  case 242:
#line 1422 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_CM; ;}
    break;

  case 243:
#line 1423 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MM; ;}
    break;

  case 244:
#line 1424 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_IN; ;}
    break;

  case 245:
#line 1425 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PT; ;}
    break;

  case 246:
#line 1426 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_PC; ;}
    break;

  case 247:
#line 1427 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_DEG; ;}
    break;

  case 248:
#line 1428 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_RAD; ;}
    break;

  case 249:
#line 1429 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_GRAD; ;}
    break;

  case 250:
#line 1430 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_TURN; ;}
    break;

  case 251:
#line 1431 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_MS; ;}
    break;

  case 252:
#line 1432 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_S; ;}
    break;

  case 253:
#line 1433 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_HZ; ;}
    break;

  case 254:
#line 1434 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_KHZ; ;}
    break;

  case 255:
#line 1435 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EMS; ;}
    break;

  case 256:
#line 1436 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSParserValue::Q_EMS; ;}
    break;

  case 257:
#line 1437 "CSSGrammar.y"
    { (yyval.value).id = 0; (yyval.value).fValue = (yyvsp[(1) - (2)].number); (yyval.value).unit = CSSPrimitiveValue::CSS_EXS; ;}
    break;

  case 258:
#line 1438 "CSSGrammar.y"
    {
      (yyval.value).id = 0;
      (yyval.value).fValue = (yyvsp[(1) - (2)].number);
      (yyval.value).unit = CSSPrimitiveValue::CSS_REMS;
      CSSParser* p = static_cast<CSSParser*>(parser);
      if (Document* doc = p->document())
          doc->setUsesRemUnits(true);
  ;}
    break;

  case 259:
#line 1449 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        CSSParserFunction* f = p->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = adoptPtr(p->sinkFloatingValueList((yyvsp[(3) - (5)].valueList)));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 260:
#line 1458 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        CSSParserFunction* f = p->createFloatingFunction();
        f->name = (yyvsp[(1) - (3)].string);
        f->args = nullptr;
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
  ;}
    break;

  case 261:
#line 1470 "CSSGrammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].value); ;}
    break;

  case 262:
#line 1471 "CSSGrammar.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); (yyval.value).fValue *= (yyvsp[(1) - (2)].integer); ;}
    break;

  case 263:
#line 1475 "CSSGrammar.y"
    {
        (yyval.character) = '+';
    ;}
    break;

  case 264:
#line 1478 "CSSGrammar.y"
    {
        (yyval.character) = '-';
    ;}
    break;

  case 265:
#line 1481 "CSSGrammar.y"
    {
        (yyval.character) = '*';
    ;}
    break;

  case 266:
#line 1484 "CSSGrammar.y"
    {
        (yyval.character) = '/';
    ;}
    break;

  case 267:
#line 1487 "CSSGrammar.y"
    {
        if (equalIgnoringCase("mod", (yyvsp[(1) - (2)].string).characters, (yyvsp[(1) - (2)].string).length))
            (yyval.character) = '%';
        else
            (yyval.character) = 0;
    ;}
    break;

  case 268:
#line 1496 "CSSGrammar.y"
    {
        if ((yyvsp[(3) - (6)].valueList)) {
            (yyval.valueList) = (yyvsp[(3) - (6)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = '(';
            (yyval.valueList)->insertValueAt(0, v);
            v.iValue = ')';
            (yyval.valueList)->addValue(v);
        } else
            (yyval.valueList) = 0;
    ;}
    break;

  case 269:
#line 1511 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        (yyval.valueList) = p->createFloatingValueList();
        (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(1) - (2)].value)));
    ;}
    break;

  case 270:
#line 1516 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->addValue(p->sinkFloatingValue((yyvsp[(3) - (3)].value)));
        } else
            (yyval.valueList) = 0;

    ;}
    break;

  case 271:
#line 1530 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (3)].valueList) && (yyvsp[(2) - (3)].character) && (yyvsp[(3) - (3)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = (yyvsp[(2) - (3)].character);
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(3) - (3)].valueList)));
        } else 
            (yyval.valueList) = 0;
    ;}
    break;

  case 273:
#line 1543 "CSSGrammar.y"
    {
        (yyval.valueList) = 0;
    ;}
    break;

  case 274:
#line 1549 "CSSGrammar.y"
    {
        (yyval.valueList) = (yyvsp[(1) - (1)].valueList);
    ;}
    break;

  case 275:
#line 1552 "CSSGrammar.y"
    {
        if ((yyvsp[(1) - (4)].valueList) && (yyvsp[(4) - (4)].valueList)) {
            (yyval.valueList) = (yyvsp[(1) - (4)].valueList);
            CSSParserValue v;
            v.id = 0;
            v.unit = CSSParserValue::Operator;
            v.iValue = ',';
            (yyval.valueList)->addValue(v);
            (yyval.valueList)->extend(*((yyvsp[(4) - (4)].valueList)));
        } else
            (yyval.valueList) = 0;
    ;}
    break;

  case 276:
#line 1567 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        CSSParserFunction* f = p->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = adoptPtr(p->sinkFloatingValueList((yyvsp[(3) - (5)].valueList)));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 277:
#line 1576 "CSSGrammar.y"
    {
        YYERROR;
    ;}
    break;

  case 278:
#line 1583 "CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    ;}
    break;

  case 279:
#line 1586 "CSSGrammar.y"
    {
        (yyval.string) = (yyvsp[(1) - (1)].string);
    ;}
    break;

  case 280:
#line 1592 "CSSGrammar.y"
    {
        CSSParser* p = static_cast<CSSParser*>(parser);
        CSSParserFunction* f = p->createFloatingFunction();
        f->name = (yyvsp[(1) - (5)].string);
        f->args = adoptPtr(p->sinkFloatingValueList((yyvsp[(3) - (5)].valueList)));
        (yyval.value).id = 0;
        (yyval.value).unit = CSSParserValue::Function;
        (yyval.value).function = f;
    ;}
    break;

  case 281:
#line 1601 "CSSGrammar.y"
    {
        YYERROR;
    ;}
    break;

  case 282:
#line 1609 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 283:
#line 1612 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 284:
#line 1618 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 285:
#line 1621 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 286:
#line 1627 "CSSGrammar.y"
    {
        (yyval.rule) = 0;
    ;}
    break;

  case 287:
#line 1645 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->invalidBlockHit();
    ;}
    break;

  case 288:
#line 1648 "CSSGrammar.y"
    {
        static_cast<CSSParser*>(parser)->invalidBlockHit();
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4302 "css.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 1658 "CSSGrammar.y"



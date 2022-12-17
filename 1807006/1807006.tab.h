
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 115 "1807006.y"

	
	double floating;
	char   *varName;
	char   *stringName;
	int param;
	int e;
	int ei;




/* Line 1676 of yacc.c  */
#line 125 "1807006.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



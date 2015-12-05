/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_TRUE = 258,
     T_FALSE = 259,
     T_SEMICOLON = 260,
     T_COLON = 261,
     T_COMMA = 262,
     T_OPENBRACKET = 263,
     T_CLOSEBRACKET = 264,
     T_OPENPAREN = 265,
     T_CLOSEPAREN = 266,
     T_ARROW = 267,
     T_RETURN = 268,
     T_EQUAL = 269,
     T_IF = 270,
     T_ELSE = 271,
     T_WHILE = 272,
     T_REPEAT = 273,
     T_UNTIL = 274,
     T_PRINT = 275,
     T_PLUS = 276,
     T_MINUS = 277,
     T_MULTIPLY = 278,
     T_DIVIDE = 279,
     T_LESSTHAN = 280,
     T_LESSEQUALTO = 281,
     T_EQUALS = 282,
     T_AND = 283,
     T_OR = 284,
     T_NOT = 285,
     T_NEW = 286,
     T_BEGINCOMMENT = 287,
     T_NONE = 288,
     T_ENDCOMMENT = 289,
     T_PERIOD = 290,
     T_NUMBER = 291,
     T_IDEN = 292,
     T_INTEGER = 293,
     T_BOOLEAN = 294,
     T_EXTENDS = 295,
     T_NEG = 296
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

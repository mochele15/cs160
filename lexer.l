%option yylineno
%pointer

%{
    #include <stdlib.h>
    #include <errno.h>
    #include <limits.h>
    #include "ast.hpp"
    #include "parser.hpp"
    void yyerror(const char *);
%}

/* WRITEME: Write any definitions here. You can find information on
            definitions here:
            http://flex.sourceforge.net/manual/Definitions-Section.html */

/* WRITEME: If you are going to use start conditions, write them here.
            You can find more information on start conditions here:
            http://flex.sourceforge.net/manual/Start-Conditions.html
            You will probably want to use exclusive conditions rather
            than inclusive conditions (use the %x instead of the %s). */
%x comment
%%

  /* WRITEME: Write your Flex token rules here */

"true"            { return T_TRUE; }
"false"           { return T_FALSE; }
";"               { return T_SEMICOLON; }
":"               { return T_COLON; }
","               { return T_COMMA; }
"{"               { return T_OPENBRACKET; }
"}"               { return T_CLOSEBRACKET; }
"("               { return T_OPENPAREN; }
")"               { return T_CLOSEPAREN; }
"->"              { return T_ARROW; }
"return"          { return T_RETURN; }
"="               { return T_EQUAL; }
"if"              { return T_IF; }
"else"            { return T_ELSE; }
"while"           { return T_WHILE; }
"repeat"          { return T_REPEAT; }
"until"           { return T_UNTIL; }
"print"           { return T_PRINT; }
"+"               { return T_PLUS; }
"-"               { return T_MINUS; }
"*"               { return T_MULTIPLY; }
"/"               { return T_DIVIDE; }
"<"               { return T_LESSTHAN; }
"<="              { return T_LESSEQUALTO; }
"equals"          { return T_EQUALS; }
"and"             { return T_AND; }
"or"              { return T_OR; }
"not"             { return T_NOT; }
"new"             { return T_NEW; }
"integer"         { return T_INTEGER; }
"boolean"         { return T_BOOLEAN; }
"none"            { return T_NONE; }
"extends"         { return T_EXTENDS; }
"/*"              BEGIN(comment); /*{ return T_BEGINCOMMENT; }*/
<comment>"*"+"/"  BEGIN(INITIAL); /*{ return T_ENDCOMMENT; }*/
<comment><<EOF>>  yyerror("dangling comment"); 
<comment>.        ;
"."               { return T_PERIOD; }
[0-9][0-9]*       { yylval.base_int = atoi(yytext); return T_NUMBER; }
[a-zA-Z][a-zA-Z0-9_]* { yylval.base_char_ptr = yytext; return T_IDEN; }
[ \t\r\n]         ;

.                 { yyerror("invalid character"); }

%%

int yywrap(void) {
  return 1;
}

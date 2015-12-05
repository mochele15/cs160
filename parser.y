%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <iostream>

    #include "ast.hpp"
    #define YYINITDEPTH 500
    #define YYDEBUG 1
    int yylex(void);
    void yyerror(const char *);

    extern ASTNode* astRoot;
%}

%error-verbose


/* WRITEME: List all your tokens here */
%token  T_TRUE T_FALSE T_SEMICOLON T_COLON T_COMMA T_OPENBRACKET T_CLOSEBRACKET
%token  T_OPENPAREN T_CLOSEPAREN T_ARROW T_RETURN T_EQUAL T_IF T_ELSE T_WHILE
%token  T_REPEAT T_UNTIL T_PRINT T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LESSTHAN
%token  T_LESSEQUALTO T_EQUALS T_AND T_OR T_NOT T_NEW T_BEGINCOMMENT T_NONE
%token  T_ENDCOMMENT T_PERIOD T_NUMBER T_IDEN T_INTEGER T_BOOLEAN T_EXTENDS

/* WRITEME: Specify precedence here */
%left T_OR
%left T_AND
%left T_LESSTHAN T_LESSEQUALTO T_EQUALS
%left T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE
%right T_NOT T_NEG

/* WRITEME: Specify types for all nonterminals and necessary terminals here */
%type <program_ptr> Start
%type <class_list_ptr> Class
%type <class_ptr> Class1
%type <declaration_list_ptr> Membrs
%type <method_list_ptr> Mthds
%type <declaration_ptr> Membr
%type <method_ptr> Mthd
%type <expression_ptr> Exp
%type <identifier_ptr> Iden
%type <type_ptr> Type ReturnType
%type <methodbody_ptr> Body
%type <parameter_list_ptr> Param Params
%type <integertype_ptr> T_INTEGER
%type <booleantype_ptr> T_BOOLEAN
%type <none_ptr> T_NONE
%type <methodcall_ptr> Method
%type <declaration_list_ptr> Decls
%type <declaration_ptr> Decl
%type <returnstatement_ptr> Rtrn
%type <identifier_list_ptr> Ids Ident
   //%type <integer_ptr> T_NUMBER T_TRUE T_FALSE
%type <expression_list_ptr> Arg Arg1
%type <statement_list_ptr> Block Else Stmts
%type <statement_ptr> Stmt
%type <ifelse_ptr> If 
%type <while_ptr> While
%type <repeat_ptr> Repeat
%type <print_ptr> Print
%type <base_int> T_NUMBER
%type <base_char_ptr> T_IDEN

%%

/* WRITEME: This rule is a placeholder, since Bison requires
            at least one rule to run successfully. Replace
            this with your appropriate start rules. */
Start : Class { $$ = new ProgramNode($1); astRoot = $$; }
      ;

/* WRITME: Write your Bison grammar specification here */
Class : Class Class1 { $$ = $1; $$->push_back($2); }
      | Class1 { $$ = new std::list<ClassNode*>(); $$->push_back($1); }
      ;

Class1 : Iden T_OPENBRACKET Membrs Mthds T_CLOSEBRACKET { $$ = new ClassNode($1, NULL, $3, $4); }
       | Iden T_EXTENDS Iden T_OPENBRACKET Membrs Mthds T_CLOSEBRACKET { $$ = new ClassNode($1, $3, $5, $6); }
       ;

Membrs : Membrs Membr { $$ = $1; $$->push_back($2); }
       |  { $$ = new std::list<DeclarationNode*>(); }
       ;

Membr : Type Ident T_SEMICOLON { $$ = new DeclarationNode($1, $2); }
      ;

Ident : Iden { $$ = new std::list<IdentifierNode*>(); $$->push_back($1); }
      ;

Mthds : Mthd Mthds { $$ = $2; $$->push_front($1); }
      |  { $$ = new std::list<MethodNode*>(); }
      ;

Mthd : Iden T_OPENPAREN Params T_CLOSEPAREN T_ARROW ReturnType T_OPENBRACKET Body T_CLOSEBRACKET { $$ = new MethodNode($1, $3, $6, $8); }
     ;
 
Type : T_INTEGER { $$ = new IntegerTypeNode(); /*$$ = $1;*/ }
     | Iden { $$ = new ObjectTypeNode($1); }
     | T_BOOLEAN { $$ = new BooleanTypeNode(); /*$$ = $1;*/ }
     ; 

ReturnType : Type { $$ = $1; }
           | T_NONE { $$ = new NoneNode(); /*$$ = $1;*/ }
           ;

Params : Iden T_COLON Type Param { $$ = $4; $$->push_front(new ParameterNode($3, $1)); }
       |  { $$ = new std::list<ParameterNode*>(); }
       ;

Param : T_COMMA Iden T_COLON Type Param { $$ = $5; $$->push_front(new ParameterNode($4, $2)); }
      |  { $$ = new std::list<ParameterNode*>(); }
      ;

/*Params : Params Param 
         | Params T_COMMA Param
         |   
         ;

Param : T_IDEN T_COLON Type
      ;*/

Body : Decls Stmts Rtrn { $$ = new MethodBodyNode($1, $2, $3); }
     ;

Decls : Decls Decl { $$ = $1; $$->push_back($2); } 
      |  { $$ = new std::list<DeclarationNode*>(); }
      ;

Decl : Type Iden Ids T_SEMICOLON { $3->push_front($2); $$ = new DeclarationNode($1, $3); }
     ;

Ids : T_COMMA Iden Ids { $$ = $3; $$->push_front($2); }
    |  { $$ = new std::list<IdentifierNode*>(); }
    ;

Rtrn : T_RETURN Exp T_SEMICOLON { $$ = new ReturnStatementNode($2); }
     |  { $$ = NULL; /*$$ = new ReturnStatementNode(NULL);*/ }
     ;

Stmts : Stmt Stmts { $$ = $2; $$->push_front($1); }
      |  { $$ = new std::list<StatementNode*>(); }
      ;

Stmt : Iden T_EQUAL Exp T_SEMICOLON { $$ = new AssignmentNode($1, NULL, $3); }
     | Iden T_PERIOD Iden T_EQUAL Exp T_SEMICOLON { $$ = new AssignmentNode($1, $3, $5); }
     | Method T_SEMICOLON { $$ = new CallNode($1); }
     | If { $$ = $1; }
     | While { $$ = $1; }
     | Repeat  { $$ = $1; }
     | Print { $$ = $1; }
     ;

If : T_IF Exp T_OPENBRACKET Block T_CLOSEBRACKET Else { $$ = new IfElseNode($2, $4, $6); }
   ;

Else : T_ELSE T_OPENBRACKET Block T_CLOSEBRACKET { $$ = $3; }
     |  { $$ = NULL; /*$$ = new std::list<StatementNode*>();*/ }
     ;

While : T_WHILE Exp T_OPENBRACKET Block T_CLOSEBRACKET { $$ = new WhileNode($2, $4); }
      ;

Repeat : T_REPEAT T_OPENBRACKET Block T_CLOSEBRACKET T_UNTIL T_OPENPAREN Exp T_CLOSEPAREN T_SEMICOLON { $$ = new RepeatNode($3, $7); } 
       ;

Print : T_PRINT Exp T_SEMICOLON { $$ = new PrintNode($2); }
      ;

Block : Block Stmt { $$ = $1; $$->push_back($2); }
      | Stmt { $$ = new std::list<StatementNode*>(); $$->push_front($1); }
      ;

Exp : Exp T_PLUS Exp { $$ = new PlusNode($1, $3); }
    | Exp T_MINUS Exp { $$ = new MinusNode($1, $3); }
    | Exp T_MULTIPLY Exp { $$ = new TimesNode($1, $3); }
    | Exp T_DIVIDE Exp { $$ = new DivideNode($1, $3); }
    | Exp T_LESSTHAN Exp { $$ = new LessNode($1, $3);  }
    | Exp T_LESSEQUALTO Exp { $$ = new LessEqualNode($1, $3); }
    | Exp T_EQUALS Exp { $$ = new EqualNode($1, $3); }
    | Exp T_AND Exp { $$ = new AndNode($1, $3); }
    | Exp T_OR Exp { $$ = new OrNode($1, $3); }
    | T_NOT Exp { $$ = new NotNode($2); }
    | T_MINUS Exp %prec T_NEG   { $$ = new NegationNode($2); } 
    | Iden { $$ = new VariableNode($1); }
    | Iden T_PERIOD Iden { $$ = new MemberAccessNode($1, $3); }
    | Method { $$ = $1; }
    | T_OPENPAREN Exp T_CLOSEPAREN { $$ = $2; }
    | T_NUMBER { $$ = new IntegerLiteralNode(new IntegerNode(yylval.base_int)); }
    | T_TRUE { $$ = new BooleanLiteralNode(new IntegerNode(1)); } 
    | T_FALSE { $$ = new BooleanLiteralNode(new IntegerNode(0)); }
    | T_NEW Iden { $$ = new NewNode($2, NULL); }
    | T_NEW Iden T_OPENPAREN Arg T_CLOSEPAREN { $$ = new NewNode($2, $4); }
    ;

Method : Iden T_OPENPAREN Arg T_CLOSEPAREN { $$ = new MethodCallNode($1, NULL, $3); }
       | Iden T_PERIOD Iden T_OPENPAREN Arg T_CLOSEPAREN { $$ = new MethodCallNode($1, $3, $5); }
       ;

Arg : Arg1 { $$ = $1; }
    |  { $$ = new std::list<ExpressionNode*>(); }
    ;

Arg1 : Arg1 T_COMMA Exp { $$ = $1; $$->push_back($3); }
     | Exp { $$ = new std::list<ExpressionNode*>(); $$->push_back($1); }
     ;

Iden : T_IDEN { $$ = new IdentifierNode($1); }

%%

extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(1);
}

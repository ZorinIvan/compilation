%{
	
/* Declarations section */
#include <stdlib.h>
#include <stdio.h>
#include "attributes.hpp"
#include "part3.tab.hpp"
#define NUM_OF_RULES 25
#define NUM_OF_SYMBOLS 9

using namespace std;
  
const string rules[NUM_OF_RULES] = {"real", "integer", "write", "read", "while",
								   "do", "if", "then", "else", "main",
								   "var", "call", "return", "defstruct", "extern", 
								   "relop", "addop", "mulop", "assign", "and",
								   "or", "not", "num", "id", "str"};
void createYylval(int num, char* str);
%}

%option yylineno
%option noyywrap

id		   	([a-zA-Z][a-zA-Z0-9]*)
str		   	(\"[^"]*\")
comment    	(\/\/[^\n]*)
whitespace	([\t\n\r ])
digit		([0-9])
uint		({digit}+)
int 		({uint}|-{uint})
real		({int}\.{uint})
num			({int}|{real})
%%

{comment}					;
{whitespace}			;
       
\(				createYylval(-1, yytext); return LP;
\)				createYylval(-1, yytext); return RP;
\{				createYylval(-1, yytext); return LC;
\}				createYylval(-1, yytext); return RC;
\;				createYylval(-1, yytext); return SC;
\:				createYylval(-1, yytext); return COL;
\[				createYylval(-1, yytext); return LS;
\]            	createYylval(-1, yytext); return RS;
\,              createYylval(-1, yytext); return COM;

real						{createYylval(0, NULL); return REAL_TOK;}
integer						{createYylval(1, NULL); return INT_TOK;}
write						{createYylval(2, NULL); return WRITE_TOK;}
read						{createYylval(3, NULL); return READ_TOK;}
while						{createYylval(4, NULL); return WHILE_TOK;}
do							{createYylval(5, NULL); return DO_TOK;}
if							{createYylval(6, NULL); return IF_TOK;}
then						{createYylval(7, NULL); return THEN_TOK;}
else						{createYylval(8, NULL); return ELSE_TOK;}
main						{createYylval(9, NULL); return MAIN_TOK;}
var							{createYylval(10, NULL); return VAR_TOK;}
call						{createYylval(11, NULL); return CALL_TOK;}
return						{createYylval(12, NULL); return RETURN_TOK;}
defstruct					{createYylval(13, NULL); return DEFSTRUCT_TOK;}
extern						{createYylval(14, NULL); return EXTERN_TOK;}
==|<>|<|<=|>|>= 			{createYylval(15, yytext); return REL_OP;}
[+-]					    {createYylval(16, yytext); return ADD_OP;}
[*/]					    {createYylval(17, yytext); return MUL_OP;}
\=						  	{createYylval(18, yytext); return ASSIGN_OP;}
&&						    {createYylval(19, yytext); return AND_OP;}
\|\|					    {createYylval(20, yytext); return OR_OP;}
!						    {createYylval(21, yytext); return NOT_OP;}
({int})						{createYylval(22, yytext); yylval.type = INT; return NUM;}
({real})					{createYylval(22, yytext); yylval.type = REAL; return NUM;}
({id})						{createYylval(23, yytext); return ID;}
({str})						{char* res = strdup(yytext); res++; *(res+strlen(res)-1) = '\0'; createYylval(24, res); return STRING;}


.           	printf( "\nLexical error: '%s' in line number %d\n", yytext, yylineno ); exit(1);

%%

void createYylval(int num, char* str){
	yylval.content = rules[num];
	//yylval.type = NULL;
}




	

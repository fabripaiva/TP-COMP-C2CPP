%option yylineno

/*****************************************/
/*      DECLARACIONES DE SENTENCIAS      */
/*****************************************/

%{
	#include <string.h>
    #include <stdlib.h>
    #include<stdio.h>
    //#include"y.tab.h"
    void yyerror(const char *);
    static void comentarioNoterminado(void);
%}


%%
"/*"                        { comentarioNoterminado(); }
"//".*                      { /*NO comentario*/ }
[\n\t ]+                    {/* ignoring newlines, tabs and spaces */}
"/\*"(.|\n)*"\*/"			{strcpy(yylval.var_name, yytext);return MLCOMENTARIO;}
"//"(.)*                    {strcpy(yylval.var_name, yytext);return COMENTARIO;}



"int"                       {yylval.data_type=0; return INT;}
"char"						{yylval.data_type=1; return CHAR;}
"float" 		            {yylval.data_type=2; return FLOAT;}
"double"					{yylval.data_type=3; return DOUBLE;}
"bool"                      {yylval.data_type=4; return BOOLEAN;}
"const"			            {return CONST;}


"int main()"				{return MAIN_FUNC;}


"if"                        {return IF;}
"else"                      {return ELSE;}
"for"						{return FOR;}
"while"                     {return WHILE;}
"break"                     {return BREAK;}
"printf"                    {return PRINTF;}
"void"                      {return VOID;}


"else"[ ]+"if"        		{return ELSEIF;}
"return"					{return RETURN;}

"do"						{return DO;}


":"							{return COLON;}
"?"							{return QM;}
"("							{return LP;}
")"							{return RP;}
"{"							{return LC;}
"}"							{return RC;}
"["							{return LB;}
"]"							{return RB;}
";"							{return SEMICOLON;}
","							{return COMA;}
"="                         {return ASSIGNMENT;}
"&&"						{return LAND;}
"||"						{return LOR;}
">="						{return GEQ;}
"<="						{return LEQ;}
">"							{return GT;}
"<"							{return LT;}
"!="						{return NEQ;}
"=="						{return DEQ;}
"+"							{return PLUS;}
"-"							{return MINUS;}
"*"							{return MUL;}
"/"							{return DIV;}
"%"							{return MOD;}
"!"                         {return NOT;}
"#define"                   {return DEFINE;}

"static"                    {return STATIC;}

("true"|"false")			{strcpy(yylval.var_name, yytext);return BOOL_VAL;}

[$_a-zA-Z]+[$_a-zA-Z0-9]*	{strcpy(yylval.var_name, yytext);return VAR;}

[0-9]+("."[0-9]+)?			{strcpy(yylval.var_name, yytext);return NUMBER;}

\"[^"]*\"                   {strcpy(yylval.var_name, yytext);return QUOTED_STRING;}

'[^']*'                     {strcpy(yylval.var_name, yytext);return QUOTED_CHAR;}


%%

int yywrap(void) {
	return 1;
}

static void comentarioNoterminado(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("comentario No terminado!");
}

//Funcion de avisar en que linea esta que el error por si falla la primera funcion "yywrap"
void yyerror(const char *s)
{
	printf("[ERROR en la linea: %d] %s %s\n",  yylineno,s,yytext);
}
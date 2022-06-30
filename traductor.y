%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<time.h>
	#define MAX_NAME_LEN 32
	#define MAX_VARIABLES 32
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;
	int current_data_type;
	int bracket_counter=0;
	int expn_type = -1;
	int temp;
	int idx = 0;
	int table_idx = 0;
	int tab_counter = 0;
	int func_bandera = 0;
	char for_var[MAX_NAME_LEN];
	struct simbolRec
{
	char *name;			
	char *type;			
	int function;
	struct simbolRec *next;		
};

typedef struct simbolRec simbolRec;

extern simbolRec *simbolTable;
	// Declaro e inicializo explícitamente
	struct symbol_table{char var_name[MAX_NAME_LEN]; int type;} sym[MAX_VARIABLES];
	extern int lookup_in_table(char var[MAX_NAME_LEN]);
	extern void insert_to_table(char var[MAX_NAME_LEN], int type);
	extern void print_tabs(); //Funcion interna para imprimir las tablas 
	char var_list[MAX_VARIABLES][MAX_NAME_LEN];	// MAX_VARIABLES variable names with each variable being atmost MAX_NAME_LEN characters long
	int string_or_var[MAX_VARIABLES];
	//extern int *yytext;

	// functions
	void print_init(){
		time_t t = time(NULL);
  		struct tm now = *localtime(&t); // Inicializa la hora
		char *autores = "Fabrizio Paiva - Marcelo Baez";

		printf("/*\n*\t===================================================================\n");
		printf("*\tTraductor de lenguaje \"C\" a \"C++\"\n");
		printf("*\tAutores: %s\n", autores);
		printf("*\tTranducido: %d-%02d-%02d %02d:%02d:%02d \n", now.tm_year + 1900, now.tm_mon + 1, now.tm_mday, now.tm_hour, now.tm_min, now.tm_sec);
		printf("*\t===================================================================\n*/\n\n");
		printf("#include <iostream>\n#include <string>\n\nusing namespace std;\n\n");
	}

%}

%union{
int data_type;
char var_name[MAX_NAME_LEN];
}

%token VAR
%token LAND LOR GEQ LEQ NOT GT LT NEQ DEQ PLUS MINUS MUL DIV MOD ASSIGNMENT EX
%token MAIN_FUNC IF ELSE ELSEIF WHILE FOR CLASS STATIC PUBLIC PRIVATE VOID PRINTF NEW DO BREAK RETURN
%token BOOL_VAL NUMBER QUOTED_STRING QUOTED_CHAR
%token LP RP LC RC LB RB COMA SEMICOLON COLON QM SQ DQ
%token COMENTARIO MLCOMENTARIO
%token DEFINE
%token STATIC_INT STATIC_VOID STATIC_CHAR STATIC_FLOAT STATIC_DOUBLE 


%left LAND LOR GEQ LEQ NOT GT LT NEQ DEQ PLUS MINUS MUL DIV MOD

%token<data_type>INT
%token<data_type>FLOAT
%token<data_type>DOUBLE
%token<data_type>CHAR
%token<data_type>BOOLEAN
%token CONST



%type<data_type>TYPE
%start program

%%

program		: { print_init(); } STATEMENTS { exit(0); } ST
			;

STATEMENTS	: { print_tabs(); } FUNC_INI STATEMENTS { }
			| { print_tabs(); } VAR_DECLARATION STATEMENTS { }
			| { print_tabs(); } COMMENT STATEMENTS { }
			| { print_tabs(); } IF_STATEMENT STATEMENTS { }
			| { print_tabs(); } FOR_LOOP STATEMENTS { }
			| { print_tabs(); } WHILE_LOOP STATEMENTS { }
			| { print_tabs(); } DO_WHILE_LOOP STATEMENTS { }
			| { print_tabs(); } STDIO STATEMENTS { }
			| { print_tabs(); } BREAK_ST STATEMENTS { }
			| { print_tabs(); } RETURN_ST STATEMENTS { }
			| { print_tabs(); } CONSTAN_ALT STATEMENTS { }
			| { print_tabs(); } VAR_ASSIGNATION STATEMENTS { }
			| /* */	{ }
			;

ST 	: { print_tabs(); } METHODS STATEMENTS { }
	;


RETURN_ST 	: RETURN { printf("\n\treturn "); } EXPRESION SEMICOLON { printf(";\n"); }
			| error SEMICOLON { printf("=> Falta un \";\" (punto y coma).\n\n"); }
			;

BREAK_ST	: BREAK SEMICOLON  { printf("break;\n"); }
			;

STDIO	: PRINTF { printf("std::cout"); } LP { printf(" << "); } EXPRESION RP SEMICOLON { printf(";\n"); }
		| error SEMICOLON { printf("=> Falta un \";\" (punto y coma).\n\n"); }
		;

VAR_DECLARATION	: TYPE VAR { printf("%s", yylval.var_name); } HAS_ASSIGNMENT SEMICOLON { printf(";\n"); }
				| TYPE VAR { printf("%s", yylval.var_name); } COLON_ARRAY HAS_ASSIGNMENT SEMICOLON { printf(";\n"); } // shift/reduce
				| CONST { printf("const "); } TYPE VAR { printf("%s", yylval.var_name); } HAS_ASSIGNMENT SEMICOLON { printf(";\n"); }
				| TYPE VAR { printf("%s", yylval.var_name); } LP { printf("( "); } PARAMS RP { printf(")"); } LC { tab_counter++; printf("{\n"); } STATEMENTS RC { printf("}\n"); tab_counter--; }
				| error SEMICOLON { printf("=> Falta un \";\" (punto y coma).\n\n"); }
				;

VAR_ASSIGNATION	: VAR { printf("%s", yylval.var_name); } ASSIGNMENT { printf(" = "); } EXPRESION SEMICOLON { printf(";\n"); }
				;

COLON_ARRAY	: LB NUMARRAY RB  COLON_ARRAY
			|  LB RB  { bracket_counter++; } COLON_ARRAY
			| /* */
			;

IF_STATEMENT	: IF LP { printf("if ("); } EXPRESION RP LC { tab_counter++; printf(") {\n"); } STATEMENTS RC { tab_counter--; print_tabs(); printf("}"); } ELSE_VARIATIONS
				;

ELSE_VARIATIONS	: ELSE LC { tab_counter++; printf(" else {\n"); } STATEMENTS RC { tab_counter--; print_tabs(); printf("}"); }
				| ELSEIF LP { printf(" else if ("); } EXPRESION RP { printf(")"); } LC { tab_counter++; printf(") {\n"); } STATEMENTS RC { tab_counter--;print_tabs(); printf("}"); } ELSE_VARIATIONS
				| /* */ { printf("\n"); }
				;
				
WHILE_LOOP      : WHILE LP {printf("while ("); } DECL_EXPR RP LC { tab_counter++; printf("){\n"); } STATEMENTS RC { tab_counter--; print_tabs(); printf("}\n"); }
                ;


FOR_LOOP	: FOR LP { printf("for ("); } FOR_PARAMS RP LC { tab_counter++; printf(") {\n"); } STATEMENTS RC { tab_counter--; print_tabs(); printf("}\n"); }
			;

FOR_PARAMS	: DECL_EXPR SEMICOLON { printf("; "); } DECL_EXPR SEMICOLON { printf("; "); } EXPRESION
			| TYPE VAR COLON { printf("%s", yylval.var_name); } { printf(" : "); } VAR { printf("%s", yylval.var_name); }// shift/reduce
			;

DECL_EXPR	: EXPRESION
			| TYPE VAR { printf("%s", yylval.var_name); } HAS_ASSIGNMENT
			| VAR { printf("%s", yylval.var_name); } HAS_ASSIGNMENT//ASSIGNMENT { printf(" = "); } EXPRESION
			| /* */  { }
        	;

DO_WHILE_LOOP   : DO LC { printf("do{\n"); tab_counter++;} STATEMENTS RC WHILE LP {tab_counter--; print_tabs(); printf("}while("); } DECL_EXPR RP SEMICOLON { printf(");"); } 
                ;


NUMARRAY	: NUMBER   { printf("[%s]", yylval.var_name); }
			| VAR { printf("[%s]", yylval.var_name); }
			;

HAS_ASSIGNMENT	: ASSIGNMENT { printf(" = "); } EXPRESION
				| ASSIGNMENT EXPRESION_ARRAY
				| /* No assignment */ {}
				;
FUNC_INI	: MAIN_FUNC { printf("\nint main()"); } LC { tab_counter++; printf("{\n"); } STATEMENTS RC { printf("\n}\n"); tab_counter--; }
			;

METHODS	: TYPE VAR
		;


PARAMS	: HAS_PARAMS PARAMS
		| COMA { printf(","); }  HAS_PARAMS
		| /* No parameters */		{ printf(" "); }
		;


HAS_PARAMS	: TYPE VAR { printf("%s", yylval.var_name); }
			| TYPE COLON_ARRAY VAR { for(;bracket_counter>0;bracket_counter--)printf("*");printf("%s", yylval.var_name); }
			| /* */
			;

EXPRESION	: EXPRESION LAND { printf("&&"); } EXPRESION
			| EXPRESION LOR { printf("||"); } EXPRESION
			| EXPRESION LEQ { printf("<="); } EXPRESION
			| EXPRESION GT { printf(">"); } EXPRESION
			| EXPRESION LT { printf("<"); } EXPRESION
			| EXPRESION NEQ { printf("!="); } EXPRESION
			| EXPRESION DEQ { printf("=="); } EXPRESION
			| NOT { printf("!"); } EXPRESION
			| EXPRESION PLUS { printf("+"); } EXPRESION
			| EXPRESION MINUS { printf("-"); } EXPRESION
			| EXPRESION MUL { printf("*"); } EXPRESION
			| EXPRESION DIV { printf("/"); } EXPRESION
			| EXPRESION MOD { printf("%%"); } EXPRESION
			| LP { printf("("); } EXPRESION RP { printf(")"); }
			| EXPRESION PLUS PLUS { printf("++"); }
			| EXPRESION MINUS MINUS { printf("--"); }
			| TERMINAL
			| VAR { printf("%s", yylval.var_name); }
			;

EXPRESION_ARRAY	: TYPE_NO_PRINT COLON_ARRAY {bracket_counter=0;}
				| { for(;bracket_counter>0;bracket_counter--)printf("[]"); } LC { printf(" = {"); } EXPRESION_ARRAY_INITIALIZE RC { printf("}"); }
				;

EXPRESION_ARRAY_INITIALIZE	: TERMINAL COMA { printf(","); } EXPRESION_ARRAY_INITIALIZE
							| COMA { printf(","); } LC { printf("{"); } EXPRESION_ARRAY_INITIALIZE RC { printf("}"); } EXPRESION_ARRAY_INITIALIZE
							|  LC { printf("{"); } EXPRESION_ARRAY_INITIALIZE RC { printf("}"); } EXPRESION_ARRAY_INITIALIZE
							| TERMINAL
							| /* */
							;

TYPE_NO_PRINT	: INT
				| CHAR
				| FLOAT
				| DOUBLE
				| BOOLEAN
				;

TYPE	: INT { $$=$1; current_data_type=$1;	printf("int "); }
		| CHAR  { $$=$1; current_data_type=$1; printf("char "); }
		| FLOAT { $$=$1; current_data_type=$1; printf("float "); }
		| DOUBLE { $$=$1; current_data_type=$1; printf("double "); }
		| BOOLEAN { $$=$1; current_data_type=$1; printf("bool "); }
		| VOID { printf("void "); }
		;

TERMINAL	: NUMBER { printf("%s", yylval.var_name); }
			| QUOTED_CHAR { printf("%s", yylval.var_name); }
			| QUOTED_STRING { printf("%s", yylval.var_name); }
			| BOOL_VAL { printf("%s", yylval.var_name); }
			;

COMMENT	: COMENTARIO		{ printf("%s\n", yylval.var_name); }
		| MLCOMENTARIO		{ printf("%s", yylval.var_name); }
		;

CONSTAN_ALT	: DEFINE { printf("#define ");} VAR { printf("%s ", yylval.var_name); } NUMBER { printf("%s", yylval.var_name); } SEMICOLON { printf(";\n"); }
			| COMMENT DEFINE { printf("#define ");} VAR { printf("%s ", yylval.var_name); } NUMBER { printf("%s", yylval.var_name); } SEMICOLON { printf(";\n"); }
			;

%%

#include "lex.yy.c"
int lookup_in_table(char var[MAX_NAME_LEN])
{
	for(int i=0; i<table_idx; i++)
	{
		if(strcmp(sym[i].var_name, var)==0)
			return sym[i].type;
	}
	return -1;
}

void insert_to_table(char var[MAX_NAME_LEN], int type)
{
	if(lookup_in_table(var)==-1)
	{
		strcpy(sym[table_idx].var_name,var);
		sym[table_idx].type = type;
		table_idx++;
	}
	else {
		printf("Multiple declaration of variable\n");
		yyerror("");
		exit(0);
	}
}

void print_tabs() {
	for(int i = 0; i < tab_counter; i++){
		printf("\t");
	}
	return;
}

int main() {
	yyparse();
	return 0;
}

int yyerror(const char *msg) {
	extern int yylineno;
	printf("Error de parseo\nLinea numero: %d => %s\n", yylineno, msg);
	success = 0;
	return 0;
}

/**void type_comprobacion(char* op1, char* op2, char operation)
{
	simbolRec* simbolRec_operando1 = getSimbol(op1);
	simbolRec* simbolRec_operando2 = getSimbol(op2);
	if(simbolRec_operando1 == NULL || simbolRec_operando2 == NULL)	
		return;

	char* type_op1 = simbolRec_operando1->type;
	char* type_op2 = simbolRec_operando2->type;
	int ban = 0;

	if(operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == '%')
	{
		
		if(strcmp(type_op1,"float")!=0 && strcmp(type_op1,"double")!=0 && strcmp(type_op1,"int")!=0)
		{
			ban=1;
		}
				
		if(strcmp(type_op2,"float")!=0 && strcmp(type_op2,"double")!=0 && strcmp(type_op2,"int")!=0)
		{
			ban=1;
		}

		if(ban==1){
			printf("[ERROR línea %d]Operando %s con %c no permitido por (%s)\n", yylineno,op1, operation, type_op1 );
		}
	}
}*/

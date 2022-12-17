%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<string.h>
	#include   "1807006.tab.h"
	void yyerror(char *s);
	int lineno = 0;
	int varindex(char *var);
	extern int yylex();
	extern int yyparse();
%}


VAR      [a-zA-Z_][a-z0-9A-Z_]*
EXPO      [Ee][-+]?[0-9]+


%%

"$$".*   					{	printf("Single-line comment");
							/* Single-line comment */
						}
"$*"                             {
						printf("Multiline comment starts\n");
						
                                    char g;
                                    label:
                                   while(g = input() != '*');
                                   if(g = input() == '$') {
                                   printf("Multiline Comment Ends.\n");
						
                                  } else {
                                 goto label;
                                  }
                                  }
[0-9]+"."[0-9]*{EXPO}?|"."?[0-9]+{EXPO}?		{
									yylval.floating  = atof(yytext);
									printf(" %lf\n",yylval.floating);
									return NUMBER;}

\"[^"\n]*["\n]							 {
    										yylval.stringName = strdup(yytext+1);
   										 if (yylval.stringName[yyleng-2] != '"')
       									 {yyerror("improperly terminated string");}
									    else {
 								       yylval.stringName[yyleng-2] = 0;
 								       return STRING;
 										   }
									}
"Integer"  	return INT;
"Char"	 return CHAR;
"Float" 	 return FLOAT;
"Double"	return DOUBLE;
"Bool"       return BOOL;
"ara"		return ARRAY_TYPE;
"EmptyType"  return VOID;
"."           return EOL;
"Start_From_Here"				{	printf("\nMain function starts from here\n");;
							return START;}
"func"      return FUNC;

"("         return FOB; 
")"         return FCB;
"["        { return '['; }
"]"        { return ']'; }
"{"        { return '{'; }
"}"        { return '}'; } 

"!"        return FACTORIAL;

									
":="    return ASSIGN;
">="    return GE;
">"     return '>';
"<"     return '<';
"="     return '=';
"<="    return LE;
"!="    return NE;
","	return ',';
"add"      return '+';
"minus"      return '-';
"mul"      return '*'; 
"divide"      return '/';
":"		return ':';
 
"mod"      return '%'; 
"while_loop" return WHILE;
"for_loop"   return FOR;
"inc"       return INC;
"dec"		return DEC;
"iff"    return IF;
"elif"   return ELSEIF;
"els"  return ELSE;
"then"  return THEN;
"AND"   return AND;
"OR"    return OR;
"NOT"   return NOT;
"XOR"   return XOR;
"power"     return POWER;
"echo" return PRINT;
"scan"  {	printf("\nScanning value\n");
		return SCAN;}
"exit"  {	printf("\nExiting\n");
		return EXIT;
		}
"brk"   return BREAK;

"PI"    return PI;

"log10"       return LOG10;
"ln"         return LN;
"exp"       return EXP;
"root"      return SQRT;
"flr"     return FLOOR;
"ceil"      return CEIL;
"abs"       return ABS;
"sine"       return SIN;
"asine"      return ASIN;
"cosine"       return COS;
"acosine"      return ACOS;
"tan"       return TAN;
"atan"      return ATAN;
"handle"	return SWITCH;
"type"	return CASE;
"otherwise"	return DEFAULT;
   
[a-zA-Z_][a-z0-9A-Z_]* {
    yylval.varName = strdup(yytext);
    printf("\nthe variable is %s\n",yylval.varName); //The strdup() and strndup() functions are used to duplicate a string. 
    return VARIABLE;
}

[ \t\n]*
 
{VAR}"["[0-9]*"]"":= "		{
    yylval.varName = strdup(yytext);
    printf("\n %s\n",yylval.varName); //The strdup() and strndup() functions are used to duplicate a string. 
    //return VARIABLE;
}	

"#attach"     { return INCLUDE; } 
{VAR}".h"      { return HEADER;}


%%

int main()
{
	printf("RUN SUCCESSFULLY : \n");
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	/*yyin = fopen("a.txt","r");*/
	yyparse();
	return 0;
} 
int yywrap() {
    return 1;
}

void yyerror(char *s) {
    fprintf(stdout, "line %d: %s\n", lineno, s);
}

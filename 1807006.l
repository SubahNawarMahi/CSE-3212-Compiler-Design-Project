DIGIT    [0-9]
  int    op1,op2,operand=0;
%%
"#attach".* {printf("#include library\n");
			fprintf(yyout,"#include \n");}

"echo("{DIGIT}+" add "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of addition\n");
					fprintf(yyout,"Print result of addition\n");
					 }
"echo("{DIGIT}+" minus "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of subtraction\n");
					fprintf(yyout,"Print result of subtraction\n");
					 }
"echo("{DIGIT}+" divide "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of division\n");
					fprintf(yyout,"Print result of division\n");
					 }
"echo("{DIGIT}+" mul "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of multiplication\n");
					fprintf(yyout,"Print result of multiplication\n");
					 }
"echo("{DIGIT}+" mod "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of modulus\n");
					fprintf(yyout,"Print result of modulus\n");
					 }
"echo("{DIGIT}+" ** "{DIGIT}+")""."    {  op1 = atoi(yytext);
			         operand = 1;
                           //printf("%d ",op1);
                             printf("Print result of exponent\n");
					fprintf(yyout,"Print result of exponent\n");
					 }
[a-zA-Z]+" := "[0-9]+"."      {printf("Value assign operator\n");
					fprintf(yyout,"Value assign operator\n");
                            }
"echo(".*    {fprintf(yyout,"This is a print command\n");
              printf("This is a print command\n");}
"$*"(.|\n)*"*$"       {printf("This is a multiple  line comment\n");
               fprintf(yyout,"This is a multiple line comment\n");}
"$".*       {printf("This is a single line comment\n");
               fprintf(yyout,"This is a single line comment\n");}
":="    {printf("This is assign operator\n");
               fprintf(yyout,"This is assign operator\n");}
">="    {printf("This is greater than equal\n");
               fprintf(yyout,"This is greater than equal\n");}
"<="    {fprintf(yyout,"This is less than equal\n");}
"!="    {printf("This is not equal\n");
               fprintf(yyout,"This is not equal\n");}
"while_loop" {printf("This is while loop\n");
               fprintf(yyout,"This is while loop\n");}
"for_loop"   {printf("This is for loop\n");
               fprintf(yyout,"This is for loop\n");}
"iff"" (".*") then{"(.|\n)*"}"    {printf("This is iff condition\n");
               fprintf(yyout,"This is iff condition\n");}
"els""{"(.|\n)*"}"  {printf("This is else condition\n");
               fprintf(yyout,"This is else condition\n");}
"elif"  {printf("This is else if condition\n");
               fprintf(yyout,"This is else if condition\n");}
"then"  {printf("This is then statement for if and elif condition\n");
               fprintf(yyout,"This is then statement for if and elif condition\n");}
"AND"   {printf("Logical and\n");
			fprintf(yyout,"logical and\n");}
"OR"    {printf("Logical or\n");
			fprintf(yyout,"logical or\n");}
"NOT"   {printf("Logical not\n");
			fprintf(yyout,"logical not\n");} 


"log"       {printf("Logarithm function\n");
			fprintf(yyout,"Logarithm function\n");}
"exp"       {printf("Exp function\n");
			fprintf(yyout,"Exp function\n");}
"power"      {printf("Power function\n");
			fprintf(yyout,"Power Function\n");}
"root"      {printf("Square root\n");
			fprintf(yyout,"Square root\n");}
"flr"     {printf("Floor function\n");
			fprintf(yyout,"Floor function\n");}
"ceil"      {printf("Ceil function\n");
			fprintf(yyout,"Ceil function\n");}
"abs"       {printf("Absolute function\n");
			fprintf(yyout,"Absolute function\n");}
"sine"       {printf("Sine function\n");
			fprintf(yyout,"Sine function\n");}

"cos"       {printf("Cosine function\n");
			fprintf(yyout,"Cosine function\n");}

"tan"       {printf("Tangent function\n");
			fprintf(yyout,"Tangent function\n");}


%%

int yywrap()
{
return 1;
}

int main()
{
extern FILE *yyin, *yyout;
yyin = fopen ("input.txt","r");
yyout = fopen("output.txt","w");
yylex();
return 0;

}

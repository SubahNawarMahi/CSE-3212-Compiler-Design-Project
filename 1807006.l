DIGIT    [0-9]
Expr     [A-Za-z_!@#$%&*]+.*
Variable [A-Za-z_]+[A-Za-z_0-9]*

    
%{

#include<string.h>

 int    op1,op2,operand=0;
%}

%%
"#attach""[".*"]"                              {printf("include library functions\n");
			                              fprintf(yyout,"include library functions\n");}
"#Suppose" 		     	 				{printf("#define\n");
									fprintf(yyout,"define\n");}

"echo("{DIGIT}+" add "{DIGIT}+")""."            {  op1 = atoi(yytext);
			                              operand = 1;
                                               //printf("%d ",op1);
                                                printf("Print result of addition\n");
					                 fprintf(yyout,"Print result of addition\n");
					                  }
"echo("{DIGIT}+" minus "{DIGIT}+")""."          {  op1 = atoi(yytext);
			         				operand = 1;
                          				 //printf("%d ",op1);
                            				 printf("Print result of subtraction\n");
								fprintf(yyout,"Print result of subtraction\n");
								 }
"echo("{DIGIT}+" divide "{DIGIT}+")""."   	 {  op1 = atoi(yytext);
			         				operand = 1;
                           					//printf("%d ",op1);
                           			  printf("Print result of division\n");
							fprintf(yyout,"Print result of division\n");
							 }
"echo("{DIGIT}+" mul "{DIGIT}+")""."   		 {  op1 = atoi(yytext);
			         				operand = 1;
                           				//printf("%d ",op1);
                            				 printf("Print result of multiplication\n");
								fprintf(yyout,"Print result of multiplication\n");
								 }
"echo("{DIGIT}+" mod "{DIGIT}+")""."   		 {  op1 = atoi(yytext);
			         				operand = 1;
                           				//printf("%d ",op1);
                            				 printf("Print result of modulus\n");
								fprintf(yyout,"Print result of modulus\n");
								 }
"echo("{DIGIT}+" ** "{DIGIT}+")""."   		 {  op1 = atoi(yytext);
			         				operand = 1;
                           				//printf("%d ",op1);
                            				 printf("Print result of exponent\n");
								fprintf(yyout,"Print result of exponent\n");
								 }
"echo("{DIGIT}+" AND "{DIGIT}+")""."   		 {  op1 = atoi(yytext);
			         				operand = 1;
                           				//printf("%d ",op1);
                            				 printf("Print result of LOGICAL AND\n");
								fprintf(yyout,"Print result of LOGICAL AND\n");
								 }
"echo("{DIGIT}+" OR "{DIGIT}+")""."   		 {  op1 = atoi(yytext);
			         				operand = 1;
                           				//printf("%d ",op1);
                            				 printf("Print result of LOGICAL OR\n");
								fprintf(yyout,"Print result of LOGICAL OR\n");
								 }


"scan"                                          {printf("take input from the user");}


"Integer"                          			{printf("\nInteger type\n");
								fprintf(yyout,"Integer type\n");
                           				 }
"Bool"							{printf("\nBool type\n");
								fprintf(yyout,"Bool type\n");
                           				 }
"Float"                          			{printf("\nFloating type\n");
								fprintf(yyout,"\nFloating type\n");
                           				 }
"Double"							{printf("Double type\n");
								fprintf(yyout,"\nDouble type\n");
                           				 }
"Char"							{printf("\nCharcter type\n");
								fprintf(yyout,"Character type\n");
                           				 }


		
{Variable}[,|.]+       					{//char name[] = yytext;
									//if(strlen(name) == ',' || strlen(name) == '.')
  									   //name[strlen(name)-1] = '\0'; // removing the last character i
 									 //printf("%s\n",name);
								printf("variable %s ",yytext);
								fprintf(yyout,"variable %s \n",yytext);
                           				 }
{Variable}"["{DIGIT}+"]"				{
								printf("array variable %s \n",yytext);
								fprintf(yyout,"array variable %s \n",yytext);
                           				 }


{Variable}":="[0-9]+"."      			    {printf("\nValue assignment in variable\n");
								fprintf(yyout,"\nValue assignment in variable\n");
                           				 }
"echo(".*   						 {fprintf(yyout,"This is a print command\n");
            						  printf("This is a print command\n");}
"$*"(.|\n)*"*$"   				    {printf("This is a multiple  line comment\n");
              						 fprintf(yyout,"This is a multiple line comment\n");}
"$$".*      							 {printf("This is a single line comment\n");
             						  fprintf(yyout,"This is a single line comment\n");}


":="    							{printf("This is assign operator\n");
           						    fprintf(yyout,"This is assign operator\n");}
">="   						 {printf("This is greater than equal\n");
            					   fprintf(yyout,"This is greater than equal\n");}
"<="    						{fprintf(yyout,"This is less than equal\n");}

"=!"   						 {printf("This is not equal\n");
         					      fprintf(yyout,"This is not equal\n");}
"="   						 {printf("This is equal\n");
         					      fprintf(yyout,"This is equal\n");}

"while_loop""(".*")"					 {printf("This is while loop\n");
               					fprintf(yyout,"This is while loop\n");}

"for_loop"   {printf("This is for loop\n");

							                                           fprintf(yyout,"This is for loop\n");}
"brk"				{printf("break statement\n");
              				 fprintf(yyout,"break statement\n");}
                                                     
"iff(".*")"		   	{printf("This is iff condition\n");
						//printf(yytext);
               					fprintf(yyout,"This is iff condition\n");}

"els"	  			{printf("This is else condition\n");
              				 fprintf(yyout,"This is else condition\n");}
"elif(".*")" 	{printf("This is else if condition\n");
              				 fprintf(yyout,"This is else if condition\n");}
"then" 				 {printf("This is then statement for if and elif condition\n");
             			  fprintf(yyout,"This is then statement for if and elif condition\n");}

"func"     			{printf("Function definition\n");
              				 fprintf(yyout,"This is function definition\n");}
"back"                 {printf("Return statement\n");
              				 fprintf(yyout,"Return statement\n");
						}
"add"   				{printf("addition operation\n");
					fprintf(yyout,"addition operation\n");}
"minus"   				{printf("subtraction operation\n");
					fprintf(yyout,"subtraction operation\n");}
"mul"   				{printf("multiplication operation\n");
					fprintf(yyout,"multiplication operation\n");}
"divide"   				{printf("division operation\n");
					fprintf(yyout,"division operation\n");}
"**"   				{printf("exponent operation\n");
					fprintf(yyout,"exponent operation\n");}
"AND"   				{printf("Logical and\n");
					fprintf(yyout,"logical and\n");}
"OR"   			 {printf("Logical or\n");
				fprintf(yyout,"logical or\n");}
"NOT"  			 {printf("Logical not\n");
				fprintf(yyout,"logical not\n");} 
"XOR"  			 {printf("XOR OPERATION\n");
				fprintf(yyout,"XOR OPERATION\n");} 
"."                     {printf("full stop for end statement\n");
				fprintf(yyout,"full stop for end statement\n");}

"log""("{DIGIT}+.?{DIGIT}")"       		{printf("Logarithm function\n");
				fprintf(yyout,"Logarithm function\n");}
"exp""("{DIGIT}+.?{DIGIT}")"      			 {printf("Exp function\n");
				fprintf(yyout,"Exp function\n");}
"power""("{DIGIT}+","{DIGIT}")"     		 {printf("Power function\n");
					fprintf(yyout,"Power Function\n");}
"root""("{DIGIT}+.?{DIGIT}")"      		{printf("Square root\n");
				fprintf(yyout,"Square root\n");}
"flr""("{DIGIT}+.?{DIGIT}")"     			{printf("Floor function\n");
					fprintf(yyout,"Floor function\n");}
"ceil""("{DIGIT}+.?{DIGIT}")"     			 {printf("Ceil function\n");
				fprintf(yyout,"Ceil function\n");}
"abs""("{DIGIT}+.?{DIGIT}")"      			 {printf("Absolute function\n");
				      fprintf(yyout,"Absolute function\n");}
"sine""("{DIGIT}+.?{DIGIT}")"      		 {printf("Sine function\n");
				fprintf(yyout,"Sine function\n");}

"cosine""("{DIGIT}+.?{DIGIT}")"       	{printf("Cosine function\n");
				fprintf(yyout,"Cosine function\n");}

"tan""("{DIGIT}+.?{DIGIT}")"      		 {printf("Tangent function\n");
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
//yyin = fopen ("var.txt","r");
//yyout = fopen("var2.txt","w");

yylex();
return 0;

}
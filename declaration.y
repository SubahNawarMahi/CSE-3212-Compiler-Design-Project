%{
    #include <stdio.h>
    #include <stdlib.h>
    #include<math.h>
    #include <string.h>	

	void yyerror(char *);

	char variable[1000][1000];
 int store[1000];
char store_string[1000][1000];
float store_float[1000];
int type_of_id[1000];
int last_point=1,f=1;
//condition for if else
int match_condition;
//switch case handle
double switchValue;
//fucntion parameter
char parameterar[100][100];
int cnt_func = 1;

//parameter function here
int func_here(char *s)
{
	int i;
	for(i=1;i<cnt_func;i++)
	{
		if(strcmp(parameterar[i],s)==0)
		return 1;
	}
	return 0;
}
//assign function
int assign_func(char *s)
{
  strcpy(parameterar[cnt_func],s);
	cnt_func++;
return 1;
}
//is the variable declared?
int isdeclared(char *s)
{
//printf("\nisdeclared function called\n");
int i;
for(i=1;i<last_point;i++)
{
	if(strcmp(variable[i],s)==0)
	return 1;
}
return 0;
}
//assign value
int assign(char *s)
{
	//printf("\nassign function called\n");
	if(isdeclared(s)==1)
 	return 0;
	strcpy(variable[last_point],s);
	store[last_point]=0;
	last_point++;
	return 1;
}

 int setval(char *s,int val)
    {
        if(isdeclared(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store[ok]=val;
        return 1;
    }

    int getval(char *s)
    {

        int pos=-1;
        int i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }

%}

%union  {
	
	double floating;
	char   *varName;
	char   *stringName;
	int param;
	int e;
	int ei;

};


%token <floating> NUMBER
%token <varName> VARIABLE
%token <stringName> STRING
%token <param> parameter
%type <floating> expression
%type <ei> id
%type <ei> EOL
%type <ei> statement
%token INT FLOAT DOUBLE CHAR BOOL INC DEC EOL FOB FCB FACTORIAL POWER VOID EXIT PI WHILE FOR IF ELSEIF ELSE THEN PRINT SCAN SWITCH CASE DEFAULT ASSIGN LOG10 LN EXP SQRT FLOOR CEIL ABS SIN ASIN COS ACOS TAN ATAN BREAK INCLUDE HEADER FUNC 

%nonassoc IFX
%nonassoc ELSEIF
%nonassoc ELSE

%left GE LE '=' NE '>' '<'
%left '+' '-'
%left '*' '/' '%'
%left AND OR XOR
%left NOT

%%

program:
	include '{' lines '}'	{printf("\n Program executed successfully\n");}
	|
	;
include:
	INCLUDE '[' HEADER ']' {printf("\nheader found\n");}
	|
	;
lines :
	| NUMBER
	| lines statement
	| declaration
	; 
declaration :
	type id EOL	{printf("\nValid declaration\n");}

	;
type	:
	INT			{printf("\nInteger Type declaration\n");}
	| FLOAT		{printf("\nFloat Type declaration\n");}
	| DOUBLE		{printf("\nDouble Type declaration\n");}
	| CHAR		{printf("\nChar Type declaration\n");}
	| BOOL		{printf("\nBool Type declaration\n");}
	| VOID		{printf("\nVoid Type declaration\n");}
	;
id	:
	id ',' VARIABLE	{
					if(isdeclared($3)==1)
						printf("\nDouble declaration!");
					else
						assign($3);

				}
	| VARIABLE	{
				if(isdeclared($1)==1)
						printf("\nDouble declaration!");
					else
						assign($1);
			}
	| id ASSIGN expression	{	printf("\ninit called\n");
						/*	if(isdeclared($1)==1)
						printf("\nDouble declaration!");
					else
						assign($1);*/
								 if(setval($1,$3)==0)
								{
								 $$=0;
								printf("\nNot declared\n");
									}
								else
								{
								$$=$3;
								}
							}	
	;



statement	:
		EOL
		| expression EOL	{$$=$1;}
		| PRINT FOB VARIABLE FCB EOL	{
								if(isdeclared($3)==0)
				{
					printf("Can't print, Value is not declared.\n");
				}
			else 
			{
				printf("\nValue of the variable %s:  %d\t\n",$3, store[getval($3)]);
			}
							}
		|PRINT FOB expression FCB EOL {	int c=$3;
								$$=c;
								printf("\n%d\n",c);
								}
		| VARIABLE ASSIGN expression EOL {
								if(setval($1,$3)==0)
								{
								 $$=0;
								printf("\nNot declared\n");
									}
								else
								{
								$$=$3;
								}
								}
		| FOR FOB VARIABLE ASSIGN NUMBER ':' VARIABLE GE NUMBER ':' VARIABLE DEC NUMBER FCB '{' '}'
		{
 		    int i;
			for(i= $5 ; i>= $9 ; i-=$13)
			{
				printf("for loop Decreasing %d\n",i);
			}printf("\n");		    
		}
	| FOR FOB VARIABLE ASSIGN NUMBER ':' VARIABLE LE NUMBER ':' VARIABLE INC NUMBER FCB '{' '}'
		{
 		    int i;
			for(i= $5 ; i<= $9 ; i+=$13)
			{
				printf("for loop increasing %d\n",i);
			} printf("\n");	 			    
		}
	| WHILE FOB VARIABLE LE NUMBER ':' NUMBER FCB '{' '}'		{
			int a = store[getval($3)], inc = $7;
			while((a+=inc)<= $5)
			{
				printf("While loop is executing value of variable %s : %d\n", $3, a);
			}
		}
	| WHILE FOB NUMBER FCB '{' '}'		{
			int inc = $3;
			if(inc!=0)
			
				printf("Condition always true,Infinity While loop is executing\n");
			else
				printf("Condition always false,While loop won't be executed\n");
			
		}
	| if_statements	{ match_condition=0;}
	| switch_statements	{}

		;
if_statements:
			if_statement els_statement
			;
if_statement: 
			IF FOB expression FCB THEN '{' statement '}' { 	if((int)$3)
													{	
														printf("Value of expression in if block is %.0lf\n",$3);
														printf("\nCondition is true; Inside If block\n");
														match_condition=1;
													}
												else
												     {printf("\nCondition is not true; Inside Else-if block\n");}	
												}
			;
els_statement:  
			| elif_statement
			| elif_statement last_else
			| last_else
		;
last_else: 
		| ELSE '{' statement '}'		{    if(match_condition)
										{printf("\ncondition is already true. so ignore else statement \n");}
									else
									{
										printf("\ncondition for else statement is true\n");
										match_condition=1;
										//printf("Value of expression in else block is %.0lf\n",$3);
									}
								}
		;


elif_statement:
			elif_statement last_elif
			| last_elif
			;
last_elif:
		ELSEIF FOB expression FCB THEN '{' statement '}'	{ 	if(match_condition)
												{printf("\ncondition is already true. so ignore else-if statement \n");}
												else
													{
												printf("\ncondition for else if statement is checking\n");
												
												//printf("Value of expression in else block is %.0lf\n",$3);
													
													if((int)$3)
													{printf("\nCondition is true; Inside Else-If block\n");
														match_condition=1;}
												else
												     {printf("\nCondition is not true; Inside Else block\n");}
												}
											}
		;
switch_statements:	SWITCH FOB switch_variable FCB '{' cases '}'	{	printf("\nSwitch Case matched\n");
														match_condition=0;} 		
				;
switch_variable: VARIABLE		{
						if( isdeclared($1) == 0)
						{
							//$$=0;
							printf("\nNot declared\n");
						}
						else
						{  
							//$$=store[getval($1)];
							switchValue=store[getval($1)];}
					}
		;
cases:	caselist default
		|default
		;
default:	DEFAULT ':' statement BREAK	{
						if(match_condition){
						 printf("Condition already fulfilled.Ignoring default option.\n");}
						else{
						 printf(" No match found.Executing default option.\n");}
					}
		;
caselist:	caselist case
		| case
		;
case: CASE expression ':' statement BREAK	{
									if(match_condition){
                        			printf("Condition already fulfilled.Ignoring current option\n");
                       						 }
                    else{
                        int isTrue = (fabs($2-switchValue)<1e-9);
                            if(isTrue){
                                printf("Case matched.\n");
                                printf("Value of expression in current case %.4lf\n",$2);
                                match_condition = 1;
                            }
                            else{
                                
                                printf("Condition of current case doesn't match.\n");
                              
                            }
								}
					}
			;									

expression	:	NUMBER	{$$ = $1;}
		| VARIABLE		{
						if( isdeclared($1) == 0)
						{
							$$=0;
							printf("\nNot declared\n");
						}
						else
						$$=store[getval($1)];
					}
		| expression '+' expression	{ $$ = $1 + $3; 
								printf("Sum=\n",$$);
							}
		| expression '-' expression	{
								int d=$3,c=$1,r;
								r = c-d;
								  
								printf("Subtraction=%d\n",r);
								$$ = r;
							}
		| expression '*' expression	{ 
								int d=$3,c=$1,r;
								r = c*d;
								printf("Multiplication=%d\n",r);
								$$=r;
							}
		| expression '/' expression	{	
								int d = $3,c=$1;
								if(d != 0)
								{ 
								$$ = c / d; 
								printf("Division=\n");}
								else
								{
									printf("\nDivision by zero\n");
								}
							}
		| expression '%' expression	{ 	int a,b,c;
								a = $1;
								b=$3;
								c = a % b; 
								printf("Modulus=%d\n",c);
								$$=c;
							}
		| expression '<' expression  {
							 $$ = ($1<$3);
							}
		| expression '>' expression  {
							 $$ = ($1>$3);
							}
		| expression LE expression  {
							 $$ = ($1<=$3);
							}
		| expression 'GE' expression  {
							 $$ = ($1>=$3);
							}
		| expression '=' expression  {
							 $$ = ($1==$3);
							}
		| expression 'NE' expression  {
							 $$ = ($1 != $3);
							}
		| expression AND expression  {
							 $$ = ($1 && $3);
							}
		| expression OR expression  {
							 $$ = ($1 || $3);
							}
		| expression XOR expression  {
							 $$ = ((int)$1 ^ (int)$3);
							}
		| NOT expression	{
							$$ = !$2;
						}

		| FOB expression FCB	{ $$ = $2;}
		| ABS expression		{	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("Absolute value is %d\n",abs($2));
				$$=abs($2);
				}
		| POWER FOB NUMBER ',' NUMBER FCB	{     int a,b,c;
									a=$3,b=$5;
									c = pow($3,$5);
									printf("%d^%d value is %d\n",a,b,c);
									$$ = c;
								}
		| FLOOR expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("floor value is %lf\n",floor($2));
				$$=floor($2);}
		| SQRT expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("square root value is %lf\n",sqrt($2));
				$$=sqrt($2);}
		| CEIL expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				printf("value of a %lf\n",yylval.floating);
				
				printf("ceil value is %lf\n",ceil($2));
				$$=ceil($2);}
 
		| SIN expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("sine value of %d is %lf\n",$2,sin($2*3.1416/180));
				$$=sin($2*3.1416/180);}
		| COS expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("sine value of %d is %lf\n",$2,cos($2*3.1416/180));
				$$=cos($2*3.1416/180);}
		| TAN expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("sine value of %d is %lf\n",$2,tan($2*3.1416/180));
				$$=tan($2*3.1416/180);}
		|  LOG10 expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("LOG10 value of %d is %lf\n",$2,(log($2*1.0)/log(10.0)));
				$$=(log($2*1.0)/log(10.0));}
		|  LN expression   {	double a;
				//scanf("%lf",&a);
			
				//printf("value of a %lf\n",a);
				//printf("value of a %lf\n",yylval.floating);
				
				printf("ln value of %d is %lf\n",$2,log($2));
				$$=log($2);}
		|expression FACTORIAL     { int ans = 1;
				for(int i=1;i<=$1; i++)
				{
				 ans*=i;
				}
				printf("Value of Factorial is: %d\n",ans);
				$$=ans;
	 			}

		;
				


		


%%


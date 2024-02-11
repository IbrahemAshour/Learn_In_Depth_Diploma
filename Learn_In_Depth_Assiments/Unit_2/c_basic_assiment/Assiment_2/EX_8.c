/*
EX8:

*/

#include <stdio.h>

void main()
{
	float Num_1 , Num_2 ;
	char op ;
	printf("Enter operator either + or - or * or divide : ");
	scanf("%c",&op);
	printf("Enter two operands : ");
	scanf("%f %f",&Num_1,&Num_2);
	switch(op)
	{
		case '+':printf("%.3f %c %.3f = %.4f",Num_1,op,Num_2,(Num_1 + Num_2));break;
		case '-':printf("%.3f %c %.3f = %.4f",Num_1,op,Num_2,(Num_1 - Num_2));break;
		case '*':printf("%.3f %c %.3f = %.4f",Num_1,op,Num_2,(Num_1 * Num_2));break;
		case '/':printf("%.3f %c %.3f = %.4f",Num_1,op,Num_2,(Num_1 / Num_2));break;	
	}

}
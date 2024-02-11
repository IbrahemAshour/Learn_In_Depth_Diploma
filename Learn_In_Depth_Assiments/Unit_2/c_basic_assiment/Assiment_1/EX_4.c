/*

EX4:

Write C Program to Multiply two Floating Point Numbers
*/

#include <stdio.h>

void main()
{
	float Num_1 , Num_2;
	printf("Enter two number : ");
	scanf("%f %f",&Num_1,&Num_2);
	printf("product : %.6f\n",(Num_1 * Num_2));
}
/*
EX7:
it is an interview trick
*/

#include <stdio.h>

void main()
{
	int a,b;
	printf("enter value of a : ");
	scanf("%d",&a);
	printf("enter value of b : ");
	scanf("%d",&b);
	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;
	printf("After swapping the value of a = %d\n",a);
	printf("After swapping the value of b = %d\n",b);
}
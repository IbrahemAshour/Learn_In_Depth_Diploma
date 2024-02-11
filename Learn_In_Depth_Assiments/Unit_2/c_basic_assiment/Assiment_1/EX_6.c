#include <stdio.h>
/*
EX6:

Write Source Code to Swap Two Numbers
*/
void main()
{
	float a ,b ,temp;
	printf("Enter value of a : ");
	scanf("%f",&a);
	printf("Enter value of b : ");
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp ;
	printf("After swapping the value of a = %.3f\n",a);
	printf("After swapping the value of b = %.3f\n",b);

}
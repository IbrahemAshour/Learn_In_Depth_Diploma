#include <stdio.h>

void main()
{
	int Num;
	printf("Enter an integer you want to check :");
	scanf("%d",&Num);
	(Num % 2 == 0)?printf("%d is even \n",Num):printf("%d is odd \n",Num);
}
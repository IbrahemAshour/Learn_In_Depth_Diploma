#include<stdio.h>

int Factorial(int Num);
int main()
{
	int Num;
	printf("Enter an positive Number :");
	scanf("%d",&Num);
	printf("Factorial of %d = %d \n",Num ,Factorial(Num));
	return 0 ;
}
int Factorial(int Num)
{
	if(Num == 1)
	{
		return 1;
	}
	else
	{
		return (Num * Factorial(Num-1));
	}
}
#include<stdio.h>

int power(int base , int power);
int main()
{
	int num;
	int pow;
	printf("Enter base number :");
	scanf("%d",&num);
	printf("Enter power number (positive integer) : ");
	scanf("%d",&pow);
	printf("%d^%d = %d",num,pow,power(num,pow));
	return 0 ;
}
int power(int base , int pow)
{
	 
	if(pow == 0)
	{
		return 1;
	}
	else
	{
		return (base * power(base , pow-1));

	}
}
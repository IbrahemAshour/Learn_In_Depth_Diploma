#include <stdio.h>
/*
EX6:

*/
void main()
{
	int Num , sum=0 , i=0;
	printf("Enter an integer : ");
	scanf("%d",&Num);
	while(i<= Num)
	{
		sum+=i;
		i++;
	}
	printf("sum = %d\n",sum);
}
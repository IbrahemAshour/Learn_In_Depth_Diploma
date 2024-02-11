#include<stdio.h>

int IS_Prime(int Num);
int main()
{
	int Num_1 ,Num_2;
	printf("Enter two numbers (intervals) : ");
	scanf("%d %d",&Num_1 ,&Num_2);
	printf("Prime Number between %d and %d are: ",Num_1,Num_2);
	for(int i = Num_1+1 ; i < Num_2 ; i++)
	{
		if(IS_Prime(i)==0)
		{
			printf("%d ",i);
		}
	}
	return 0 ;
}

int IS_Prime(int Num)
{
	int flag = 0;
	for(int i = 2 ; i <(Num/2) ; i++)
	{
		if(Num % i == 0)
		{
			flag =1 ;
			break;
		}

	}
	return flag;
}
/*
EX7:

*/

#include <stdio.h>

void main()
{
	int Num ;
	long long fact = 1;
	printf("Enter an integer : ");
	scanf("%d",&Num);
	if(Num < 0)
		printf("Error !! factorial of negative number does't exist \n");
	
	else if(Num >= 0)
	{
		if(Num == 0) 
			fact =1;
		else
		{
			int i=1;
			while(i<=Num)
			{
				fact*=i;
				i++;
			}
	}
		printf("factorial = %lld \n",fact);
	}	
	
}
/*
EX3:

*/
#include <stdio.h>

void main()
{
	float Num_1 ,Num_2 , Num_3 , largest;
	printf("Enter three Numbers :");
	scanf("%f %f %f",&Num_1,&Num_2,&Num_3);
	if(Num_1 >= Num_2)
	{
		if(Num_1 >= Num_3)
		{
			largest = Num_1 ;
		}
		else
		{
			largest = Num_3;
		}
	}
	else
	{
		if(Num_2 >= Num_3)
		{
			largest = Num_2;
		}
		else
		{
			largest = Num_3;
		}
	}
	printf("Largest number = %.3f\n",largest);
	
}
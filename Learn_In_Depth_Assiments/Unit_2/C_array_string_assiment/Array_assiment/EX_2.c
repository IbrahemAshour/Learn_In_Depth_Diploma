#include<stdio.h>


void main()
{
	float arr[100];
	int num;
	float avg =0;
	printf("Enter the numbers of data : ");
	scanf("%d",&num);
	for(int i=0 ; i<num ; i++)
	{
		printf("Enter number :");
		scanf("%f",&arr[i]);
	}
	for(int i=0 ; i<num ; i++)
	{
		avg+=arr[i];
	}
	printf("Average = %.3f",avg/num);

}

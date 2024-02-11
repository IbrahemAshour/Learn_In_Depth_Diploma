#include<stdio.h>

void main()
{
	float matrix_1[2][2];
	float matrix_2[2][2];
	float Sum[2][2]={0};
	printf("Enter the element of 1st matrix \n");
	for(int i = 0 ;i<2 ;i++)
	{
		for(int j = 0 ; j< 2; j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			scanf("%f",&matrix_1[i][j]);
		}
	}
	printf("Enter the element of 2nd matrix \n");
	for(int i = 0 ;i<2 ;i++)
	{
		for(int j = 0 ; j< 2; j++)
		{
			printf("Enter b%d%d : ",i+1,j+1);
			scanf("%f",&matrix_2[i][j]);
		}
	}
	printf("Sum Of Matrix  :\n");
	{
	for(int i = 0 ;i<2 ;i++)
	{
		for(int j = 0 ; j< 2; j++)
		{
			Sum[i][j]= matrix_1[i][j] + matrix_2[i][j];
			printf("%.2f   ",Sum[i][j]);
			
		}
		printf("\n");
	}
	}
}
#include <stdio.h>

void main()
{
	int row;
	int col;
	int arr[100][100];
	printf("Enters rows and colume of matrix : ");
	scanf("%d %d",&row,&col);
	
	printf("Enter elements of matrix : \n");
	for(int i =0; i<row;i++)
	{
		for(int j=0;j<col ; j++)
		{
			printf("Enter elements a%d%d :",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered Matrix :\n");
		for(int i =0; i<row;i++)
	{
		for(int j=0;j<col ; j++)
		{
			printf("%d\t",arr[i][j]);
			
		}
		printf("\n");
	}
	printf("Transpose Of Matrix :\n");
		for(int i =0; i<col;i++)
	{
		for(int j=0;j<row ; j++)
		{
			printf("%d\t",arr[j][i]);
			
		}
		printf("\n");
	}

}

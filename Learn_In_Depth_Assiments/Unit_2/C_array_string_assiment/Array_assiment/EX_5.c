#include <stdio.h>

void main()
{
	int num_ele;
	int num[100];
	int ins_num;
	int ins_pos;
	printf("Enter no of Element :");
	scanf("%d",&num_ele);
	for(int i = 0 ; i <num_ele ; i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter the element to be searched :");
	scanf("%d",&ins_num);


	for(int i=0 ; i<num_ele ; i++)
	{
		if(ins_num == num[i])
		{
			printf("number founded at location = %d",i+1);
			break;
		}
	}



}

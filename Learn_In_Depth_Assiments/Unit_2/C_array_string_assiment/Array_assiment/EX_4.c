#include <stdio.h>

void main()
{
	int num_ele;
	int num[100];
	int tran[100];
	int ins_num;
	int ins_pos;
	printf("Enter no of Element :");
	scanf("%d",&num_ele);
	for(int i = 0 ; i <num_ele ; i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter the element to be inserted :");
	scanf("%d",&ins_num);
	printf("Enter the location : ");
	scanf("%d",&ins_pos);
	for(int i = ins_pos-1 ; i<=num_ele ; i++)
	{
		tran[i+1]=num[i];
	}
	num[ins_pos-1]=ins_num;
	for(int i=ins_pos ; i<=num_ele ; i++)
	{
		num[i]=tran[i];
	}
	for(int i=0 ; i<=num_ele ; i++)
	{
		printf("%d ",num[i]);
	}



}

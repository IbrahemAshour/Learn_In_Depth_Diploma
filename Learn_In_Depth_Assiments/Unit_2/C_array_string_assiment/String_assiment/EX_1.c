#include<stdio.h>
#include<string.h>
void main()
{
	char arr[100]={0};
	char ch;
	int freq=0;
	printf("Enter a string : ");
	
	fgets(arr,100,stdin);
	printf("Enter a character to find freqency : ");
	scanf("%c",&ch);
	int i=0;
	while(i != strlen(arr))
	{
		if(arr[i] == ch )
		{
			freq++;

			
		}
		i++;
	}
	printf("freqency of %c = %d \n",ch , freq);
}
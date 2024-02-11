#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	printf("Enter a string : ");
	fgets(str,100,stdin);
	printf("Reverse string is :");

	for(int i = strlen(str)  ; i>=0 ; i--)
	{
	
		printf("%c",str[i]);
	}
}
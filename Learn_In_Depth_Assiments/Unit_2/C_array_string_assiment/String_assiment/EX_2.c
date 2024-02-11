#include<stdio.h>
#include <string.h>

void main()
{
	char str[100];
	printf("Enter a string : ");
	fgets(str,100,stdin);
	printf("Lenght of string : %d\n",strlen(str));
}

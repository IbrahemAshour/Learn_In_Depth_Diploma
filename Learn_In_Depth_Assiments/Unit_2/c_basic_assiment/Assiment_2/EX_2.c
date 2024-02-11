#include <stdio.h>

void main()
{
	char ch ;
	printf("enter an alphabet : ");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'e')
	{
		printf("%c is vowel\n",ch);

	}
	else 
	{
		printf("%c is consonant\n",ch);
	}
}
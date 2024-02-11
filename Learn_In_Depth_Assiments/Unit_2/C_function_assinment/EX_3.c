#include<stdio.h>
#include<string.h>

int Reverse (char ch[], int size);
int main()
{
	char ch[100];
	printf("Enter a sentens : ");
	fgets(ch , 100 , stdin);
	Reverse(ch , strlen(ch));
	return 0 ;
}


int Reverse (char ch[], int size)
{
	if(size <0)
	{
		return 1;
	}
	else{
	printf("%c",ch[size]);
	Reverse(ch , size-1);
	}
	


}
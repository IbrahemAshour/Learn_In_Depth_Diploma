/*

EX4:

*/

#include <stdio.h>

void main()
{
	float Num;
	printf("Enter a number : ");
	scanf("%f",&Num);
	if(Num>0)printf("%.3f is positive \n",Num);
	else if(Num == 0)printf("you entered zero\n");
	else printf("%.3f is negative\n",Num);
}
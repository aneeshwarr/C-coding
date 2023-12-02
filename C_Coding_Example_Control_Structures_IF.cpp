#include<stdio.h>
int main()
{
	int number;
	int sqr=0;
	printf("enter a number: ");
	scanf("%d",&number);
	if(number>0)
	{
		sqr = number * number;
	}
	printf("Sqr of given number: %d",sqr);
}

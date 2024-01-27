#include<stdio.h>
int main()
{
	int x;
	int F=1;
	int i;
	printf("Enter 2 numbers: ");
	scanf("%d ",&x);
	for(i=1;i<=x;i++)
	{
		F=F*i;
		printf("%d\n",F);
	}
	printf("Error with given input");
}

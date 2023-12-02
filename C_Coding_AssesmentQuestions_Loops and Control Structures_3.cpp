#include<stdio.h>
int main()
{
	int x;
	int F;
	int i;
	printf("Enter 2 numbers: ");
	scanf("%d ",&x);
	scanf("%d",&F);
	for(i=1;i<=x;i++)
	{
		F=F*i;
		printf("%d\n",F);
	}
	printf("Error with given input");
}

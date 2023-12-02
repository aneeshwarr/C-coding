#include<stdio.h>
//nested for loops to create triangle pattern
int main()
{
	int n,m;
	for(n=1;n<=10;n++)
	{
		for(m=n;m>=1;m--)
			printf("*");
		printf("\n");
	}
	printf("Outside of the loop");
}

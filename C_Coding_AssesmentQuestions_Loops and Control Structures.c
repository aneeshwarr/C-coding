#include<stdio.h>
int main()
{
	//int x=0;
	int x;
	int y=0;
	int d;
	printf("Enter an integer value: ");
	scanf("%d",&x);
	while(x>0)
	{
		d=x%10;
	//	printf("%d\n",d);
		y=y*10 + d;
	//	printf("%d\n",y);
		x=x/10;
	//	printf("%d\n",x);
		printf("The reverse of the entered number is %d\n",y);
	//	x = x+1;
	}
	printf("Error:Outside of loop");
}

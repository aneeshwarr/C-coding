#include<stdio.h>
#include<stdlib.h>
void display1(int a,int b)
{
	printf("The Sum of %d and %d = %d\n",a,b,a+b);
}
void display2(int a,int b)
{
	printf("The difference of %d and %d = %d\n",a,b,a-b);
}
void display3(int a,int b)
{
	printf("The product of %d and %d = %d\n",a,b,a*b);
}
void display4(int a,int b)
{
	printf("The quotient of %d and %d = %d with remainder %d\n",a,b,a/b,a%b);
}
int main()
{
	int choice,x,z;
	while(1)
	{
	printf("\n1. Addition\n2.Difference\n3.Multiplication\n4.Division\n5.All\n6.Exit");
	printf("\nEnter your choice(with the number): ");
	scanf("%d",&choice);
	if(choice!=6)
	{
			printf("Enter 2 values: ");
			scanf("%d%d",&x,&z);
	}
	switch(choice)
	{
		case 1:
			display1(x,z);
			break;
		case 2:
			display2(x,z);
			break;
		case 3:
			display3(x,z);
			break;
		case 4:
			display4(x,z);
			break;
		case 5:
			display1(x,z);
			display2(x,z);
			display3(x,z);
			display4(x,z);
		case 6:
			exit(0);
	}
	}
}

#include<stdio.h>
#include<stdlib.h>
void Addition(int a,int b)
{
	printf("The Sum of %d and %d = %d\n",a,b,a+b);
}
void Difference(int a,int b)
{
	printf("The difference of %d and %d = %d\n",a,b,a-b);
}
void Multiplication(int a,int b)
{
	printf("The product of %d and %d = %d\n",a,b,a*b);
}
void Division(int a,int b)
{
	printf("The quotient of %d and %d = %d with remainder %d\n",a,b,a/b,a%b);
}
int main()
{
	int choice,x,z;
	while(1)
	{
	printf("\n1. Addition\n2.Difference\n3.Multiplication\n4.Difference\n5.All\n6.Exit");
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
			Addition(x,z);
			break;
		case 2:
			Difference(x,z);
			break;
		case 3:
			Multiplication(x,z);
			break;
		case 4:
			Division(x,z);
			break;
		case 5:
			Addition(x,z);
			Difference(x,z);
			Multiplication(x,z);
			Division(x,z);
		case 6:
			exit(0);
	}
	}
}

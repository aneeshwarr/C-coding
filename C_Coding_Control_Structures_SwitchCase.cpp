#include<stdio.h>
#include<stdlib.h>
//switch case program with infinite no. of execution using while loop
int main()
{
	int choice,x,y;
	while(1)
	{
	printf("\n1. Addition\n2.Difference\n3.Multiplication\n4.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	if(choice!=4)
	{
			printf("Enter 2 values: ");
			scanf("%d%d",&x,&y);
	}
	switch(choice)
	{
		case 1:
			printf("Sum of 2 values: %d",x+y);
			break;
		case 2:
			printf("Difference of given values: %d",x-y);
			break;
		case 3:
			printf("Multiplication of 2 values: %d",x*y);
			break;
		case 4:
			exit(0); //to exit program execution
		default:
			printf("Error in given choice!...");
			break;
	}
	//printf("\nSuccessfully executed\n")	;
	}
	
}

#include<stdio.h>
int main()
{
	int no_students[3][3],x;
	int a=0,y;
	//input process
	printf("Enter the number of Standards (less than or equal to 3) : ");
	scanf("%d",&x);
	printf("\nEnter 3 of the standard's student count in sequencial order%d: \n",y+1);
	for(y=0;y<x;y++)
	{
		for(y=0;y<x;y++)
		{
			printf("\nEnter Standard-%d's student count: ",y+1);
			scanf("%d",&no_students);
		}
	}
}

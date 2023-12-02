#include<stdio.h>
int main()
{
	int a;
	int x=3;
	int y=8;
	int z=20;
	int s=61;
	printf("Full Ticket Price is Rs.100\n");
	printf("Enter passenger age: ");
	scanf("%d",&a);
	(a<=x)?printf("Tickets are not needed for passenger.\n"): printf("Tickets are needed for passenger.\n");
	((a>x))&&((a<=y))?printf("Total Ticket Price is Rs.50 With a 50 Percentage Concession.\n"): printf(" ");
	((a<=z))&&((a>y))?printf("Total Ticket Price is Rs.80 With a 20 Percentage Concession.\n"): printf(" ");
	((a>z))&&((a<s))?printf("Total Ticket Price is Rs.100 With No Concession."): printf(" ");
	(a>=s)?printf("Total Ticket Price is Rs.20 With a 80 Percentage Concession."): printf(" ");
}

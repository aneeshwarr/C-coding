#include<stdio.h>
int main()
{
	int age;
	float ticketprice;
	printf("Enter the age: ");
	scanf("%d",&age);
	printf("Enter ticket price: ");
	scanf("%f",&ticketprice);
	if((age<10)&&(age>=0))	
		printf("No Ticket ");
	else if((age<60)&&(age>=10))
		printf("Ticket Price: %f",ticketprice*0.5);
	else if(age>=60 && age<=100)
		printf("Ticket price: %f",ticketprice*0.2);
	else
		printf("Enter valid�input");
}

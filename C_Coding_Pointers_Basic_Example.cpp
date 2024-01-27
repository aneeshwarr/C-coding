#include<stdio.h>
int main() //pointers in c
{
	int *p;
	int x=10;
	p = &x;
	printf("Data in memory location: %d",*p);  //displays the content in the momory location
	printf("\nAddress of data is: %u",p);
	*p = *p * 10;
		printf("\nData in memory location: %d",x);
	
	}

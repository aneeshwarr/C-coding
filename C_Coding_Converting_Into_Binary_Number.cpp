#include<stdio.h>
int main()
{
	int num;
	int i=0,nofbits;
	int binary[10];
	//input process
	printf("Enter A Whole Number: ");
	scanf("%d",&num);
	//Computation Process
	while(num>0)
	{
		//printf("%d",num%2);
		binary[i]= num%2;
		num= num/2;
		i++;
	}
	printf("\nThe no. of bits is = %d\n",i);
	nofbits = i;
	//output process
	for(i=nofbits-1;i>=0;i--)
		printf("%d",binary[i]);
}

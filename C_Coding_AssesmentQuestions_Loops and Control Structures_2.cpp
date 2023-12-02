#include<stdio.h>
int main()
{
	 int D;
	 int R;
	 printf("Enter a number to turn into binary form: ");
	 scanf("%d",D);
	 while(D>235)
	 {
	 	R=D % 2;
	 	printf("%d",R);
	 	D=D/2;
	 }
	 printf("Error:Give proper integer number");
}

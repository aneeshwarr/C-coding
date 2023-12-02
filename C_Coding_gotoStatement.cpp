#include<stdio.h>
//goto stmt
int main()
{
	int n=1;
	repeat:
		printf("%d - ******* I Love India*********\n",n);
		n = n+1;
		if(n<=6)
			goto repeat; //cntrol transfer to loop label
	printf("Outside of the loop");
}

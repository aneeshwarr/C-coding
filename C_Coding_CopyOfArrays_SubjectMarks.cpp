#include<stdio.h>
int main()
{
	int subj_mark[10],n;
	int sum=0,i;
	float a;
	
	//input process
	printf("Enter the number of subjects - (Max no. of subjects = 10) - : ");
	scanf("%d",&n);
	printf("Enter the %d Subject's marks in sequencial order\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter subject - %d's marks: ",i+1);
		scanf("%d",&subj_mark[i]);
	}
	
	//Computation process
	for(i=0;i<n;i++)
	
		sum = sum + subj_mark[i];
	a = sum/n;
	
	//output process
	printf("Total marks scored: %d\n",sum);
	printf("Average Marks Scored: %0.2f%%",a);
}

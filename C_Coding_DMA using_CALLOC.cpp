#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr_arr;
	int i,n;
	printf("Enter the required size of array: ");
	scanf("%d",&n);
	//allocate memory
	ptr_arr = (int *) calloc(n,sizeof(int));
	//checking phase
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,ptr_arr[i]);
	
	for(i=0;i<n;i++)
		ptr_arr[i] = (i+1) * 10;
	
	//output phase
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,ptr_arr[i]);
	
}

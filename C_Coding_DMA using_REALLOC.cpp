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
		
	for(i=0;i<n;i++)
		ptr_arr[i] = (i+1) * 100;
	
	//output phase
	printf("Output phase-1\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,ptr_arr[i]);
	
	//realloction for the array var (pointer var)
	printf("Enter the size of array to be extended: ");
	scanf("%d",&n);
	ptr_arr = (int *) realloc(ptr_arr,n*sizeof(int));
	for(i=0;i<n;i++)
		ptr_arr[i] = (i+1) * 1000;
		
	//output phase
	printf("Output phase-2\n");
	for(i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,ptr_arr[i]);
}

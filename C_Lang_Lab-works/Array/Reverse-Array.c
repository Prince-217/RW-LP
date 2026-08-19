#include<stdio.h>

main()
{
	// Reverse Array...!!
	
	int i,n;
	
	printf("\n\nWAP To Print Reverse Array...!!\n");
	
	printf("\nEnter the Size Of Array :- ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter The value of a[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nYour Reverse Array is ... !!\n\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	
	
}
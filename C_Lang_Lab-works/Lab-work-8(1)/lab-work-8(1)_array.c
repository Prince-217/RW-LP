#include<stdio.h>

main() {
	
	// Q1. WAP to find length of 1D Array...!!
	
	printf("Q1. WAP to find length of 1D Array...!!\n\n");
	
	int i, arsize;

	printf("Enter The Size Of Array :- ");
	scanf("%d",&arsize);

	int a[arsize];


	for(i=0; i<arsize; i++) {
		printf("\nEnter a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nYour Array is...!!\n");
	for(i=0;i<arsize;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	
	printf("\nThe Length Of This Array Is :- %d",arsize);
	
	
	// Q2. WAP To Find the Average Of 1D Array...!!
	
	printf("\n\nQ2. WAP To Find the Average Of 1D Array...\n\n");
	
	int j, sum=0;
	float aravg;
	
	printf("\nEnter The Size Of Array :- ");
	scanf("%d",&arsize);

	int ary[arsize]; 

	
	for(j=0;j<arsize;j++)
	{
		printf("\nEnter the value of index [%d] :- ",j);
		scanf("%d",&ary[j]);
		
		sum += ary[j];
	}
	
	printf("\nYour Array is...!!\n");
	for(j=0;j<arsize;j++)
	{
		printf("a[%d] = %d\n",j,ary[j]);
	}
	
	aravg = sum / arsize;
	
	printf("The Average Of This Array Is :- %d",aravg);
	
	
	// Q3. WAP to perform addition operation between two arrays...!!
	
	
	printf("\n\nQ3. WAP to perform addition operation between two arrays...!!\n\n");
	
	
	printf("Enter The Size Of an array :- ");
	scanf("%d",&arsize);
	
	int ar1[arsize], ar2[arsize];
	
	printf("\nEnter The Elements of first array...!!\n");
	
	for(i=0;i<arsize;i++)
	{
		printf("\nEnter Array-1 index %d :- ",i);
		scanf("%d",&ar1[i]);
	}
	
	printf("\n\nEnter The Elements of second array...!!\n");
	
	for(i=0;i<arsize;i++)
	{
		printf("\nEnter Array-2 index %d :- ",i);
		scanf("%d",&ar2[i]);
	}
	
	int ansary[arsize];
	
	for(i=0;i<arsize;i++)
	{
		ansary[i] = ar1[i] + ar2[i];
	}
	
	printf("\n\nThe New Array is ...!!");
	
	for(i=0;i<arsize;i++)
	{
		printf("\n\nansary[%d] is :- %d",i,ansary[i]);
	}

}
#include<stdio.h>


int sum_ary(int array[5])
{
	int i, size, sum = 0;
	
	printf("Enter the size of array :- ");
	scanf("%d",&size);
	
	int ary[size];
	
	for(i=0;i<size;i++)
	{
		printf("\na[%d] = ",i);
		scanf("%d",&ary[i]);
		sum += ary[i];
	}
	
	printf("\nYour Sum of array is :- %d",sum);
	
	return 0;
}


int len_ary()
{
	int i, length = 0;
	char ary[1000];
	
	printf("\nEnter any string :- ");
	scanf(" %[^\n]",&ary);
	
	for(i=0 ; ary[i] != '\0' ; i++)
	{
		length++;
	}

	printf("\nThe length of array is :- %d",length);
}


void main()
{	


	printf("Q1. Find Sum of all elements of array using UDF...!!\n\n");
	
	printf("Enter the size of array :- ");
	scanf("%d",&size);
	
	int array[size];

	sum_ary();

	printf("\n\nQ2. Find Length of array using UDF...!!\n\n");

	len_ary();
}
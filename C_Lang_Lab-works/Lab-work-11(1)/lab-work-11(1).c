#include<stdio.h>

main()

{
	// Q1. Pattern-1....!!
	
	int i, j;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n==================================\n");
	
	
	// Q2. Pattern-2....!!
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n==================================\n");
	
	
	// Q3. Pattern-3....!!
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n==================================\n");


	// Q4. Pattern-4...!!
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n==================================\n");
	
	
	// Q5. Pattern-5...!!
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n==================================\n");
	
	
	// Q6. Pattern-6...!!
	
	for(i=5;i>=0;i--)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	printf("\n==================================\n");
	
	// Q7. Pattern-7...!!
	
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
	printf("\n==================================\n");
	
	// Q8. Pattern-8...!!
	
	int num =1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}

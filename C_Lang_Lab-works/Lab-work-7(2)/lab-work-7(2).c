<<<<<<< HEAD
#include<stdio.h>

main()

{
	// Q1. Pattern....!!
	
	int i, j, k, p, a, b;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	
	printf("=====================");
	printf("\n");
	
	
	// Q2. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	printf("=====================");
	printf("\n");
	
	
	// Q3. Pattern....!!
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q4. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j>=1;j--)
		{
			if(j % 2 != 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q5. Pattern....!!
	
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q6. Pattern....!!
	
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q7. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(k=(5-i)+1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q8. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(k=(5-i)+1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(a=5;a>i;a--)
		{
			printf("  ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	//Q9. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q10. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(a=(i-1);a>=1;a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	printf("\n\nCompleted....!!");
	printf("\n___________________");
=======
#include<stdio.h>

main()

{
	// Q1. Pattern....!!
	
	int i, j, k, p, a, b;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	
	printf("=====================");
	printf("\n");
	
	
	// Q2. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	printf("=====================");
	printf("\n");
	
	
	// Q3. Pattern....!!
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q4. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j>=1;j--)
		{
			if(j % 2 != 0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q5. Pattern....!!
	
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=(5-i)+1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q6. Pattern....!!
	
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q7. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(k=(5-i)+1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q8. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		for(k=2;k<=i;k++)
		{
			printf("  ");
		}
		for(k=(5-i)+1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(a=5;a>i;a--)
		{
			printf("  ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	//Q9. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=(5-i)+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	printf("=====================");
	printf("\n");
	
	// Q10. Pattern....!!
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(a=(i-1);a>=1;a--)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	printf("\n\nCompleted....!!");
	printf("\n___________________");
>>>>>>> dc6dcf32c016ecc780fbf3bfaf3637b6ed8fc03e
}
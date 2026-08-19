#include<stdio.h>

main()

{
	// WAP To find average of given 2D Array...!!
	
	int i, j, m, n;
	float sum = 0,aravg;
	
	printf("\n=================================\n");
	printf("Q1. Find The Average Of 2D Array...!!");
	printf("\n=================================\n");
	printf("Enter the array's row size :- ");
	scanf("%d",&m);
	printf("Enter the array's column size :- ");
	scanf("%d",&n);
	
	int ary[m][n];
	
	printf("Enter array's elements :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d] :- ",i,j);
			scanf("%d",& ary[i][j]);
			
			sum += ary[i][j];
		}
	}
	
	aravg = sum / (m*n);
	
	printf("\nAverage of an array :- %.2f",aravg);
	
	//WAP to perform addition operations of two 2D arrays...!!
	
	printf("\n======================================================\n");
	printf("\nQ2. Addition Operation Between Two 2D Arrays...!!\n");
	printf("\n======================================================\n");
	printf("Enter the array's row size :- ");
	scanf("%d",&m);
	printf("Enter the array's column size :- ");
	scanf("%d",&n);
	
	int A[m][n], B[m][n], C[m][n];
	
	printf("\nEnter Array A's elements :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nA[%d][%d] :- ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	

	printf("\nEnter Array B's elements :- \n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nB[%d][%d] :- ",i,j);
			scanf("%d",&B[i][j]);
		}
	}	
	
	printf("\n\nThe New Array C Is :- \n");
	
	for(i=0;i<m;i++)
	{
		printf("| ");
		for(j=0;j<n;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("%d ",C[i][j]);
		}
		printf("|\n");
	}
	
	
	//Q3. WAP to find the sum of anti-diagonal elements of 2D Array...!!
	
	printf("\n==============================================================\n");
	printf("Q3. WAP to find the sum of anti-diagonal elements in 2D array...!!");
	printf("\n==============================================================\n");

	printf("Enter the array's row & column size :- ");
	scanf("%d",&m);
	
	int total = 0;
	
	int ary2[m][m];
	
	printf("\nEnter The Elements of an array :- \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&ary2[i][j]);
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if((i+j) == m-1)
			{
				total+=ary2[i][j];
			}
		}
	}	
	
	printf("\nThe Total Sum of anti diagonal array is :- %d\n\n",total);
	
	// WAP to print and find the sum of all boundary elements from given 5 x 5 2D Array...!!
	
	int ary3[5][5], add = 0;
	
	printf("\n====================================================================================\n");
	printf("Q4. WAP to print and find the sum of all boundary elements from given 5 x 5 2D Array...!!");
	printf("\n====================================================================================\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d] :- ",i,j);
			scanf("%d",&ary3[i][j]);
		}
	} 
	
	printf("\nThis is your array...!!\n");
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==1 && (j==1 || j==2 || j==3)) || (i==2 && (j==1 || j==2 || j==3)) || (i==3 && (j==1 || j==2 || j==3)))
			{
				printf(" ",ary3[i][j]);
			}
			else
			{
				printf("%d",ary3[i][j]);
				add+=ary3[i][j];
			}
		}
		printf("\n");
	}
	
	printf("\n\n The Sum of all boundary elements of this array is :- %d",add);
	
	

}
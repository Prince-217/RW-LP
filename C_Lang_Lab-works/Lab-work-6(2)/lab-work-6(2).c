#include<stdio.h>

main()
{
	// Q1. 1 to 10 using do-while loop...!!
	
	int i = 1;
	
	do{
		printf("\n%d ",i);
		i++;
	}while(i<=10);
	
	// Q2. 10 to 1 using for loop...!!
	
	int I;
	
	printf("\n--------------------------------------");
	for(I=10;I>=1;I--)
	{
		printf("\n%d",I);
	}
	printf("\n--------------------------------------");
	
	
	// Q3. Print Even Numbers Between 1 to N...!!
	
	int a = 1, num;
	
	printf("\n Enter the ending number...!!");
	scanf("%d",&num);
	
	do{
		if(a%2 == 0)
		{
			printf("\n%d is even",a);
		}
		a++;
	}while(a<=num);
	
	//Fibonacci series up to N numbers using for loop...!!
	
	
}

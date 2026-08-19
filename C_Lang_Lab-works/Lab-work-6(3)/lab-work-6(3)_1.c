// Lab - Work 6.3


#include<stdio.h>

main ()

{
	// Q1 - Sum of all numbers from 1 to N :-
	
	int i, no, sum1 = 0, sum2 = 0, sum3 = 0;
	
	// Method -1 using for loop...
	
	printf("\nEnter Any number :- ");
	scanf("%d",&no);
	
	for(i==1;i<=no;i++)
	{
		sum1 += i;
	}
	
	printf("\nThe Total Sum of 1 to %d is :- %d",no,sum1);
	
	// Method - 2 using while loop...
	
	printf("\n");
	printf("\n");
	printf("------------------------------------");
	printf("\n");
	printf("\nUsing While loop...!!");
	printf("\n");
	
	
	int a = 1;
	
	while(a<=no)
	{
		sum2 += a;
		a++;
	}
	
	printf("\nThe total sum 1 to %d is :- %d",no,sum2);
	
	
	// Method - 3 using do-while loop...
	
	
	int b = 1;
	
	printf("\n");
	printf("-------------------------------\n");
	printf("Using do while loop...!!\n");
	do{
		
		sum3 += b;
		b++;
		
	}while(b<=no);
	
	printf("\nThe Total Sum of 1 to %d is :- %d",no,sum3);
	
	
	
}

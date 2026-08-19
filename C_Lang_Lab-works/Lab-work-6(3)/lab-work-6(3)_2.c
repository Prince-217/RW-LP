#include<stdio.h>

main()

{
	// WAP to find factorial number .... !!
	
	// Method -1 Using for loop...!!
	
	int a, num, facno = 1;
	
	printf("\n-------------------------------------------------\n");
	printf("Enter Any number to find factorial of it:- ");
	scanf("%d",&num);
	
	for(a=1; a<=num ; a++)
	{
		facno *= a;
	}
	
	printf("\nThe Factorial of %d is :- %d",num,facno);
	
	// Method 2 using While loop...!!
	
	
	printf("\n-------------------------------------------------\n");
	printf("\nPrint factorial Number Using While Loop...!!");
	printf("\n");
	
	int b = 1, facno2 = 1;
	
	while(b<=num)
	{
		facno2 *= b;
		b++;
	}
	printf("\nThe Factorial of %d is :- %d",num,facno2);
	
	
	// Method 3 using Do-While loop...!!
	printf("\n-------------------------------------------------\n");
	printf("\nPrint factorial Number Using Do-While Loop...!!");
	printf("\n");
	
	int c = 1, facno3 = 1;
	
	do
	{
		facno3 *= c;
		c++;
		
	}while(c<=num);
	
	printf("\nThe Factorial of %d is :- %d",num,facno3);
}

#include<stdio.h>

main()
{
	// WAP to print table of N number :- 
	printf("\nTable Of N Number Using For Loop...!!");
	
	int a,ans,num;
	
	printf("\nEnter The Number :- ");
	scanf("%d",&num);
	
	for(a=1;a<=10;a++)
	{
		ans = num*a;
		printf("\n%d x %d = %d",num,a,ans);
	}
	
	//Method 2 Using While loop ... !!
	
	printf("\n\nTable Of N Number Using While Loop...!!");
	printf("\n-----------------------------------------");
	
	int b = 1;
	while(b<=10)
	{
		ans = num*b;
		printf("\n%d x %d = %d",num,b,ans);
		b++;
	}
	
	//Method 3 Using Do-While loop ... !!
	
	printf("\n\nTable Of N Number Using Do-While Loop...!!");
	printf("\n-----------------------------------------");
	
	int c = 1;
	do
	{
		ans = num*c;
		printf("\n%d x %d = %d",num,c,ans);
		c++;
	}while(c<=10);
}

#include<stdio.h>

main()

{
	int num1, num2;
	
	// Write a progframme to find minimum number from 2 given numbers :- 
	
	printf("\nWrite a programme to find minimum number from 2 given numbers :- ");
	printf("\n Enter the Value of number 1 :- ");
	scanf("%d",&num1);
	printf("\n Enter the Value of number 2 :- ");
	scanf("%d",&num2);
	
	printf("\n");
	
	num1 > num2;
	
	if(num1 > num2)
	{
		printf("\nThe Number 2 Is Small number...!!");
		
	}
	else
	{
		printf("\nThe Number 1 is small...!!");
	}
	
	
	// Write A programme to find Neutral Number :-
	
	float Tnum;
	
	printf("\n Write A programme to find Neutral Number :- ");
	
	printf("\nEnter Any Number :- ");
	scanf("%f",&Tnum);
	
	if(Tnum>0)
	{
		printf("\nThe Given Number Is Positive...!!");
	}
	else if(Tnum=0)
	{
		printf("\nThe Given Number Is Neutral...!!");
	}
	else
	{
		printf("\nThe Given Number Is Negative...!!");
	}
	
	// Write a programme to find an average marks :- 

	float sub1,sub2,sub3,avgmrk,sumsub;
	
	printf("\n Write a programme to find an average marks :- ");
	printf("\n");
	printf("\nEnter The Maths Marks :- ");
	scanf("%f",&sub1);
	printf("\nEnter The English Marks :- ");
	scanf("%f",&sub2);
	printf("\nEnter The Science Marks :- ");
	scanf("%f",&sub3);
	
	sumsub = sub1 + sub2 + sub3;
	avgmrk = sumsub / 3;
	
	printf("\nThe Average Marks is :- %f",avgmrk);
}

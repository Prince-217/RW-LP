#include<stdio.h>


void cube(int a)
{
	printf("%d",a*a*a);
}


void divisible(int a)
{
	if((a % 3 == 0) && (a % 5 == 0))
	{
		printf("\nYes This Number is divisible by both 3 & 5 .");
	}
	else
	{
		printf("\nNo This Number is not divisible by both 3 & 5 .");
	}
}

void main()
{
	// Q1. WAP to find cube of given number using UDF
	
	int num;
	
	printf("\nQ1.Find the cube of number using UDF ::\n");
	printf("\nEnter the number :- ");
	scanf("%d",&num);
	
	printf("The Cube of number is :- ");
	cube(num);
	
	// Q2. WAP to check the number is divisible by both 3 & 5 or not...!!
	
	printf("\n\nQ2.Find the number is divisible by both 3 & 5 or not. Using UDF ::\n");
	printf("\nEnter the number :- ");
	scanf("%d",&num);
	divisible(num);
}
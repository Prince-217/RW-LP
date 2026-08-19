#include<stdio.h>
	
main()
	
{
	// Q2. Calculate Gross Salary.
	
	printf("Q2. Calculate Gross Salary.");
	printf("\n");
	
	float BASALARY, SUBVAR, GROSALARY, HRA , DA , TA;
	
	printf("\nEnter Your Basic salary :- ");
	scanf("%f",&BASALARY);
	
	printf("\n Enter Your HRA( in %%) :- ");
	scanf("%f",&HRA);
	
	printf("\n Enter Your DA( in %%) :- ");
	scanf("%f",&DA);
	
	printf("\n Enter Your TA( in %%) :- ");
	scanf("%f",&TA);
	
	SUBVAR = (HRA + DA + TA) / 100;
	GROSALARY = (BASALARY * SUBVAR) + BASALARY ;
	
	printf("\n Your Gross Salary Is :- %f",GROSALARY);
	printf("\n");
	printf("\n");	
}
	

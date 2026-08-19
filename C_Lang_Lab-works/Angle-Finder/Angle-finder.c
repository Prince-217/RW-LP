#include<stdio.h>

int main()

{
	// Q3. Find The Third Angle Of Triange From Given Two Angles :
	
	printf("Q3. Find The Third Angle Of Triange From Given Two Angles :");
	printf("\n")	
	
	float ANG1, ANG2, ANG3;
	
	printf("---------------------------------------------");
	printf("\n");
	printf("Enter The First Angle Of Triangle :- ");
	scanf("%f",&ANG1); 
	
	printf("\nEnter The Second Angle Of Triangle :- ");
	scanf("%f",&ANG2);
	printf("\n");
	printf("---------------------------------------------");
	
	ANG3 = 180 - (ANG1+ ANG2);
	
	printf("\nYour Third Angle Of Triangle Is :- %f",ANG3);
	printf("\n");
	printf("\n");
}

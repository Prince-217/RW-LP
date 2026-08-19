#include<stdio.h>

main(){
	
	// Q1. Area Of Circle :-
	
	float RADIUS,AREA;
	const float PI = 3.14;
	
	printf("Enter The Radius Of Circle :- ");
	scanf("%f",&RADIUS);
	
	AREA = PI * RADIUS * RADIUS;
	
	printf("\nThe Area Of Circle Is :- %f",AREA);
	printf("\n");
	printf("-----------------------------------");
	printf("\n");
	
	// Q2. Area Of Square :- 
	
	float LEN,SAREA;
	
	printf("Enter The Lenth Of Square :- ");
	scanf("%f",&LEN);
	
	SAREA = LEN * LEN;
	
	printf("\nYour Area Of Square is :- %f",SAREA);
	printf("\n");
	
	//Q3. Area Of Triangle :- 
	
	float BASE,HEIGHT,TAREA;
	
	printf("Enter The Base Of Triangle :- ");
	scanf("%f",&BASE);
	
	printf("\nEnter The Height of triangle :- ");
	scanf("%f",&HEIGHT);
	
	TAREA = 0.5 * (BASE * HEIGHT);
	
	printf("\n The Area of triangle is :- %f",TAREA);
	printf("\n");
	
	// Q4. Find Simple Interest :-
	
	float P_AMMOUNT,ROI,MONTH,SIMINT;
	
	printf("Enter The Principle of amount :- ");
	scanf("%f",&P_AMMOUNT);
	
	printf("\nEnter The Rate Of Interest :- ");
	scanf("%f",&ROI);
	
	printf("\nEnter The Total Month :- ");
	scanf("%f",&MONTH);
	
	SIMINT = (P_AMMOUNT * ROI * MONTH)/100;
	
	printf("\nYour Simple Intrest Per Month Is :- %f",SIMINT);
	
	// Perimiter Of the circle :- 
	
	float PER_CIRCLE;
	
	PER_CIRCLE = 2 * PI * RADIUS;
	
	printf("\nYour Perimiter Of Circle is :- %f",PER_CIRCLE);
	
}

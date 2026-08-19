#include<stdio.h>

main()

{
	// Write A Programme To Evaluate The Formula (x + y)² :-

	int x , y , ans ;
	
	printf("\nThe given Formula Is : (x + y)^2 ");
	printf("\nThe Formula is solved by these steps :- ");
	printf("\n\n x^2 + 2xy + y^2");
	printf("\n");
	printf("\nEnter The value of x :- ");
	scanf("%d",&x);
	printf("\nEnter The value of y :- ");
	scanf("%d",&y);
	printf("\n%dx%d + 2x%dx%d + %dx%d",x,x,x,y,y,y);
	
	ans = (x + y)*(x + y);
	
	printf("\nYour Answer Is :- %d",ans);
	
	
	// Write A Programme To Evaluate The Formula (a - b)^2 :-

	int a,b,Ans;
	
	printf("\nThe given Formula Is : (a - b)^2 ");
	printf("\nThe Formula is solved by these steps :- ");
	printf("\n\n a^2 - 2ab + b^2");
	printf("\n");
	printf("\nEnter The value of a :- ");
	scanf("%d",&a);
	printf("\nEnter The value of b :- ");
	scanf("%d",&b);
	printf("\n%d^2 - 2x%dx%d + %d^2",a,a,b,b);
	printf("\n");
	Ans = (a-b)*(a-b);
	printf("\n");
	printf("\nYour Answer Is :- %d",Ans);
	printf("\n");
	
	// Write A Programme To Evaluate The Formula (p + q)³ :-
	
	int p, q, answer;
	
	printf("\nThe given Formula Is : (p + q)^3 ");
	printf("\nThe Formula is solved by these steps :- ");
	printf("\n\n p^3 + q^3 + 3pq(p + q)");
	printf("\n");
	printf("\nEnter The value of p :- ");
	scanf("%d",&p);
	printf("\n");
	printf("\nEnter The value of q :- ");
	scanf("%d",&q);
	printf("\n");
	printf("\n%d^3 + %d^3 + 3x%dx%dx(%d + %d)",p,q,p,q,p,q);
	printf("\n");
	answer = (p*p*p) + (q*q*q) + ((3*p*q)*(p + q));
	printf("\n");
	printf("\nYour Answer Is :- %d",answer);
	
	
	// Write A Program To Swap two variables using third variable :-
	
	int num1,num2,num3;
	printf("\n");
	printf("\nWrite A Program To Swap two variables using third variable :- ");
	printf("\n");
	printf("\n");
	printf("\nEnter The Value Of Number 1 :- ");
	scanf("%d",&num1);
	printf("\nEnter The Value Of Number 2 :- ");
	scanf("%d",&num2);
	
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	printf("\nEnter The Value Of Number 1 :- %d",num1);
	printf("\nEnter The Value Of Number 2 :- %d",num2);	
	
	// Write A Program To Swap two variables Without using third variable :-
	
	int no1,no2;
	
	printf("\nWrite A Program To Swap two variables Without using third variable :- ")
	printf("\nBefore Swapping :- ");
	printf("\n");
	printf("Enter The Value of Number 1 :- ");
	scanf("%d",&no1);
	printf("Enter The Value of Number 2 :- ");
	scanf("%d",&no2);
	printf("\n");
	printf("After Swapping :- ");
	
	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2;
	
	printf("\n");
	printf("\nThe Value Of Number 1 is :- %d",no1);
	printf("\nThe Value Of Number 2 is :- %d",no2);
}

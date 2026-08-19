#include<stdio.h>
main(){
	int a = 10, b = 20, sum, sub, mul;
	float div,mod;
	
	// Lab Work 2.1
	
	// Arithmatic Operations
	
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = b / a;
	mod = b % a;
	
	printf("Addition Of %d and %d is %d ",a,b,sum);
	printf("\n Substraction Of %d and %d is %d ",a,b,sub);
	printf("\n Multiplication Of %d and %d is %d ",a,b,mul);
	printf("\n Division Of %d and %d is %f ",b,a,div);
	printf("\n Modulus Of %d and %d is %f ",b,a,mod);
	
	
	// Square Of the Number
	
	int num = 5, sq = num*num;
	printf("\n The Square Of %d is :- ",num);
	printf("\n");
	printf("\n----------------");
	printf("\n|              |");
	printf("\n| %d  x  %d = %d |",num,num,sq);	
	printf("\n|              |");
	printf("\n----------------");
}


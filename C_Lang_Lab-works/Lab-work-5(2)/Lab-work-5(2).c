#include<stdio.h>

main()

{
	// Find The Maximum Number Using nested if else :- 
	
	int a,b,c,d;
	
	printf("Find the maximum number using nested if-else...!!");
	
	printf("\nEnter The first number :- ");
	scanf("%d",&a);
	
	printf("\nEnter The second number :- ");
	scanf("%d",&b);
	
	printf("\nEnter The third number :- ");
	scanf("%d",&c);
	
	printf("\nEnter The fourth number :- ");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("\nThe First Number Is Big...!!");
			}else{
				printf("\nThe Fourth Number Is Big...!!");
			}
		}else{
			if(c>d){
				printf("\nThe Third Number Is Big...!!");
			}else{
				printf("\nThe fourth Number Is Big...!!");
			}
		}
	}else{
		if(b>c){
			if(b>d){
				printf("\nThe Second number Is Big...!!");
			}else{
				printf("\nThe Fourth number Is Big...!!");
			}
		}else{
			if(c>d){
				printf("\nThe Third Number Is Big...!!");
			}else{
				printf("\nThe Fourth Number Is Big...!!");
			}
		}
	}
	
}

#include<stdio.h>

main()
{
	
	// Question 1 :- Find minimum number from 3 given numbers using ternary operator ...!!
	
	int a,b,c;
	
	printf("\nEnter The Value Of The First Number :- ");
	scanf("%d",&a);
	
	printf("\nEnter The Value Of The Second Number :- ");
	scanf("%d",&b);
	
	printf("\nEnter The Value of The Third Number :- ");
	scanf("%d",&c);
	
	(a < b)
		?(a < c)
			? printf("\nThe First number is minimum...!!")
			: printf("\nThe Third number is minimum...!!")
		:(b < c)
			? printf("\nThe Second number is minimum...!!")
			: printf("\nThe third number is minimum...!!");
	
	// Question 2 :- Menu driven programme ...!!
	
	int choice1, choice2;
	
	printf("\nPress 1 For English.");
	printf("\nPress 2 For Hindi.");
	printf("\nPress 3 For Gujarati.");
	
	printf("\nEnter Your Choice :- ");
	scanf("%d",&choice1);
	
	switch (choice1)
	{
		case 1:
			printf("\nPress 1 for internet recharge...!!");
			printf("\nPress 2 for top-up recharge...!!");
			printf("\nPress 3 for special recharge...!!");
			
			printf("\nEnter Your choice :- ");
			scanf("%d",&choice2);
			
			switch (choice2)
			{
				case 1:
					printf("\nYour Internet Recharge has done Successfully...!!");
					break;
				case 2:
					printf("\nYour top-Up Recharge has done Successfully...!!");
					break;
				case 3:
					printf("\nYour special Recharge has done Successfully...!!");
					break;
			}
			break;
		case 2:
			printf("\nInternet recharge ke liye 1 dabayein...!!");
			printf("\nTop-up recharge ke liye 2 dabayein...!!");
			printf("\nSpecial recharge ke liye 3 dabayein...!!");
			
			printf("\nEnter Your choice :- ");
			scanf("%d",&choice2);
			
			switch (choice2)
			{
				case 1:
					printf("\nAapka Internet Recharge Successfully ho chuka hai...!!");
					break;
				case 2:
					printf("\nAapka Top-Up Recharge Successfully ho chuka...!!");
					break;
				case 3:
					printf("\nAapka Special Recharge Successfully ho chuka hai...!!");
					break;
			}
			break;
		case 3:
			printf("\nInternet recharge mate 1 dabavo...!!");
			printf("\nTop-up recharge mate 2 dabavo...!!");
			printf("\nSpecial recharge mate 3 dabavo...!!");
			
			printf("\nEnter Your choice :- ");
			scanf("%d",&choice2);
			
			switch (choice2)
			{
				case 1:
					printf("\nTamaru Internet Recharge Successfully thai gayu chhe...!!");
					break;
				case 2:
					printf("\nTamaru Top-Up Recharge Successfully thai gayu chhe...!!");
					break;
				case 3:
					printf("\nTamaru Special Recharge Successfully thai gayu chhe...!!");
					break;
			}
			break;
	}
	
}

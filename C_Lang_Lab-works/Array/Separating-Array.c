#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter the Size of array :- ");
	scanf("%d",&n);
	
	int mary[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element of [%d] :- ",i);
		scanf("%d",&mary[i]);
	}
	
	printf("\nYour Array Is ...!!\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",mary[i]);
	}
	
	int a = 0, b = 0;
	int oddary[a], evenary[b];
	
	for(i=0;i<n;i++)
	{
		if(mary[i] % 2 != 0)
		{
			oddary[a] = mary[i];
			a++;
		}
		else
		{
			evenary[b] = mary[i];
			b++;
		}
	}
	
	printf("\n\nOdd Array...!!\n\n");
	
	for(i=0;i<a;i++)
	{
		printf("%d ",oddary[a]);
	}
	
	printf("\n\nEven Array...!!\n\n");
	
	for(i=0;i<b;i++)
	{
		printf("%d ",evenary[b]);
	}
	
}
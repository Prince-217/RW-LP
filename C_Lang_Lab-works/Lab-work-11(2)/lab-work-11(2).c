#include<stdio.h>

void main()
{
	int size, i;
	
	printf("Enter the size of array :- ");
	scanf("%d",&size);
	
	int ary[size];
	
	printf("\nEnter array's elements :- ");
	
	int *p[size], **q[size];
	
	for(i=0;i<size;i++)
	{
		printf("\na[%d] :- ",i);
		scanf("%d",&ary[i]);
		p[i] = &ary[i];
		q[i] = &p[i];
	}
	
	printf("\n\nReversed array's elements :- \n\n");
	
	for(i=size-1;i>=0;i--)
	{	
		printf("%d, ",(**q[i]) * (**q[i]));
	}
	
	return 0;
}
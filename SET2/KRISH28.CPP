#include<stdio.h>
#include<conio.h>
void main()
{	int j,i,max,min;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&j);
	max=j;
	min=j;
	for(i=1;i<=5;i++)
	{       printf("Enter any number:");
		scanf("%d",&j);
		if(j>max)
		max=j;
		if(j<min)
		min=j;
	}
	printf("The Maximum number is %d\n",max);
	printf("The Minimum number is %d",min);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,l;
	clrscr();
	printf("Enter first number:");
	scanf("%d",&j);
	printf("Enter second number:");
	scanf("%d",&k);
	printf("Enter third number:");
	scanf("%d",&l);
	if(j>l)
	{	if(j>l)
			printf("First number is maximum.");
		else
			printf("Third number is maximum.");
	}
	else
	{	if(k>l)
			printf("Second number is maximum.");
		else
			printf("Third number is maximum.");
	}
	getch();
}

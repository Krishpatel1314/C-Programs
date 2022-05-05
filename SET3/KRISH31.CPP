#include<stdio.h>
#include<conio.h>
void main()
{	int j,fact=1;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&j);
	while (j>1)
	{	fact=fact*j;
		j=j-1;
	}
	printf("Factorial of entered no is:%d",fact);
	getch();
}

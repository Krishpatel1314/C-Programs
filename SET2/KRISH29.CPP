#include<stdio.h>
#include<conio.h>
void main()
{	int j;
	clrscr();
 	printf("Enter any number:");
	scanf("%d",&j);
	if((j%10)%2==0)
	{	printf("Last digit of number is even");
	}
	else
	{	printf("Last digit of number is odd");
	}
 	getch();
}

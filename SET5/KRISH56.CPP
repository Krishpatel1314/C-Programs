#include<stdio.h>
#include<conio.h>
sum(int);
void main()
{       int j;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&j);
	printf("Sum of numbers:%d",sum(j));
	getch();
}
sum(int j)
{	if(j)
	{ return(j+sum(j-1));
	}
	return 0;
}
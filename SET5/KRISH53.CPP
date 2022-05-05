#include<stdio.h>
#include<conio.h>
exchange(int,int);
void main()
{	int j,k;
	clrscr();
	printf("Enter first number:");
	scanf("%d",&j);
	printf("Enter second number:");
	scanf("%d",&k);
	exchange(j,k);
	getch();
}
exchange(int j,int k)
{	int l;
	l=j;
	j=k;
	k=l;
	printf("After exchange first number:%d \nsecond number:%d",j,k);
}
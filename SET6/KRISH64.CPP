#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,*l,*m,sum;
	clrscr();
	printf("Enter a number1:");
	scanf("%d",&j);
	printf("Enter a number2:");
	scanf("%d",&k);
	l=&j;
	m=&k;
	sum=*l+*m;
	printf("Sum of two number:%d",sum);
	getch();
}


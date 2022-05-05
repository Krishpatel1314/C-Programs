#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,l,*m,*n;
	clrscr();
	printf("Enter number1:");
	scanf("%d",&j);
	printf("Enter number2:");
	scanf("%d",&k);
	printf("Number before swapping number1:%d, number2:%d",j,k);
	m=&j;
	n=&k;
	l=*m;
	*m=*n;
	*n=l;
	printf("\nNumber after swapping number1:%d, number2:%d",j,k);
	getch();
}

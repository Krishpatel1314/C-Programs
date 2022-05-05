#include<stdio.h>
#include<conio.h>
void main()
{	int j,*k;
	clrscr();
	printf("Enter any value:");
	scanf("%d",&j);
	k=&j;
	printf("Address of Pointer:%p\n",k);
	printf("Value of number:%d",*k);
	getch();
}
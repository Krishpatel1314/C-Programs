#include<stdio.h>
#include<conio.h>
sum(int );
void main()
{	int j,k;
	clrscr();
	printf("Enter the number you want to add:");
	scanf("%d",&j);
	k= sum(j);
	printf("The sum of number is:%d",k);
	getch();
}
sum(int j)
{	int l=0,i;
	for(i=1;i<=j;i++)
	{	l+=i;
	}
	return l;
}

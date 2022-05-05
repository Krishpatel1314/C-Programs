#include<stdio.h>
#include<conio.h>
void main() 
{	int i,j;
	float sum=0;
	clrscr();
	printf("Enter Value of n:");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
		sum=sum+(1.0/i);
	}
	printf("Sum of Series:%.2f",sum);
	getch();
}	
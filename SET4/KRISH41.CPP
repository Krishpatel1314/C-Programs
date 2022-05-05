#include<stdio.h>
#include<conio.h>
void main() 
{	int i,j[100],k[100],n;
	clrscr();
	printf("Enter number of student you want to enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Roll of Student[%d]:",i+1);
		scanf("%d",&j[i]);
		printf("Enter Mark of Student[%d]:",i+1);
		scanf("%d",&k[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("Roll No: %d   Marks : %d\n",j[i],k[i]);
	}
	getch();
}	
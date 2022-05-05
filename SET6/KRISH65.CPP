#include<conio.h>
#include<stdio.h>
void main()
{	int *j[100],k,i;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{	printf("Enter a number:");
		scanf("%d",&j[i]);
	}
	for(i=0;i<k;i++)
	{
		printf("Value of array:%d\n",&*j[i]);
	}
	getch();
}
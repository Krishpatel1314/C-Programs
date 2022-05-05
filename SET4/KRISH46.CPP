#include<stdio.h>
#include<conio.h>
void main()
{
	int j[100],n,i;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("Enter array elements:");
	scanf("%d",&j[i]);
	for(i=n-1;i>=0;i--)
	{	printf("reverse of array %d\n",j[i]);
	}
	getch();
}
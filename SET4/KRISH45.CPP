
#include<stdio.h>
#include<conio.h>
void main()
{
	int j[100],n,i,sum=0;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&j[i]);
	for(i=0;i<n;i++)
	sum=sum+j[i];
	printf("Sum of the array=%d",sum);
	getch();
}
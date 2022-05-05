#include<stdio.h>
#include<conio.h>
void main()
{	int j[100],k,i;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&k);
	printf("Enter array element:");
	for(i=0;i<k;i++)
	{	scanf("%d",j+i);
	}
	int *m=j;
	printf("Entered elements are:");
	for(i=0;i<k;i++)
	{	printf("%d ",*(m+i));
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{	int i,j[100],n;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Value in Array:",i+1);
		scanf("%d",&j[i]);
	}
	for(i=0;i<n;i++)
	{
		if(j[i]%2==0)
		{
		printf("%d is an EVEN number.\n",j[i]);
		}
		else
		{
		printf("%d is an ODD number.\n",j[i]);
		}
	}
	getch();
}
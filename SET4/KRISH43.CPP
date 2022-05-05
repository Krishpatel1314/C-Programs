#include<stdio.h>
#include<conio.h>
void main()
{	int i,j[100],n,k;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Value in Array:",i+1);
		scanf("%d",&j[i]);
		if(i==0)
		{
			k=j[i];
		}
		else
		{
			if(k<j[i])
			{
				k=j[i];
			}
		}
	}
	printf("Maximum Value in Array:%d",k);
	getch();
}
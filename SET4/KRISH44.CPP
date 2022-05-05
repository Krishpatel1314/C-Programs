#include<stdio.h>
#include<conio.h>
void main()
{
	int j[100],n,k,i;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&j[i]);
	printf("Enter element position to search:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{	if(j[i]==k)
		{ printf("%d found at position %d",k,i);
		}
	}
	getch();
}


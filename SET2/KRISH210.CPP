#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,i,max=0,min=0;
	clrscr();
	printf("Enter no. of element want to enter:");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{	printf("Enter element:");
		scanf("%d",&k);
		if(k>max)
		{      max=k;
		}
	}
	printf("Maximun number is:%d",max);
	getch();
}

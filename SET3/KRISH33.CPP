#include<stdio.h>
#include<conio.h>

void main()
{	clrscr();
	int a,j=1,i=0;
	printf("Enter N number:");
	scanf("%d",&a);
	printf("%d",i);
	while (a>0)
	{	printf(" %d ",i+j);
		j=i+j;
		i=j-i;
		a--;
	}
	getch();
}

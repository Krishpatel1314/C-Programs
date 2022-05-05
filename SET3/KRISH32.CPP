#include<stdio.h>
#include<conio.h>

void main()
{	int j,k=0;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&j);
	while (j>0)
	{	k=(k*10)+(j%10);
		j=j/10;
	}
	printf("Reverse of entered no is:%d",k);
	getch();
}

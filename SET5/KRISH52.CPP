#include<stdio.h>
#include<conio.h>
prime(int);
void main()
{	int j,k;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&j);
	k=prime(j);
	if(k==1)
		printf("%d is Prime!!",j);
	else
		printf("%d is not Prime!!",j);
	getch();
}
prime(int j)
{	int i;
	for(i=2;i<j;i++)
	{	if(j%i==0)
		return 0;
	}
	return 1;
}

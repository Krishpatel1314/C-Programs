#include<conio.h>
#include<stdio.h>
factorial(int);
void main()
{	int j,k;
	clrscr();
	printf("Enter any Number:");
	scanf("%d",&j);
	k=factorial(j);
	printf("Factorial of the number is:%d",k);
	getch();
}
factorial(int j)
{	if(j==0)
	{ return 1;
	}
	return(j*factorial(j-1));
}
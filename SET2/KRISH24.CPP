#include<stdio.h>
#include<conio.h>
void main()
{	char j;
	clrscr();
	printf("Enter the Character:");
	scanf("%c",&j);
	if(j>=65 && j<=90)
	{	printf("The Character is Capital.");
	}
	else if(j>=97 && j<=122)
	{	printf("The Character is Small.");
	}
	else if(j>=48 && j<=57)
	{	printf("The Character is in Digit.");
	}
	else
	{printf("It is a special Character.");
	}
	getch();
}

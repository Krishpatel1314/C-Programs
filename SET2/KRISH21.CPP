#include<stdio.h>
#include<conio.h>
void main()
{	int j;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&j);
	if(j==0)
	{ printf("\nEntered number is zero");
	}
	else if(j>0)
	{ printf("\nEntered number is Positive");
	}
	else
	{ printf("\nEntered number is Negative");
	}
	getch();
}




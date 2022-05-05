#include<stdio.h>
#include<conio.h>
void main()
{	char j[100],*k;
	clrscr();
	printf("Enter a String:");
	gets(j);
	k=j;
	while(*k!='\0')
	{	printf("Entered string is:%c\n",*k++);
	}
	getch();
}
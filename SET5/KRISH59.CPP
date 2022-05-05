#include<stdio.h>
#include<conio.h>
#include<string.h>
uppercase(char []);
void main()
{	char j[100];
	clrscr();
	printf("Enter a string:");
	//scanf("%s", &j);
	gets(j);
	printf("String in upper case:%s");
	uppercase(j);
	getch();
}
uppercase(char j[])
{	puts(strupr(j));
	return 0;
}
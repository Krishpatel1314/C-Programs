#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{  	char j[100], k, l;
	int i=0,m;
	clrscr();
	printf("Enter any String:");
	gets(j);
	printf("Character you want to replace:");
	scanf("%c", &k);
	getchar();
	printf("Enter the New Character:");
	scanf("%c", &l);
	m=strlen(j);
	for(i;i<=m; i++)
	{
		if(j[i]==k)
		{
			j[i]=l;
		}
	}
	printf("The String after replacing character: %s ",j);
	getch();
}
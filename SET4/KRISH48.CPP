#include<stdio.h>
#include<conio.h>
#include<string.h>

								void main()
{	char j[50],k;
	int i,l,flag=0;
	clrscr();
	printf("Enter a string:");
	gets(j);
	l=strlen(j);
	printf("Enter a character to find its position:");
	scanf("%c",&k);
	for(i=0;i<l;i++)
	{	if(j[i]==k)
		{       printf("Character Position:%d\n",i+1);
			flag++;
		}
	}
	if(flag==0)
	{
		printf("\nCharacter not found!!");
	}
	getch();
}


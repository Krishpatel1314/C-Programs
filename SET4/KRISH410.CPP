
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char j[100];
	int k,i;
	clrscr();
	printf("Enter a string:");
	gets(j);
	k=strlen(j);
	printf("Enter element location you wish to delete:");
	scanf("%d",&k);
	for(i=k;i<j[i];i++)
	{	j[i]=j[i+1];
	}
	printf("Resultant string after deletion:%s",j);
	getch();
}
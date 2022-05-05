#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{	char l[100];
	char j[100];
	int k;
}s[100];
void main()
{       int i,n;
	clrscr();
	printf("Enter no. of data you wish to add:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Student Name:");
	scanf("%s",&s[i].l);
	printf("Enter student Branch:");
	scanf("%s",&s[i].j);
	printf("Total Marks:");
	scanf("%d",&s[i].k);
	}
	for(i=0;i<n;i++)
	{
	printf("Student Name:%s\n",s[i].l);
	printf("Student Branch:%s\n",s[i].j);
	printf("Total Marks:%d\n",s[i].k);
	}
	getch();
}



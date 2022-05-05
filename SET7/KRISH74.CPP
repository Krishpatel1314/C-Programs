#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{	int l;
	char j[100];
	int k;
	int m;
}e[100];
void main()
{       int i,n;
	clrscr();
	printf("Enter no. of data you wish to add:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Employ ID:");
	scanf("%d",&e[i].l);
	printf("Enter Employ Name:");
	scanf("%s",&e[i].j);
	printf("Enter Employ Salary:");
	scanf("%d",&e[i].k);
	printf("Enter Employ Age:");
	scanf("%d",&e[i].m);
	}
	for(i=0;i<n;i++)
	{
	printf("Employee ID:%d\n",e[i].l);
	printf("Employee Name:%s\n",e[i].j);
	printf("Employee Salary:%d\n",e[i].k);
	printf("Employee Age:%d\n",e[i].m);
	}
	getch();
}



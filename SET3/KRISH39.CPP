#include<stdio.h>
#include<conio.h>
void main()
{	int i,j,k;
	clrscr();
	printf("Enter no. of rows:");
	scanf("%d",&k);
	//i)
	for(i=0;i<k;i++)
	{
	for(j=0;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
printf("==========================================\n");
	//ii)
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" *");
		}
	printf("\n");
	}
printf("==========================================\n");
	//iii)
	for (i=0;i<=k;i++)
	{
		for (j=k;j>=i;j--)
		{
			printf(" *");
		}
	printf("\n");
	}
getch();
}
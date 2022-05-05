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
			printf(" %d",j+1);
		}
		printf("\n");
	}
printf("==========================================\n");
	for(i=0;i<k;i++)
	//ii)
	{
		for(j=0;j<k-i;j++)
		{
			printf(" %d",j+1);
		}
		printf("\n");
	}
printf("==========================================\n");
	//iii)
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			printf(" %d",k-i);
		}
		printf("\n");
	}
printf("==========================================\n");
	//iv)
	for(i=0;i<k;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" %d",i+1);
		}
		printf("\n");
	}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{   int j,i,sum=0;
    clrscr();
    printf("Enter Value of n:");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
	 sum=sum+(i*i);
    }
    printf("Sum of Series=%d",sum);
    getch();
}
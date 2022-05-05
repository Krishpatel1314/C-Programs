#include<stdio.h>
#include<conio.h>
sum(int);
void main()
{   int j,k;
    clrscr();
    printf("Enter any number:");
    scanf("%d",&j);
    k=sum(j);
    printf("Sum of digits is %d",k);
    getch();
}
sum(int j)
{   if (j==0)
    {   return 0;
    }
    return(j % 10 + sum(j/10));
}

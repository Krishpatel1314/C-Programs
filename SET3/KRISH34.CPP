#include <stdio.h>
#include<conio.h>
void main()
{   int j,sum=0,f,l;
    clrscr();
    printf("Enter any number: ");
    scanf("%d", &j);
    l=j%10;
    while(j>= 10)
    {
	j=j/10;
    }
    f=j;
    sum=f+l;
    printf("Sum of first and last digit = %d", sum);
    getch();
}
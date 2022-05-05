#include<conio.h>
#include <stdio.h>
void main()
{
    int i=2,j,count=0;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&j);
    for(i;i<j;i++)
    {
	if(j%i==0)
	count++;
    }
    if(count==0)
	printf("It is a PRIME number!");
    else
	printf("It is NOT a PRIME number!");
    getch();
}

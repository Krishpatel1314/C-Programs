#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char j[100];
   clrscr();
   printf("Enter a string:");
   gets(j);
   strlwr(j);
   printf("String in Lower Case:%s",j);
   getch();
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char j[100];
   clrscr();
   printf("Enter a string:");
   gets(j);
   strupr(j);
   printf("String in Upper Case:%s",j);
   getch();
}
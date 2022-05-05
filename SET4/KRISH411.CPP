#include<stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
   char j[100];
   clrscr();
   printf("Enter a string to reverse:");
   gets(j);
   strrev(j);
   printf("Reverse of the string:%s", j);
   getch();
}
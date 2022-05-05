#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	FILE *fp;
	char file[100];
	char str[100];
	clrscr();
	printf("Enter a filename :");
	gets(file);
	printf("Enter the string to write :");
	gets(str);
	fp = fopen(file,"w+");
	if ( fp )
	{
	   fputs(str,fp);
	   printf("File Created Successfully");
	 }
	else
	{
	 printf("Failed to open the file\n");
	}
	fclose(fp);
	getch();
}

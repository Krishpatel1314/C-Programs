#include<conio.h>
#include<stdio.h>
void main()
{	FILE *fp;
	int count = 0;
	char filename[50],c;
	clrscr();
	printf("Enter file name:");
	scanf("%s",filename);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{	printf("Could not open file %s", filename);
	}
	for (c = getc(fp); c != EOF; c = getc(fp))
		if (c == '\n')
		count = count + 1;
	fclose(fp);
	printf("The file %s has %d lines\n ", filename, count);
	getch();
}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{	FILE *fp1,*fp2,*fp3;
	char c,f1[50],f2[50],f3[50];
	clrscr();
	printf("Enter 1 file name: ");
	scanf("%s", f1);
	printf("Enter 2 file name: ");
	scanf("%s", f2);
	printf("Enter file name: ");
	scanf("%s", f3);
	fp1=fopen(f1,"r");
	fp2=fopen(f2,"r");
	fp3=fopen(f2,"w");
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{	puts("Could not open files");
		exit(0);
	}
	while ((c = fgetc(fp1)) != EOF)
		fputc(c, fp3);
	while ((c = fgetc(fp2)) != EOF)
		fputc(c, fp3);
	printf("Merged %s and %s into %s",f1,f2,f3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	getch();
}

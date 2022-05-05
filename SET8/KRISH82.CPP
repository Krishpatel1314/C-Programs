#include<stdio.h>
#include<conio.h>
void main()
{	FILE *f1, *f2, *f3;
	int n, i,j;
	clrscr();
	printf("Enter no.of values you want to enter:");
	scanf("%d",&j);
	f1 = fopen("DATA", "w");
	for(i=1;i<=j;i++)
	{	scanf("%d", &n);
		if(n==-1) break;
		putw(n,f1);
	}
	fclose(f1);
	f1 = fopen("DATA", "r");
	f2 = fopen("ODD", "w");
	f3 = fopen("EVEN", "w");
	while((n=getw(f1))!=EOF)
	{	if(n%2 == 0)
		putw(n,f3);
		else
		putw(n,f2);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f2 = fopen("ODD","r");
	f3 = fopen("EVEN", "r");
	printf("\nContents of ODD file\n");
	while((n=getw(f2))!= EOF)
	printf("%4d",n);
	printf("\nContents of EVEN file\n");
	while((n=getw(f3))!= EOF)
	printf("%4d",n);
	fclose(f2);
	fclose(f3);
	getch();
}
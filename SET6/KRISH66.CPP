#include<conio.h>
#include<stdio.h>
void main()
{	int j[100],m[100],k,i;
	int *l=j;
	int *n=m;
	int *last;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{	printf("Enter a number:");
		scanf("%d",&j[i]);
	}
	last=&j[k-1];
	printf("Value of array1 :\n");
	for(i=0;i<k;i++)
	{
		printf("%4d",j[i]);
	}
	while(l<=last)
	{	*n=*l;
		l++;
		n++;
	}
	printf("\nValue of array2:\n");
	for(i=0;i<k;i++)
	{
		printf("%4d",*(m+i));
	}
	getch();
}


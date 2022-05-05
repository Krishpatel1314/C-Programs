	#include<stdio.h>
#include<conio.h>
void main()
{
	int j[100],n,k,i;
	clrscr();
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&j[i]);
	printf("Enter element location you wish to delete:");
	scanf("%d",&k);
	if(k>n)
	  printf("Deletion of element is not possible.");
	else
	{	for(i=k;i<n-1;i++)
		j[i]=j[i+1];
		printf("Resultant array after deletion:");
		for(i=0;i<n-1;i++)
		   printf("%d ",j[i]);
	}
getch();
}


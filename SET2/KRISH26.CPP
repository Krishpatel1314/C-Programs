#include<stdio.h>
#include<conio.h>
void main()
{	float j,k,l,m=300,n,p,g;
	clrscr();
 	printf("Enter the Basic:");
 	scanf("%f",&j);
 	printf("\n===================================");
	 printf("\n          SALARY SLIP");
 	printf("\n===================================");
	k=0.1*j;
	l=0.075*j;
	p=0.125*j;
	g=j+k+l+m;
	n=g-p;
 	printf("\n Basic : %.2f",j);
 	printf("\n DA    : %.2f",k);
	printf("\n HRA   : %.2f",l);
 	printf("\n MA    : %.2f",m);
 	printf("\n-----------------------------------");
 	printf("\n GROSS : %.2f",g);
 	printf("\n-----------------------------------");
	printf("\n PF    : %.2f",p);
 	printf("\n-----------------------------------");
 	printf("\n NET   : %.2f",n);
 	printf("\n===================================");
	getch();
}

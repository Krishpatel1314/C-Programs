#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,l,m,n,p;
	clrscr();
	printf("Enter the marks of subject1:");
	scanf("%d",&j);
	printf("Enter the marks of subject2:");
	scanf("%d",&k);
	printf("Enter the marks of subject3:");
	scanf("%d",&l);
	printf("Enter the marks of subject4:");
	scanf("%d",&m);
	printf("Enter the marks of subject5:");
	scanf("%d",&n);
	p=(float)(j+k+l+m+n)/5;
	if(p>=35)
		printf("Student is Passed!!");
	else
		printf("Student is Failed!!");
	getch();
}

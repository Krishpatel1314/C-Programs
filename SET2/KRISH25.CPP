#include<stdio.h>
#include<conio.h>
void main()
{	int j,k,l;
	float m;
	clrscr();
	printf("Enter the marks of subject1:");
	scanf("%d",&j);
	printf("Enter the marks of subject2:");
	scanf("%d",&k);
	printf("Enter the marks of subject3:");
	scanf("%d",&l);
	m=(float)(j+k+l)/3;
	printf("Student Scored %.2f%\n",m);
	if(m>100 || m<0)
	{	printf("Invalid Input");
	}
	else if(m>=80)
	{	printf("Passed with Distinction");
	}
	else if(m>=60)
	{	printf("Passed with First Class");
	}
	else if(m>=40)
	{	printf("Passed with Second Class");
	}
	else
	{	printf("Failed!!");
	}
	getch();
}

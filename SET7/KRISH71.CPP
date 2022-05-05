#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{	int id;
	char j[100];
	float k;
}s1;
void main()
{       int i,l;
	clrscr();
	printf("Enter Student ID:");
	scanf("%d",&s1.id);
	printf("Enter student name:");
	scanf("%s",&s1.j);
	printf("Enter Marks:");
	scanf("%f",&s1.k);
	printf("Student ID:%d\n",s1.id);
	printf("Student Name:%s\n",s1.j);
	printf("Marks:%.2f\n",s1.k);
	getch();
}



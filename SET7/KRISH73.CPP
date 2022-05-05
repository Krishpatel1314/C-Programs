#include<stdio.h>
#include<conio.h>
struct distance
{	float j,k;
}d1,d2,s;
void main()
{	clrscr();
	printf("---FIRST DISTANCE---");
	printf("\nEnter feet:");
	scanf("%f",&d1.j);
	printf("Enter Inch:");
	scanf("%f",&d1.k);
	printf("---SECOND DISTANCE---");
	printf("\nEnter feet:");
	scanf("%f",&d2.j);
	printf("Enter Inch:");
	scanf("%f",&d2.k);
	s.j=d1.j+d2.j;
	s.k=d1.k+d2.k;
	while(s.k>=12.0)
	{	s.k=s.k-12.0;
		++s.j;
	}
	printf("Sum of distance:%.2f' %.2f''",s.j,s.k);
	getch();
}
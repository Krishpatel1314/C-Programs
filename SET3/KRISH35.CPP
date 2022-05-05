#include<stdio.h>
#include<conio.h>
void main()
{ int i,j,k,sum=0,avg;
  clrscr();
  printf("Enter How many Number you want:");
  scanf("%d",&j);
  printf("Enter the elements one by one:");
  for(i=0;i<j;++i)
  {	scanf("%d",&k);
	sum=sum+k;
  }
  avg=sum/j;
  printf("Sum of the Numbers:%d\n",sum);
  printf("Average of the Numbers:%.2f",(float)avg);
  getch();
}
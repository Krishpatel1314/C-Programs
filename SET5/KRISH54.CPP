#include<stdio.h>
#include<conio.h>
armstrong(int);
perfect(int);
 prime(int);
void main()
{	int j;
	clrscr();
	printf("Enter any number:");
	scanf("%d",&j);
	if(armstrong(j))
	{	printf("%d is an armstrong number\n",j);
	}
	else
	{	printf("%d is not an armstrong number\n",j);
	}
	if(perfect(j))
	{	printf("%d is an perfect number\n",j);
	}
	else
	{	printf("%d is not a perfect number\n",j);
	}
	if(prime(j))
	{	printf("%d is an Prime number\n",j);
	}
	else
	{	printf("%d is not a Prime number\n",j);
	}
	getch();
}
armstrong(int j)
{	int l,sum=0;
	while(j!=0)
	{   l=j%10;
	    sum+=l*l*l;
	    j=j/10;
	}
	if(j==sum)
	{ return 0;
	}
	return 1;
}

perfect(int j)
{	int i,sum=0;
	for(i=1;i<j;i++);
	{	if(j%i==0)
		{  sum=sum+i;
		}
	}
	if(sum==j)
	{ return 0;
	}
	return 1;
}
prime(int j)
{	int i;
	for(i=2;i<j/2;i++)
	{	if(j%i==0)
		{   return 0;
		}
	}
	return 1;
}

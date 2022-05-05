#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{       int gd=DETECT,gm;
	int j[12]={350,430, 350,390, 430,350, 350,310, 300,410,350,430};
	clrscr();
	initgraph(&gd,&gm,"");
	drawpoly(6,j);
	rectangle(100,100,400,200);
	getch();
	closegraph();
}
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{	int gd=DETECT, gm;
	int j[50]={340,150,320,110,360,70,400,110,380,150,340,150};
	clrscr();
	initgraph(&gd,&gm,"");
	setfillstyle(SOLID_FILL,GREEN);
	fillpoly(6,j);
	getch();
	closegraph();
}

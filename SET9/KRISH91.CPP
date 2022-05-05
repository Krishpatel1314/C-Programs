#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{	int gd=DETECT, gm;
	clrscr();
	initgraph(&gd,&gm,"");
	circle(100,100,100);
	line(100,100,100,70);
	putpixel(60,60,10);
	putpixel(140,60,10);
	arc(100,150,180,10,10);
	getch();
	closegraph();
}

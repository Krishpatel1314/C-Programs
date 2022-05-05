#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gr=DETECT,gm;
	clrscr();
	initgraph(&gr,&gm,"");
	setcolor(YELLOW);
	circle(300,100,YELLOW);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(300,100,YELLOW);
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,YELLOW);
	fillellipse(310,85,2,6);
	fillellipse(290,85,2,6);
	ellipse(300,100,205,335,20,9);
	ellipse(300,100,205,335,20,10);
	ellipse(300,100,205,335,20,11);
	getch();
	closegraph();
	return 0;
}



#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void drawline(int x1,int y1,int x2,int y2)
{
    float x_incr,y_incr;
    int i;
    int dx=x2-x1;
    int dy=y2-y1;
    float x=x1,y=y1;
    if (dx>dy)
    {
        y=dx;
    }
    else
    {
        y=dy;
    }
    x_incr=dx/y;
    y_incr=dy/y;
    for(i=1;i<=y;i++)
    {
        putpixel(x,y,WHITE);
        x=x+x_incr;
        y=y+y_incr;
    }
}
void drawline(int,int,int,int);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,500);
    setbkcolor(RED);
	cleardevice();
    settextstyle(3,HORIZ_DIR,3);
    outtextxy(100,70,"Implemented Digital Differential Analyzer Algorithm");
    drawline(120,120,300,300);
    getch();
    closegraph();
}

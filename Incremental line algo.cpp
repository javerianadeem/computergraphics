#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void drawline(int x1,int y1,int x2,int y2)
{
    int x = x1,y = y1;
    float m,b;
    m = (y2-y1)/(x2-x1);
    b = y1 - (m*x1);
    y = (m*x) + b;
    if(m<1)
    {
        for(x=x1;x<=x2;x++)
        {
            putpixel(x,y,WHITE);
            y=(m*x)+b;
        }
    }
    else
    {
        for(y=y1;y<=y2;y++)
        {
            putpixel(x,y,WHITE);
            x = (y-b)/m;
        }
    }
}
void drawline(int,int,int,int);
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,500);
	setbkcolor(3);
	cleardevice();
    drawline(50,100,300,400);
    settextstyle(3,HORIZ_DIR,4);
	outtextxy(50,30,"Implemented Incremental Line Algorithm");
    getch();
    closegraph();
}

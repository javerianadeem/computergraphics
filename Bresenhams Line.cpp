#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void drawline(int x1,int y1,int x2,int y2)
{
    int x,y,x_end,p_nod;
    int dx = x2-x1;
    int dy = y2 - y1;
    if(x1>x2)
    {
        x = x2;
        y = y2;
        x_end = x1;
    }
    else
    {
        x = x1;
        y = y1;
        x_end = x2;
    }
    putpixel(x,y,WHITE);
    while(x < x_end)
    {
        x++;
        if(p_nod < 0)
            p_nod = p_nod + (2*dy);
        else
        {
            y++;
            p_nod = p_nod + (2*(dy-dx));
        }
        putpixel(x,y,WHITE);
    }
}
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,500);
    setbkcolor(BLUE);
    cleardevice();
    settextstyle(4,HORIZ_DIR,3);
	outtextxy(100,30,"Implemented Bresenhams Line Algorithm");
    drawline(100,100,400,400);
    getch();
    closegraph();
}

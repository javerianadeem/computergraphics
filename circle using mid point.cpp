#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void drawcircle(int,int,int);
int draw(float,float,float,float );
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,600);
    setbkcolor(LIGHTRED);
    cleardevice();
    settextstyle(4,HORIZ_DIR,3);
	outtextxy(50,50,"Drawing Circle Using Mid Point Algorithm");
    drawcircle(350,350,200);
    getch();
    closegraph();
}
void drawcircle(int a,int b, int r)
{
    int h;
    int x = 0;
    int y = r;
    h = 1-r;
    while(x<y)
    {
        if(h<0)
        {
            h = h+(2*x)+3;
            delay(20);
        }
        else
        {
            h = h+(2*x)-(2*y)+5;
            delay(20);
            y--;
        }
        x++;
        draw(a,b,x,y);
    }
}
int draw(float a,float b,float x,float y)
{
    putpixel(x+a,y+b,WHITE);
    putpixel(y+a,x+b,WHITE);
    putpixel(y+a,-x+b,WHITE);
    putpixel(x+a,-y+b,WHITE);
    putpixel(-x+a,-y+b,WHITE);
    putpixel(-y+a,-x+b,WHITE);
    putpixel(-y+a,x+b,WHITE);
    putpixel(-x+a,y+b,WHITE);
}

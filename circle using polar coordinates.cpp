#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#define PI 3.142
int draw(float,float,float,float);
void drawpixel(int,int,int,int);

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,500);
    setbkcolor(MAGENTA);
    cleardevice();
    settextstyle(4,HORIZ_DIR,3);
	outtextxy(50,50,"Drawing Circle Using Polar Coordinates");
    drawpixel(120,120,400,300);
    getch();
    closegraph();
}
void drawpixel(int x1,int y1,int x2,int y2)
{
    float x=x1,y=y1,r;
    r = sqrt(pow(x,2)+pow(y,2));
    int a = x2,b = y2;
    float i;
    x = r;
    y = 0;
    for(i=0;i<PI/4;i=i+1/r)
    {
        delay(20);
        x = (r*cos(i));
        y = (r*sin(i));
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

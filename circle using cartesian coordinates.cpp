#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#define PI 3.142
void draw(int x1,int y1,int x2,int y2)
{
    float x=x1,y=y1,r;
    r = sqrt(pow(x,2)+pow(y,2));
    float a = x2,b = y2;
    float i=0;
    while(i<=2*PI)
    {
        delay(10);
        putpixel(x,y,WHITE);
        x = a + (r*cos(i));
        y = b + (r*sin(i));
        putpixel(x,y,WHITE);
        i += 1/r;
    }
}
void draw(int,int,int,int);
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(800,500);
    setbkcolor(DARKGRAY);
    cleardevice();
    settextstyle(4,HORIZ_DIR,3);
	outtextxy(50,50,"Drawing Circle Using Cartesian Coordinates");
    draw(120,120,400,300);
    getch();
    closegraph();
}

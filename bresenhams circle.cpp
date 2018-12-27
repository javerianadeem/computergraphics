#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int draw_pixel(float,float,float,float);
void draw_circle(int a,int b, int r)
{
    int d_i;
    int xi = 0;
    int yi = r;
    d_i = 3-(2*r);
    while(xi<yi)
    {
        if(d_i<0)
        {
            d_i = d_i + (4*xi) + 6;
            delay(20);
        }
        else
        {
            d_i = d_i + (4*(xi-yi)) + 10;
            delay(20);
            yi--;
        }
        xi++;
        draw_pixel(a,b,xi,yi);
    }
}
int draw_pixel(float a,float b,float x,float y)
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
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"C:\TC\BGI");
    initwindow(850,650);
    setbkcolor(GREEN);
    cleardevice();
    settextstyle(4,HORIZ_DIR,3);
	outtextxy(5,40,"Drawing Circle Using Bresenhams Circle Algorithm");
    draw_circle(350,350,200);
    getch();
    closegraph();
}

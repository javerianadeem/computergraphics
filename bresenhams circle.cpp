#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int draw_pixel(float,float,float,float);
void draw_circle(int a_cord,int b_cord, int r)
{
    int d_i;
    int x_i = 0;
    int y_i = r;
    d_i = 3-(2*r);
    while(x_i<y_i)
    {
        if(d_i<0)
        {
            d_i = d_i + (4*x_i) + 6;
            delay(20);
        }
        else
        {
            d_i = d_i + (4*(x_i-y_i)) + 10;
            delay(20);
            y_i--;
        }
        x_i++;
        draw_pixel(a_cord,b_cord,x_i,y_i);
    }
}
int draw_pixel(float a_cord,float b_cord,float x_axis,float y_axis)
{
    putpixel(x_axis+a_cord,y_axis+b_cord,WHITE);
    putpixel(y_axis+a_cord,x_axis+b_cord,WHITE);
    putpixel(y_axis+a_cord,-x_axis+b_cord,WHITE);
    putpixel(x_axis+a_cord,-y_axis+b_cord,WHITE);
    putpixel(-x_axis+a_cord,-y_axis+b_cord,WHITE);
    putpixel(-y_axis+a_cord,-x_axis+b_cord,WHITE);
    putpixel(-y_axis+a_cord,x_axis+b_cord,WHITE);
    putpixel(-x_axis+a_cord,y_axis+b_cord,WHITE);
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

/*Moving a car*/
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");


for (int i=0;i<500;i++)
{
/*techarge part*/
outtextxy(40,220,"TECHARGE");
line(30,200,30,250);
line(30,200,110,200);
line(30,250,110,250);
line(110,200,110,250);

line(50,250,50,390);
line(55,250,55,390);

/***CAR BODY ******/
line(50+i,370,90+i,370);
arc(110+i,370,0,180,20);
line(130+i,370,220+i,370);
arc(240+i,370,0,180,20);
line(260+i,370,300+i,370);
line(300+i,370,300+i,350);
line(300+i,350,240+i,330);
line(240+i,330,200+i,300);
line(200+i,300,110+i,300);
line(110+i,300,80+i,330);
line(80+i,330,50+i,340);
line(50+i,340,50+i,370);

/***CAR Windows***/
line(165+i,305,165+i,330);
line(165+i,330,230+i,330);
line(230+i,330,195+i,305);
line(195+i,305,165+i,305);

line(160+i,305,160+i,330);
line(160+i,330,95+i,330);
line(95+i,330,120+i,305);
line(120+i,305,160+i,305);

/**Wheels**/
circle(110+i,370,17);
circle(240+i,370,17);

delay(10);
cleardevice();

line(0,390,639,390);  //ROAD
}
getch();
return 0;
}

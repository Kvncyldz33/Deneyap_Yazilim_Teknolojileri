#include<stdio.h>

#include<conio.h>

#include<dos.h>

#include<graphics.h>

void main()

{

int gd=0,gm;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

for(int i=0;i<=15;i++)

{

setcolor(YELLOW);

line(0,300,200,300);

line(350,300,640,300);

setcolor(RED);

line(200,300,200,212);

line(350,300,350,212);

line(200,212,350,212);



setcolor(7);                //person1

line(275,270,275,245);

line(275,270,288,294);//legr

line(275,270,262,294); //legl

circle(275,236,9);

setfillstyle(SOLID_FILL,LIGHTCYAN);

floodfill(275,236,LIGHTGRAY);

line(275,255,255,232);//handl

line(275,255,295,232);//handr

line(255,232,250,212);

line(295,232,300,212);

  delay(700);

  cleardevice();

setcolor(RED);

line(0,300,200,300);

line(640,300,350,300);

 setcolor(YELLOW);

line(200,300,200,212);  //rod1

line(350,300,350,212);

line(200,212,350,212);





setcolor(7);              //person2

line(275,270-15,275,245-15);

line(275,270-15,288,294-15);//legr

line(275,270-15,262,294-15); //legl

circle(275,236-15,9);

setfillstyle(SOLID_FILL,LIGHTCYAN);

floodfill(275,236-15,LIGHTGRAY);

line(275,255-15,255,232);//handl

line(275,255-15,295,232);//handr

line(255,232,250,212);

line(295,232,300,212) ;

delay(700);

cleardevice();



}

 getch();

 closegraph();



}

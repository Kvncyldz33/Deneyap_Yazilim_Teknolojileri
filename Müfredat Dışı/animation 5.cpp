#include<conio.h>

#include<graphics.h>

#include<stdio.h>

#include<dos.h>

int   main()

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\turboc3\\bgi");

 for(int i=0;i<10;i++)

{

 ellipse(300,50,160,330,37,30);

 ellipse(298,50,170,340,35,50);

       setcolor(BROWN);

 line(310,98,310,230);

 line(280,95,280,230);

 line(280,230,310,230);

  setcolor(WHITE);

  circle(295,204,6);

  line(295,230,295,210);    //body

  line(295,220,310,215);//hands

  line(295,220,280,215)    ;    //hands

  line(295,230,305,240);//leg1

  line(295,230,285,240);





 delay(300);

 cleardevice();

      //MOTION 2

  ellipse(300,50,160,330,37,30);

 ellipse(298,50,170,340,35,50);

 setcolor(BROWN);

 line(310,98,320,215);

 line(280,95,290,215);

 line(290,215,320,215);

   setcolor(WHITE );



    circle(295+10,204-15,6);

  line(295+10,230-15,295+10,210-15);    //body

  line(295+10,220-15,310+10,215-15);//hands

  line(295+10,220-15,280+10,215-15)    ;    //hands

  line(295+10,230-15,305+10,240-15);//leg1

  line(295+10,230-15,285+10,240-15);









  delay(300);

  cleardevice();

   ellipse(300,50,160,330,37,30);

 ellipse(298,50,170,340,35,50);

       setcolor(BROWN);

 line(310,98,310,230);

 line(280,95,280,230);

 line(280,230,310,230);

  setcolor(WHITE);

  circle(295,204,6);

  line(295,230,295,210);    //body

  line(295,220,310,215);//hands

  line(295,220,280,215)    ;    //hands

  line(295,230,305,240);//leg1

  line(295,230,285,240);





 delay(300);

 cleardevice();









   ellipse(300,50,160,330,37,30);   //MOTION 3

 ellipse(298,50,170,340,35,50);

  setcolor(BROWN);

  line(310,98,300,245);

  line(280,95,270,245);

  line(300,245,270,245);

     setcolor(WHITE);





      circle(295-10,204+15,6);

  line(295-10,230+15,295-10,210+15);    //body

  line(295-10,220+15,310-10,215+15);//hands

  line(295-10,220+15,280-10,215+15)    ;    //hands

  line(295-10,230+15,305-10,240+15);//leg1

  line(295-10,230+15,285-10,240+15);



     delay(300);

     cleardevice();





 }

getch();

closegraph();

return 0;

}

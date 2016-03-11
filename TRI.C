#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
   int i,j,gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\turboc3\\bgi");
   for(i=250;i<=350;i++)
   {
	putpixel(250,i,RED);
   }
   for(i=250;i<=350;i++)
   {
	putpixel(i,250,RED);
   }
   for(i=350,j=250;j<=350;i--,j++)
   {
	putpixel(i,j,RED);
   }
   getch();
   closegraph();
}
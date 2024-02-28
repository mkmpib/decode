#include <graphics.h>
#include <conio.h>
 
main()
{
	int gd = DETECT, gm;


	

	//init graphics
	initgraph(&gd, &gm, (char*)"");
	/*
	if you are using turboc2 use below line to init graphics:
	initgraph(&gd, &gm, "C:/TC/BGI");
	*/

	//first circle from point(100,100)
	circle(100,100,50);

	//second circle from point(200,200)
	circle(200,200,50);

	//third circle from point(center,center)
	circle(getmaxx()/2,getmaxy()/2,50);

	getch();
	closegraph();
	return 0;
}
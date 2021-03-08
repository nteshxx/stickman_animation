#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void sceneOne();
void sceneTwo();


int main()
{
int gdriver=DETECT,gmode,err;

initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
err = graphresult();

    if (err != grOk) {
	/* error occurred */
	printf("Graphics Error: %s\n", grapherrormsg(err));
	return 0;
    }

sceneTwo();
cleardevice();
delay(500);
sceneOne();

getch();
closegraph();

return 0;
}


//SCENE2

void sceneTwo() {
    outtextxy(110,180,"DO NOT TRY TO RECREATE THE STUNTS PERFORMED IN THIS FILM.");
    outtextxy(110,200,"ALL STUNTS SHOWN IN THIS FILM ARE CODED USING C");
    outtextxy(110,220,"PROGRAMMING LANGUAGE, NOTHING IS REAL.");
    outtextxy(110,240,"EVERYTHING IN THIS FILM IS WORK OF FICTION.");
    outtextxy(120,310,"press any key to continue!");
    getch();
}


//SCENE1

void sceneOne() {

int i, xi, legacx, legacy;
int radius = 10,x2,yac,xac, x, y, midy,getmaxx;
int upsr,losr,xb,yb;

    x = 100;
    x2=500;
    midy = 379;
    y = midy - 100;
    getmaxx=638;
    upsr=100;   //upperscreen
    losr=379;   //lowerscreen

/* opening credits */

outtextxy(120,180,"CODED BY");
delay(2700);

settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(120,206,"NITESH YADAV");
delay(6000);
cleardevice();
delay(750);


/* loading animation  */

settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
xi=170;
outtextxy(170,180,"PROCESSING");
for(i=0;i<150;i++)
{
delay(50);
bar(xi,200,xi,220);
xi += 2;

}
cleardevice();
delay(1600);

/* main animation part */
/*
     * used 5 stick man (still/image)
     * position to get walking animation
*/
 settextstyle(3,HORIZ_DIR,3);  //for dialogues


 while (x < 180) {
	// clears graphic screen
	cleardevice();

	setlinestyle(SOLID_LINE, 1, 3);
	// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);

	// image 1  - first position of stick man

	//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		//leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	// hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);




	//stickmanwithgun
	circle(x, y, radius);  //sticman1
	line(x, y + radius, x, y + radius + 50); //stickman1

	// leg design
	line(x, y + radius + 50, x - 10, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 10, x - 15, y + radius + 30);
	line(x - 15, y + radius + 30, x + 15, y + radius + 40);

	//text saying hello
	 if(x<130)
	 outtextxy(x-18,206,"Hey!!");

	if(x>140)
	outtextxy(x-80,206,"I've a surprise for you!! ");

	delay(120);

	// image 2 - second position of stick man
	cleardevice();
		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		// leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	// hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);



	//forwarding the position of stick man
	x+=3;

	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);
	line(x + 5, y + radius + 25, x + 15, y + radius + 45);

	 if(x<130)
	 outtextxy(x-18,206,"Hey!!");

	 if(x>140)
	outtextxy(x-80,206,"I've a surprise for you!! ");

	delay(120);

	// image 3
	cleardevice();
	setlinestyle(SOLID_LINE, 1, 3);

		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		// leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	//hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);


	line(0, midy, getmaxx, midy);
	x+=2;
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);

	// leg design
	line(x, y + radius + 50, x - 20, midy);
	line(x, y + radius + 50, x + 20, midy);

	// hand motion
	line(x, y + radius + 5, x - 20, y + radius + 20);
	line(x - 20, y + radius + 20, x - 20, y + radius + 30);
	line(x, y + radius + 5, x + 20, y + radius + 25);
	line(x + 20, y + radius + 25, x + 30, y + radius + 30);

	if(x<130)
	outtextxy(x-18,206,"Hey!!");

	if(x>140)
	outtextxy(x-80,206,"I've a surprise for you!! ");

	delay(120);

	// image 4
	cleardevice();
	x+=3;

		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		// leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	//hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);

	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);

	//leg design
	line(x, y + radius + 50, x - 8, midy - 30);
	line(x - 8, midy - 30, x - 25, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 12, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 10);
	line(x - 10, y + radius + 10, x - 10, y + radius + 30);
	line(x, y + radius + 5, x + 15, y + radius + 20);
	line(x + 15, y + radius + 20, x + 30, y + radius + 20);

	if(x<130)
	outtextxy(x-18,206,"Hey!!");

	if(x>140)
	outtextxy(x-80,206,"I've a surprise for you!! ");

	delay(120);

	// image 5
	cleardevice();
	x+=2;
		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		//leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	// hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);



	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);

	// leg design
	line(x, y + radius + 50, x + 3, midy);
	line(x, y + radius + 50, x + 8, midy - 30);
	line(x + 8, midy - 30, x - 20, midy);

	// hand motion
	line(x, y + radius + 5, x - 15, y + radius + 10);
	line(x - 15, y + radius + 10, x - 8, y + radius + 25);
	line(x, y + radius + 5, x + 15, y + radius + 20);
	line(x + 15, y + radius + 20, x + 30, y + radius + 20);
	x+=3;

	if(x<130)
	outtextxy(x-18,206,"Hey!!");

	if(x>140)
	outtextxy(x-80,206,"I've a surprise for you!! ");

	delay(120);

    }
    //every thing in position now pullout gun and fire
	cleardevice();
		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		// leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	// hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);



	// forwarding the position of stick man
	x++;

	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun
	// gunn
	bar(x +10,y + radius +25, x + 15 ,y+radius+35 );
	bar(x+15 , y + radius +25, x + 20 ,y+radius + 45 );
	delay(700);

	//pointing the gun
		cleardevice();
		// road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(x2, y + radius, x2, y + radius + 50);
	circle(x2,y,radius);
		// leg design
	line(x2, y + radius + 50, x2 + 10, midy);
	line(x2, y+ radius + 50, x2 - 5, midy - 30);
	line(x2 - 5, midy - 30, x2 - 5, midy);

	// hand motion
	line(x2, y + radius + 5, x2 + 10, y + radius + 20);
	line(x2 + 10, y + radius + 20, x2 + 10, y + radius + 45);
	line(x2, y + radius + 5, x2 - 5, y + radius + 25);
	line(x2 - 5, y + radius + 25, x2 - 15, y + radius +45);



	// forwarding the position of stick man
	x++;

	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	//leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	//hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun
	//gunn
	bar(x + 10,y + radius +25, x + 15 ,y+radius + 35);
       bar(x + 10 , y + radius +20, x + 35 ,y+radius + 25 ); //barrel
       rectangle( x+13 , y+radius +23, x+25, y+radius + 30);
	delay(120);

	xb=x+10;
	yb=y+radius;
	//bullet travelling to coolstickman
	xac=x2;
	yac=y;
	legacy=midy;
	legacx=x2+10;

	while(xb<465)
	{
	//
	legacy-=3;
	legacx-=2;
	xac+=2;
	yac+=3;
	//should be corrected in next while loop
	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, y + radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, y + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, y+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac-3, yac + radius , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac-3, yac + radius , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun

	// gunn
	bar(x + 10,y + radius +25, x + 15 ,y+radius + 35);
       bar(x + 10 , y + radius +20, x + 35 ,y+radius + 25 ); //barrel
       rectangle( x+13 , y+radius +23, x+25, y+radius + 30);
       //dialogue
       if(xb<465)
       outtextxy(478,206,"Damn!!!");

       //bullet travelling
	bar(xb,yb+20,xb+7,yb+22  );
	xb+=15;
	delay(100);


	}
	//image for bullet hit with the leg
	//should be corrected in next while loop
	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, y + radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, y + radius + 50, legacx+3, legacy-12);  //kicks the bullet
	line(x2, y+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius + 5, xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius + 5, xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun

	// gunn
	bar(x + 10,y + radius +25, x + 15 ,y+radius + 35);
       bar(x + 10 , y + radius +20, x + 35 ,y+radius + 25 ); //barrel
       rectangle( x+13 , y+radius +23, x+25, y+radius + 30);


       //bullet travelling
	bar(xb,yb+20,xb+7,yb+22  );
	xb+=15;
	delay(80);


       //bullet travelling upward
       while(xb<639)
	{
	//
	legacy+=3;
	legacx+=2;
	xac-=2;
	yac-=3;
	//should be corrected in next while loop
	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, y + radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, y + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, y+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius+5 , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius+5 , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//dialogue
	 if(xb<580)
	 outtextxy(478,206,"Damn!!!");


	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun

	// gunn
	bar(x + 10,y + radius +25, x + 15 ,y+radius + 35);
       bar(x + 10 , y + radius +20, x + 35 ,y+radius + 25 ); //barrel
       rectangle( x+13 , y+radius +23, x+25, y+radius + 30);


       //bullet travelling
	bar(xb,yb+20,xb+7,yb+22 );
	xb+=9;
	yb-=6;
	delay(80);

	}

	//correction for while loop
	 //4th while
    while(yb>80)
	{
	//
	//should be corrected in next while loop
	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, y + radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, y + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, y+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius+5 , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius+5 , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);
	//dialogue
	outtextxy(400,206,"Here I'm the one...");
	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun

	// gunn
	bar(x +10,y + radius +25, x + 15 ,y+radius+35 );
	bar(x+15 , y + radius +25, x + 20 ,y+radius + 45 );

       //bullet travelling
	bar(xb,yb+20,xb+7,yb+22 );
	xb-=9;
	yb-=6;
	delay(80);

	}
	//correction for while loop
      //5th while loop reverse fire
	 while(xb>192)
	{
	//
	//should be corrected in next while loop
	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, y + radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, y + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, y+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius+5 , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius+5 , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//DIALOGUE
	if(xb>380)
	outtextxy(370,206,"Who gives surprises.");
	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(x, y, radius);
	line(x, y + radius, x, y + radius + 50);


	// leg design
	line(x, y + radius + 50, x - 15, midy);
	line(x, y + radius + 50, x + 10, midy - 30);
	line(x + 10, midy - 30, x + 10, midy);

	// hand motion
	line(x, y + radius + 5, x - 10, y + radius + 20);
	line(x - 10, y + radius + 20, x - 10, y + radius + 45);
	line(x, y + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(x + 5, y + radius + 25, x + 15, y + radius + 25); //hand with gun

	// gunn
	bar(x +10,y + radius +25, x + 15 ,y+radius+35 );
	bar(x+15 , y + radius +25, x + 20 ,y+radius + 45 );

       //dialgue
       if(xb<370)
       outtextxy(x-40,206,"Oh no!!!");

       //bullet travelling
	bar(xb,yb+20,xb+7,yb+22 );
	xb-=9;
	yb+=6;
	delay(80);

	}

	//BULLET IMPACT ON STICMAN WITH GUNN
	while(xb>100 )
	{
	//correction for going below lower fram3


	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, yac+ radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, yac + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, yac+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius+5 , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius+5 , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(xb, y, radius);
	line(xb, yb + radius, x, y + radius + 50);


	// leg design
	line(xb, yb + radius + 50, x - 15, midy);

	// hand motion
	line(xb, yb + radius + 5, x - 10, y + radius + 20);
	line(xb - 10, yb + radius + 20, x - 10, y + radius + 45);
	line(xb, yb + radius + 5, x + 5, y + radius + 25);  //up elbow right
	line(xb + 5, yb + radius + 25, x + 15, y + radius + 25); //hand

       //bullet travelling = body travelling
	xb-=9;
	yb+=6;
	x-=3;
	y+=5;

	delay(50);

	}

      //impact on head to the ground
	while(xb>30)
	{
	//correction for going below lower fram3


	cleardevice();
		//pointing the gun
		//road for stick man
	line(0, midy, getmaxx, midy);
	line(0,upsr,getmaxx,upsr);
	line(getmaxx,upsr,getmaxx,losr);
	line(1,upsr,1,losr);
		//coolstickman
	line(xac, yac + radius, x2, yac+ radius + 50);
	circle(xac,yac,radius);
		// leg design
	line(x2, yac + radius + 50, legacx, legacy);  //kicks the bullet
	line(x2, yac+ radius + 50, x2 - 5, midy - 30); //no change
	line(x2 - 5, midy - 30, x2 - 5, midy); //no change

	// hand motion
	line(xac, yac + radius+5 , xac + 10, yac + radius + 20);
	line(xac + 10, yac + radius + 20, xac + 10, yac + radius + 45);
	line(xac, yac + radius+5 , xac - 5, yac + radius + 25);
	line(xac - 5, yac + radius + 25, xac - 15, yac + radius +45);

	//stickman with gunn
	setlinestyle(SOLID_LINE, 1, 3);
	line(0, midy, getmaxx, midy);
	circle(xb, y, radius);

       // leg design

       //bullet travelling = body travelling
	xb-=9;
	yb+=6;
	x-=3;
	y+=5;

	delay(50);

 }

delay(2500);
/* main animation part */
//end credits
cleardevice();
settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(220,206,"THE END");
getch();

}
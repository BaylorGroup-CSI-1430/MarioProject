/*
#include <iostream>

#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char ** argv)
{

    SDL_Plotter g(1000,1000);
    bool stopped = false;
    bool colored = false;
    int x,y, xd, yd;
    int R,G,B;

    //RGB values for red (Can change to what ever color though)
    // Black BAckground. If you need to change the colors you can go to html colors to change the rgb.
    R = 0;
	G = 0;
    B = 0;
    
    // R is red, G is green, and b is Blue. These colors can create any color. 



    while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer) the 0.001 is so it covers the whole screen has the natural color of the background. 
            x = 0.001;
			y = 0.001;


// the 1000 in the x and Y is for placement of the back ground and 1000, 1000 covers everything. 

			for(xd = 0; xd < 1000 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 1000 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}

		    //RGB values for red (Can change to what ever color though)
		    // Medium level orange floor.
    R = 230;
	G = 162;
    B = 28;



    while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 175 ;
			y = 500 ;



			for(xd = 0; xd < 600 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 50 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}


				    //RGB values for red (Can change to what ever color though)
				    // Bottom Yellow level for .
    R = 229;
	G = 219;
    B = 60;



    while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 1 ;
			y = 700 ;



			for(xd = 0; xd < 400 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 50 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}

						    //RGB values for red (Can change to what ever color though)
						    // Yellow
    R = 229;
	G = 219;
    B = 60;



    while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 600 ;
			y = 700 ;



			for(xd = 0; xd < 400 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 50 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}

		//  Neon green

		    R = 99;
	G = 237;
    B = 50;



    while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 600 ;
			y = 300 ;



			for(xd = 0; xd < 400 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 50 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}
//// Top Neon Green
		 R = 99;
	G = 237;
    B = 50;


		while (!g.getQuit())
    {
		if(!stopped){

//Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 1 ;
			y = 300 ;



			for(xd = 0; xd < 400 && x + xd < g.getCol(); xd++ ){
				for(yd = 0; yd < 50 && y + yd < g.getRow(); yd++ ){
					if(colored){
						g.plotPixel(x + xd, y + yd, R, G, B);
					}
					else{
					    g.plotPixel(x + xd, y + yd, R, G, B);
					}

				}
			}
		}

		if(g.kbhit()){
			g.getKey();
		}

		if(g.getMouseClick(x,y)){
			stopped = !stopped;
		}



		g.update();

    }
}
}
    }
}
}

}
*/

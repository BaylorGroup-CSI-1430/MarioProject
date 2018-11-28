//
//  main.cpp
//  MarioProject
//
//  Created by hao sheng wu on 11/11/18.
//  Copyright © 2018 Hao Sheng. All rights reserved.
//

//  main.cpp
//  MarioProject
//
//  Created by hao sheng wu on 11/11/18.
//  Copyright © 2018 Hao Sheng. All rights reserved.
//
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <math.h>
#include <stdio.h>
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char ** argv)
{
    const int windowHeight = 500;
    const int windowWidth = 1000;
    SDL_Plotter g(windowHeight,windowWidth);   // makes width and height of play window
    
    bool stopped = false;
    
    int width = 20;
    int height = 20;
    int X = 200;
    int Y = 200;
     int velo = 10;
    bool jump = true;
    
    while (!g.getQuit())
    {
       
        //input
        if(g.getKey() == DOWN_ARROW)    // allows you to move
        {
            g.playSound("jump-big.wav");
            Y += 1;    // ensures you do not go off screen
        }
        else if (g.getKey() == UP_ARROW)
        {
            
            g.plotPixel(5, 5, 123, 123, 123);
            
            int Yold = Y;
            
            while(jump == true)
            {
                X+=2;
                Y-=velo;
                velo-=0.5;
                
                if(Y == Yold){
                    jump = false;
                }
                
            }
            jump = true;
           
            
        }
        else if (g.getKey() == RIGHT_ARROW)
        {
              g.playSound("jump-big.wav");
            X = min(X + 1, windowWidth - width);
        }
        else if (g.getKey() == LEFT_ARROW)
        {
            X = max(X - 1, 0);
        }
        
        // draw background
        for (int col = 0; col < windowWidth; col++)
        {
            for (int row = 0; row < windowHeight; row++)
            {
                g.plotPixel(col,row, 300,200,225);
                
            }
        }
        //draw mario
        for ( int col = X; col < width + X; col++)
        {
            for (int row = Y; row < height + Y; ++row)
            {
                g.plotPixel(col,row,10,20,30);
            }
        }
        
        if(g.kbhit()){
            g.getKey();
        }
        
        g.update();
    }
}






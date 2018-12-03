//
//  main.cpp
//  MarioProject
//
//  Created by Amanda Cervantes on 11/13/18.
//  Copyright © 2018 SDL_tutorial. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "SDL_Plotter.h"
#include "Point.h"
#include "functions.h"
#include "opensprite.h"



using namespace std;


//Scene textures
//LTexture gBannerTexture;
//LTexture gSpriteSheetTexture;


int main(int argc, char ** argv)
{
    //This sets the background to be 480 x 640 pixels
    SDL_Plotter g(480,640);
    
    //initialization of variables to be later used with the functions
    bool stopped = false;
    bool colored = false;
    bool moved = false;
    int x,y, xd, yd;
    int R,G,B;
    int startx = 80;
    int starty = 400;
    char keyname = '\0';
    //The X and Y offsets of the dot
    int mPos, mPosY;
    
    int width = 20;
    int height = 20;
    int X = 200;
    int Y = 200;
    int velo = 10;
    bool jump = false;
    int count = 0;
    
    //The velocity of the dot
    int mVelX = 80, mVelY = 400;
    //static const int DOT_WIDTH = 24;
    //static const int DOT_HEIGHT = 32;
    
    //Maximum axis velocity of the dot
    static const int DOT_VEL = 10;
    
    
    //RGB values for red (Can change to what ever color though)
    // Pink
    //    R = 239;
    //    G = 13;
    //    B = 246;
    
    //    //The window we'll be rendering to
    //    gWindow = g.getwindow();
    //    //The window renderer
    //    gRenderer = g.getrenderer();
    //
    //    gTexture = g.gettexture();
    //    loadmario();
    
    //to open the .txt file that holds the "pictures" of the sprites
    ifstream infile;
    ofstream outfile;
    Picture pics[PICS];
    
    infile.open("/Users/Calypso/Dropbox/Shared/Game2/sprite.txt");
    if (!infile)
    {
        cout << "Error: Picture not found!" << endl;
        return 1;
    }
    
    // outfile.open("foo.testing.txt");
    // if (!outfile){
    //     return 1;
    // }
    
    int upics = 0;
    //read in used number of pictures
    infile >> upics;
    char readbuffer[COLS+1];
    cout << "DEBUG|upics:" <<upics << endl;
    
    //creates a loop to get the exact picture by using a function from opensprite.h
    for (int i = 0; i<upics; i++)
    {
        readImageFromBoothGIF(infile, pics, i);
        //        pics[i].print(cout);
    }
    
    //close the file
    infile.close();
    
    //creates the object Mario
    Mario mario;
    
    
/***************** Miles' code ****************/
    while (!g.getQuit())
    {
        
        R = 0;
        G = 0;
        B = 0;
        if(!stopped){
            
            g.clear();
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 0;
            y = 0;
            
            
            
            for(xd = 0; xd < 640 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 480 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //            g.update();
        }
        
        
        //        if(g.kbhit()){
        //            g.getKey();
        //        }
        //
        //        if(g.getMouseClick(x,y)){
        //            stopped = !stopped;
        //        }
        
        //RGB values for red (Can change to what ever color though)
        // bottom yellow
        //        R = 240;
        //        G = 255;
        //        B = 0;
        //
        
        //        while (!g.getQuit())
        //        {
        R = 239;
        G = 13;
        B = 246;
        
        
        if(!stopped){
            
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 112; //175 ;
            y = 240; //500 ;
            
            //was 600x50
            
            for(xd = 0; xd < 386 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 24 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //                g.update();
        }
        
        //            if(g.kbhit()){
        //                g.getKey();
        //            }
        //
        //            if(g.getMouseClick(x,y)){
        //                stopped = !stopped;
        //            }
        
        
        //RGB values for red (Can change to what ever color though)
        // Bottom Blue.
        //            R = 26;
        //            G = 18;
        //            B = 107;
        R = 240;
        G = 255;
        B = 0;
        
        
        
        
        //            while (!g.getQuit())
        //            {
        if(!stopped){
            
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 0 ;
            y = 336; //700 ;
            
            
            // was 400x50
            for(xd = 0; xd < 256 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 24 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //                    g.update();
        }
        
        //                if(g.kbhit()){
        //                    g.getKey();
        //                }
        //
        //                if(g.getMouseClick(x,y)){
        //                    stopped = !stopped;
        //                }
        
        //RGB values for red (Can change to what ever color though)
        // green
        R = 18;
        G = 107;
        B = 18;
        
        
        
        //                while (!g.getQuit())
        //                {
        if(!stopped){
            
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 384;  //600 ;
            y = 336;  //700 ;
            
            // was 400x50
            
            for(xd = 0; xd < 256 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 24 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //                        g.update();
        }
        
        //                    if(g.kbhit()){
        //                        g.getKey();
        //                    }
        //
        //                    if(g.getMouseClick(x,y)){
        //                        stopped = !stopped;
        //                    }
        
        // green
        
        R = 18;
        G = 107;
        B = 18;
        
        
        
        //                    while (!g.getQuit())
        //                    {
        
        
        if(!stopped){
            
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 384; //600 ;
            y = 144;  //300 ;
            
            
            //was400x50
            for(xd = 0; xd < 256 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 24 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //                            g.update();
        }
        
        //                        if(g.kbhit()){
        //                            g.getKey();
        //                        }
        //
        //                        if(g.getMouseClick(x,y)){
        //                            stopped = !stopped;
        //                        }
        //// Top Blue
        //                        R = 26;
        //                        G = 18;
        //                        B = 107;
        R = 240;
        G = 255;
        B = 0;
        
        
        
        //                        while (!g.getQuit())
        //                        {
        if(!stopped){
            
            //Sets position of the square (If you go below 110 or over 830 the square is off the sdl screen at least on my computer)
            x = 0 ;
            y = 144;  //300 ;
            
            
            // was 400x50
            for(xd = 0; xd < 256 && x + xd < g.getCol(); xd++ ){
                for(yd = 0; yd < 24 && y + yd < g.getRow(); yd++ ){
                    if(colored){
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    else{
                        g.plotPixel(x + xd, y + yd, R, G, B);
                    }
                    
                }
            }
            //                                g.update();
        }
        
/******************** end of Miles' code ******************/
        
/******************** Amanda's code ***********************/
        
        //this creates a flag that stores the key the user taps
        if(g.kbhit()){
            keyname = g.getKey();
            moved = true;
        }
        
        //this if statement creates a way for the user to exit the game (if they push 'Q')
        if(g.getMouseClick(x,y) || keyname == 'Q'){
            stopped = !stopped;
            g.getQuit();
        }
        
        // if the user doesn't exit the game
        if (!g.getQuit())
        {
            
            //                            plotmario();
            
            //an array to have the sprite be set at a certain locaton
            if(!moved)
            {
                pics[1].setRowsCols(24, 20);
                
            }
//            else if (g.getKey() == ' ')
//            {
//
//                count++;
//                if (x == 1 && (x + Mario::DOT_WIDTH < SCREEN_WIDTH))
//                {
//                    x += DOT_VEL / JUMPSTEPS;
//                }
//                if (x == 0 && (x - Mario::DOT_WIDTH > 0))
//                {
//                    x -= DOT_VEL / JUMPSTEPS;
//
//                }
//
//                if (count < JUMPSTEPS / 2 )
//                {
//                    y -= JUMPHEIGHT;
//
//                }
//                if (count >=JUMPSTEPS / 2)
//                {
//                    y += JUMPHEIGHT;
//
//                }
//            }
            
            //if the user hits a certain key, it tells the sprite to move in a specific way
            else if (keyname == LEFT_ARROW)
            {
                
                pics[1].setRowsCols(24, 20);
                mVelX -= DOT_VEL;
                
            }
            else if (keyname == RIGHT_ARROW)
            {
                
                pics[1].setRowsCols(24, 20);
                mVelX += DOT_VEL;
                
            }
//            else if (keyname == UP_ARROW)
//            {
//
//                pics[1].setRowsCols(24, 20);
//                mVelY -= DOT_VEL;
//
//            }
//            else if (keyname == DOWN_ARROW)
//            {
//
//                pics[1].setRowsCols(24, 20);
//                mVelY += DOT_VEL;
//
//        }
        
/************ Hao's code ***********/
            
            else if (keyname == UP_ARROW)
            {
                int Yold = Y;
                for ( int i = 0; i < 6; i++)
                {
                    x+=1;
                    if(i <= 2)
                    {
                        Y -= velo;
                    }
                    else if(i <= 5 && i >=3)
                    {
                        Y += velo;
                    }
                    g.update();
                    //sleep(10);
                }
            }
            
            /************ end Hao's code ***********/
            
            //to update the picture where the user has moved it
            pics[1].drawPicture(g, mVelY, mVelX);

            //update the background
            g.update();
            //place a delay so the user can see Mario run
            SDL_Delay(50);
        }
        //            }
    }
}





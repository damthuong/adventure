#pragma once 
#include <SFML/Graphics.hpp> 
#include<Windows.h> 

#define screenWidth 1200
#define screenHeight 793 
#define titleGame "Adventure_Game"
#define WALL_WIDTH 50 
#define WALL_HEIGHT 50 
#define MAX_Y_NINJA 750 
#define CREEP_WIDTH 50 
#define CREEP_HEIGHT 50 
#define SIZE_BACKGROUD 5568

#define groundY (screenHeight-75)

void CursorGotoXY(int x, int y);
int GetRandomValue(int vlMin, int vlMax);
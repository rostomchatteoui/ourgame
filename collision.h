#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
	
#include <SDL/SDL.h>
	
typedef struct{
int x, y;
int r;
}Circle;
	
	
SDL_Color GetPixel(SDL_Surface *surface, int x, int y);
	
int collision_Parfaite(SDL_Surface *calque, SDL_Surface *perso, SDL_Rect posperso, int decalage, int direction);
	
	#endif





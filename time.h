#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>





typedef struct 
{
        SDL_Surface *temps;
	SDL_Rect position_temps;

	 
	TTF_Font *police;

	int tempsactuel;
	int tempsprecedent;
	

	
}temps;


SDL_Surface * afficher_chrono(SDL_Surface *ecran , SDL_Surface *Background , SDL_Rect p , int running );


























#endif /* FONCTIONS_H_ */

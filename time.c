#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>


#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <time.h>


SDL_Surface * afficher_chrono(SDL_Surface *ecran , SDL_Surface *Background , SDL_Rect p , int running  )
{

 SDL_Surface *texte = NULL ; 
 SDL_Rect position_temps,positionecran;
 SDL_Event event;
  
 TTF_Font *police = NULL;
 SDL_Color couleurNoire = {0, 0, 0}, couleurBlanche = {255, 255, 255};//pour specifier une couleur
 int continuer = 1;
 int tempsActuel = 0, tempsPrecedent = 0, compteur = 0,fps=0,fpm=0,fph=0;
 char temps[30] = ""; 
 float dt;

SDL_Init(SDL_INIT_VIDEO);
TTF_Init();
ecran=SDL_SetVideoMode(640,480,32,SDL_HWSURFACE|SDL_DOUBLEBUF);


    //Chargement de la police
    police = TTF_OpenFont("arial.ttf", 25);

    // Initialisation du temps et du texte 
    tempsActuel = SDL_GetTicks();
    sprintf(temps, "Temps : %d", compteur);
   
    texte = TTF_RenderText_Blended(police, temps, couleurNoire);//pour blitter le texte sur une image tt en respectant la transparence

    while (continuer)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer= 0;
                break;
        }

SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

        tempsActuel = SDL_GetTicks();
          dt=tempsActuel - tempsPrecedent;
         
      if ( dt >= 1000) // Si 1000 ms au moins se sont écoulées 
        {
          compteur += 1000; // On rajoute 1000 ms au compteur 
      sprintf(temps,"Temps:%d",compteur); //on ecrit le nouveau temps

          SDL_FreeSurface(texte); //on supprime la s preced
            texte = TTF_RenderText_Shaded(police, temps, couleurNoire, couleurBlanche); // On écrit la chaîne temps dans la SDL_Surface 
            tempsPrecedent = tempsActuel; // mis à jour du tempspreced 
        }

        position_temps.x = 200;
        position_temps.y = 230;
        SDL_BlitSurface(texte, NULL, ecran, &position_temps); 
        SDL_Flip(ecran);

    }

    TTF_CloseFont(police);
    TTF_Quit();

    SDL_FreeSurface(texte);
    SDL_Quit();

    return EXIT_SUCCESS;
}

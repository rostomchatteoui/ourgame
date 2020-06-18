#include "collision.h"
	

	
	
SDL_Color GetPixel(SDL_Surface *surface,int x,int y){
  SDL_Color color;
  Uint32 col = 0;
	
   //determine position
  char* pPosition = (char*) surface->pixels;
	
  //offset by y
   pPosition += surface->pitch * y;
	
	    
 //offset by x
pPosition += (surface->format->BytesPerPixel * x);
	
	
//copy pixel data
memcpy(&col, pPosition, surface->format->BytesPerPixel);
	
	
//convert color
SDL_GetRGB(col,surface->format,&color.r,&color.g,&color.b);
	
return color;
	}
	
int collision_Parfaite(SDL_Surface *calque, SDL_Surface *perso, SDL_Rect posperso, int decalage, int direction){
SDL_Color col;
int c = 0;
	
if(direction == 0){//Up
	col=GetPixel(calque,posperso.x+perso->w +decalage,posperso.y+(perso->h/2));
	
		}else if(direction == 1){//Down
			col=GetPixel(calque,posperso.x ,posperso.y+(perso->h/2)+decalage);
	
		}else if(direction == 2){//Rigth
			col=GetPixel(calque,posperso.x+(perso->w/2)+decalage ,posperso.y);
	
		}else if(direction == 3){//Left
			col=GetPixel(calque,posperso.x+(perso->w/2),posperso.y+perso->h +decalage);
	
		}
	
		if ((col.r == 0) && (col.b == 0) && (col.g == 0)){
			c = 1;
		}else if((col.r == 255) && (col.b == 0) && (col.g == 0)){
			c = 2;
		}else if((col.r==255)&&(col.b==255)&&(col.g==255)){
			c = 3;
		}
		
		return c;
	}

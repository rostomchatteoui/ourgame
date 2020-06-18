#ifndef BACKGROUND_H_
#define BACKGROUND_H_

typedef struct Background {
	SDL_Surface* Background;
	SDL_Rect BGP;
}BGS;

typedef struct world_objects {
	SDL_Surface *GR1;
	SDL_Surface *GRS1;
	SDL_Surface *GR2;
	SDL_Surface *GRXS;
	SDL_Surface *GRE;
	SDL_Surface *Spikes;
	SDL_Surface *Box;
	SDL_Surface *Key;
	SDL_Rect GR1P1;
	SDL_Rect GR1P2;
	SDL_Rect GR1P3;
	SDL_Rect GRS1P;
	SDL_Rect GRXSP1;
	SDL_Rect GRXSP2;
	SDL_Rect GRXSP3;
	SDL_Rect GRXSP4;
	SDL_Rect GRXSP5;
	SDL_Rect GRXSP6;
	SDL_Rect GRXSP7;
	SDL_Rect GRXSP8;
	SDL_Rect GRXSP9;
	SDL_Rect GRXSP10;
	SDL_Rect GRXSP11;
	SDL_Rect GRXSP12;
	SDL_Rect GRXSP13;
	SDL_Rect GR2P1;
	SDL_Rect GR2P2;
	SDL_Rect GREP;
	SDL_Rect SpkP1;
	SDL_Rect SpkP2;
	
}WO;

void Init_All_Objs(WO *WOS);
void Init_BG(BGS *BG);
void Display_All_World_Objects(WO *WOS, SDL_Surface *Screen);
void Display_BG(BGS *BG,SDL_Surface *Screen);
SDL_Surface* Anim_Background0(SDL_Surface *Image, SDL_Surface *Screen, SDL_Rect BGP, int *NB);
void Anim_PlayB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NP);
void Anim_SetsB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NS);
void Anim_QuitB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NQ);

#endif /* BACKGROUND_H_ */

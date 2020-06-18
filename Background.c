#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <stdlib.h>
#include <stdio.h>
#include "Background.h"









void Init_All_Objs(WO *WOS)
{
	WOS->GR1=IMG_Load("GR1.png");
	WOS->GRS1=IMG_Load("GRS1.png");
	WOS->GR2=IMG_Load("GR2.png");
	WOS->GRXS=IMG_Load("GRXS.png");
	WOS->GRE=IMG_Load("GRE.png");
	WOS->Spikes=IMG_Load("Spikes.png");
	
	WOS->GR1P1.x=0;
	WOS->GR1P1.y=650;
	WOS->GR1P2.x=1997;
	WOS->GR1P2.y=650;
	WOS->GR1P3.x=2105;
	WOS->GR1P3.y=294;
	WOS->GR2P1.x=1380;
	WOS->GR2P1.y=548;
	WOS->GR2P2.x=1729;
	WOS->GR2P2.y=548;
	WOS->GRXSP1.x=3356;
	WOS->GRXSP1.y=578;
	WOS->GRXSP2.x=3495;
	WOS->GRXSP2.y=518;
	WOS->GRXSP3.x=3628;
	WOS->GRXSP3.y=458;
	WOS->GRXSP4.x=3766;
	WOS->GRXSP4.y=390;
	WOS->GRXSP5.x=3680;
	WOS->GRXSP5.y=162;
	WOS->GRXSP6.x=3496;
	WOS->GRXSP6.y=220;
	WOS->GRXSP7.x=2998;
	WOS->GRXSP7.y=206;
	WOS->GRXSP8.x=2396;
	WOS->GRXSP8.y=206;
	WOS->GRXSP9.x=1948;
	WOS->GRXSP9.y=205;
	WOS->GRXSP10.x=1730;
	WOS->GRXSP10.y=205;
	WOS->GRXSP11.x=1510;
	WOS->GRXSP11.y=205;
	WOS->GRXSP12.x=1290;
	WOS->GRXSP12.y=205;
	WOS->GRXSP13.x=1072;
	WOS->GRXSP13.y=205;
	WOS->GRS1P.x=3950;
	WOS->GRS1P.y=310;
	WOS->SpkP1.x=2898;
	WOS->SpkP1.y=264;
	WOS->SpkP2.x=2295;
	WOS->SpkP2.y=264;
	WOS->GREP.x=464;
	WOS->GREP.y=0;
}


void Init_BG(BGS *BG)
{
	BG->Background=IMG_Load("background.png");
	BG->BGP.x=0;
	BG->BGP.y=420;
}

void Display_All_World_Objects(WO *WOS, SDL_Surface *Screen)
{
	SDL_Rect Rep1,Rep2,Rep3,Rep4,Rep5,Rep6,Rep7,Rep8,Rep9,Rep10,Rep11,Rep12,Rep13,Rep14,Rep15,Rep16,Rep17,Rep18,Rep19,Rep20,Rep21,Rep22;

	Rep1=WOS->GR1P1;
	Rep2=WOS->GR1P2;
	Rep3=WOS->GR1P3;
	Rep4=WOS->GRS1P;
	Rep5=WOS->GRXSP1;
	Rep6=WOS->GRXSP2;
	Rep7=WOS->GRXSP3;
	Rep8=WOS->GRXSP4;
	Rep9=WOS->GRXSP5;
	Rep10=WOS->GRXSP6;
	Rep11=WOS->GRXSP7;
	Rep12=WOS->GRXSP8;
	Rep13=WOS->GRXSP9;
	Rep14=WOS->GRXSP10;
	Rep15=WOS->GRXSP11;
	Rep16=WOS->GRXSP12;
	Rep17=WOS->GRXSP13;
	Rep18=WOS->GR2P1;
	Rep19=WOS->GR2P2;
	Rep21=WOS->SpkP1;
	Rep22=WOS->SpkP2;
	
	SDL_BlitSurface(WOS->GR1,NULL,Screen,&Rep1);
	SDL_BlitSurface(WOS->GR1,NULL,Screen,&Rep2);
	SDL_BlitSurface(WOS->GR1,NULL,Screen,&Rep3);
	SDL_BlitSurface(WOS->GRS1,NULL,Screen,&Rep4);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep5);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep6);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep7);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep8);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep9);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep10);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep11);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep12);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep13);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep14);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep15);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep16);
	SDL_BlitSurface(WOS->GRXS,NULL,Screen,&Rep17);
	SDL_BlitSurface(WOS->GR2,NULL,Screen,&Rep18);
	SDL_BlitSurface(WOS->GR2,NULL,Screen,&Rep19);
	SDL_BlitSurface(WOS->GRE,NULL,Screen,&Rep20);
	SDL_BlitSurface(WOS->Spikes,NULL,Screen,&Rep21);
	SDL_BlitSurface(WOS->Spikes,NULL,Screen,&Rep22);
}

void Display_BG(BGS *BG,SDL_Surface *Screen)
{
	SDL_Rect Rep;

	Rep=BG->BGP;
	SDL_BlitSurface(BG->Background,NULL,Screen,&Rep);
}

SDL_Surface* Anim_Background0(SDL_Surface *Image, SDL_Surface *Screen, SDL_Rect BGP, int *NB)
{
	switch(*NB)
	{
		case(0):
		{
			Image=IMG_Load("1.jpg");
		}
		break;
		case(10):
		{
			Image=IMG_Load("2.jpg");
		}
		break;
		case(20):
		{
			Image=IMG_Load("3.jpg");
		}
		break;
		case(30):
		{
			Image=IMG_Load("4.jpg");
		}
		break;
		case(40):
		{
			Image=IMG_Load("5.jpg");
		}
		break;
		case(50):
		{
			Image=IMG_Load("6.jpg");
		}
		break;
		case(60):
		{
			Image=IMG_Load("7.jpg");
		}
		break;
		case(70):
		{
			Image=IMG_Load("8.jpg");
		}
		break;
		case(80):
		{
			Image=IMG_Load("9.jpg");
		}
		break;
		case(90):
		{
			Image=IMG_Load("10.jpg");
		}
		break;
		case(100):
		{
			Image=IMG_Load("11.jpg");
		}
		break;
		case(110):
		{
			Image=IMG_Load("12.jpg");
		}
		break;
		case(120):
		{
			Image=IMG_Load("13.jpg");
		}
		break;
		case(130):
		{
			Image=IMG_Load("14.jpg");
		}
		break;
		case(140):
		{
			Image=IMG_Load("15.jpg");
		}
		break;
		case(150):
		{
			Image=IMG_Load("16.jpg");
		}
		break;
		case(160):
		{
			Image=IMG_Load("17.jpg");
		}
		break;
		case(170):
		{
			Image=IMG_Load("18.jpg");
		}
		break;
		case(180):
		{
			Image=IMG_Load("19.jpg");
		}
		break;
		case(190):
		{
			Image=IMG_Load("20.jpg");
		}
		break;
		case(200):
		{
			Image=IMG_Load("21.jpg");
		}
		break;
		case(210):
		{
			Image=IMG_Load("22.jpg");
		}
		break;
		case(220):
		{
			Image=IMG_Load("23.jpg");
		}
		break;
		case(230):
		{
			Image=IMG_Load("24.jpg");
		}
		break;
	}
	SDL_BlitSurface(Image,NULL,Screen,&BGP);
	*NB=*NB+1;
	if(*NB==230)
	*NB=0;
	return Image;
}


void Anim_PlayB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NP)
{
	switch(*NP)
	{
		case(0):
		{
			Button=IMG_Load("P1.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(1):
		{
			Button=IMG_Load("P2.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(2):
		{
			Button=IMG_Load("P3.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(3):
		{
			Button=IMG_Load("P4.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(4):
		{
			Button=IMG_Load("P5.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(5):
		{
			Button=IMG_Load("P6.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(6):
		{
			Button=IMG_Load("P7.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(7):
		{
			Button=IMG_Load("P8.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
	}
	*NP=*NP+1;
	if(*NP==7)
	*NP=0;
}



void Anim_SetsB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NS)
{
	switch(*NS)
	{
		case(0):
		{
			Button=IMG_Load("S1.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(1):
		{
			Button=IMG_Load("S2.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(2):
		{
			Button=IMG_Load("S3.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(3):
		{
			Button=IMG_Load("S4.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(4):
		{
			Button=IMG_Load("S5.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(5):
		{
			Button=IMG_Load("S6.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(6):
		{
			Button=IMG_Load("S7.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(7):
		{
			Button=IMG_Load("S8.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
	}
	*NS=*NS+1;
	if(*NS==7)
	*NS=0;
}


void Anim_QuitB(SDL_Surface *Button, SDL_Surface *Screen, SDL_Rect Pos, int *NQ)
{
	switch(*NQ)
	{
		case(0):
		{
			Button=IMG_Load("Q1.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(1):
		{
			Button=IMG_Load("Q2.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(2):
		{
			Button=IMG_Load("Q3.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(3):
		{
			Button=IMG_Load("Q4.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(4):
		{
			Button=IMG_Load("Q5.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(5):
		{
			Button=IMG_Load("Q6.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(6):
		{
			Button=IMG_Load("Q7.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
		case(7):
		{
			Button=IMG_Load("Q8.png");
			SDL_BlitSurface(Button,NULL,Screen,&Pos);
		}
		break;
	}
	*NQ=*NQ+1;
	if(*NQ==7)
	*NQ=0;
}

























#include<stdlib.h>
#include<stdio.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include <SDL/SDL_getenv.h>

#ifdef __MINGW32__
#undef main
#endif


int main ( int argc, char** argv )
{
	SDL_Init(SDL_INIT_EVERYTHING);
	putenv("SDL_VIDEO_WINDOW_POS=center");
	SDL_ShowCursor(SDL_ENABLE);
	SDL_WM_SetIcon(SDL_LoadBMP("cb.bmp"), 0);
	SDL_Surface *ecran = SDL_SetVideoMode(650, 350 , 32, SDL_HWSURFACE |SDL_DOUBLEBUF);
	SDL_WM_SetCaption("RSI-Tetris 1.0", NULL);
	SDL_Surface *background = SDL_LoadBMP("fond.bmp");

	int continuer = 1;
	while (continuer){
		SDL_BlitSurface(background,NULL, ecran, NULL);
		SDL_Flip(ecran);
	}
}

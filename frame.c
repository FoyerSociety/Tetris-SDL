
#include "includes.h"

#define FPS_Default 1000 / 70
u32 gnTimer1;

// Initialisation des timers
void FrameInit(void)
{
	gnTimer1 = SDL_GetTicks();
}

// Attente de la frame.
void FrameWait(void)
{
	u32 nTimer2;

	// S'assurer qu'on ne va pas trop vite...
	while (1)
	{
		nTimer2 = SDL_GetTicks() - gnTimer1;
		if (nTimer2 >= FPS_Default) break;
		SDL_Delay(3);
	}
	gnTimer1 = SDL_GetTicks();
}





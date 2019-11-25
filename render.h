


enum
{
	e_RenderMode_Normal = 0,
	e_RenderMode_Scale2x,
	//
	e_RenderMode_MAX
};

// Param�tres de rendu.
struct SRender
{
	// Note : Je laisse le pointeur pScreen dans gVar.
	// On fait dans tous les cas le rendu "normal" dans pScreen. Si on a un post-effect � faire, on redirige pScreen dans un buffer secondaire, qu'on recopiera avec l'effet voulu dans l'�cran r�el une fois le trac� du jeu fini.

	SDL_Surface *pScreen2x;		// En modes 2x, ptr sur la surface �cran r�elle.
	SDL_Surface *pScreenBuf2;	// Buffer de rendu pour le jeu en modes 2x (� la place de la surface �cran r�elle).

	u8	nRenderMode;			// Mode en cours : normal / 2x.
	u8	nFullscreenMode;		// Fullscreen ou pas.

};
extern struct SRender	gRender;


void Render_InitVideo(void);
void Render_SetVideoMode(void);
void RenderFlip(u32 nSync);
void RenderRelease(void);
SDL_Surface * Render_GetRealVideoSurfPtr(void);


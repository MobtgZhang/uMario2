#pragma once

#ifndef IMG_H
#define IMG_H

# include<SDL2/SDL.h>
# include<string>

class CImg
{
private:
	SDL_Texture* tImg;
	SDL_Rect rRect;

public:
	CImg(void);
	CImg(std::string fileName, SDL_Renderer* rR);
	~CImg(void);

	void Draw(SDL_Renderer * rR, int iXOffset, int iYOffset);
	void Draw(SDL_Renderer * rR, int iXOffset, int iYOffset, bool bRoate);
	void DrawVert(SDL_Renderer * rR, int iXOffset, int iYOffset);
	void Draw(SDL_Renderer * rR, SDL_Rect rCrop, SDL_Rect rRect);

	/* ----- get & set ----- */
	SDL_Texture* getImg();
	void setImg(std::string fileName, SDL_Renderer* rR);
	SDL_Rect getRect();
};

#endif
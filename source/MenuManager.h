#pragma once

#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "CImg.h"
#include "MainMenu.h"
#include "LoadingMenu.h"
#include "AboutMenu.h"
#include "OptionsMenu.h"
#include "PauseMenu.h"

class MenuManager
{
private:
	CImg* activeOption;

	MainMenu* oMainMenu;
	LoadingMenu* oLoadingMenu;
	AboutMenu* oAboutMenu;
	OptionsMenu* oOptionsMenu;
	PauseMenu* oPauseMenu;
	//Console* oConsole;
	//LevelEditor* oLE;

public:
	MenuManager(void);
	~MenuManager(void);

	enum gameState {
		eMainMenu,
		eGameLoading,
		eGame,
		eAbout,
		eOptions,
		ePasue,
		//eLevelEditor,
	};

	gameState currentGameState;

	void Update();
	void Draw(SDL_Renderer* rR);

	void setBackgroundColor(SDL_Renderer* rR);

	void enter();
	void escape();
	void setKey(int keyID);
	void keyPressed(int iDir);

	void resetActiveOptionID(gameState ID);

	int getViewID();
	void setViewID(gameState viewID);

	CImg* getActiveOption();
	void setActiveOption(SDL_Renderer* rR);

	LoadingMenu* getLoadingMenu();
	AboutMenu* getAboutMenu();

	//Console* getConsole();
	//LevelEditor* getLE();
	OptionsMenu* getOptions();
};

#endif
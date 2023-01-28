# include "Application.h"
# include "Cfg.h"

Map* Application::oMap = new Map();
bool Application::mouseLeftPressed = false;
bool Application::mouseRightPressed = false;
int Application::mouseX = 0;
int Application::mouseY = 0;
bool Application::quitGame = false;

bool Application::movePressed = false;
bool Application::keyMenuPressed = false;
bool Application::keyS = false;
bool Application::keyW = false;
bool Application::keyA = false;
bool Application::keyD = false;
bool Application::keyShift = false;
bool Application::keyAPressed = false;
bool Application::keyDPressed = false;

Application::Application(){
    this->quitGame = false;
    this->iFPS = 0;
    this->iNumOfFPS = 0;
    this->lFPSTime = 0;

    //初始化SDL
    SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER|SDL_INIT_AUDIO);

    window = SDL_CreateWindow("uMario-2",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
                        CCFG::GAME_WIDTH,CCFG::GAME_HEIGHT,SDL_WINDOW_SHOWN);
    
    if(window == NULL){
        quitGame = true;
    }

    // --- ICOs
    std::string fileName = "files/images/ico.bmp";
    SDL_Surface* loadedSurface = SDL_LoadBMP(fileName.c_str());
    SDL_SetColorKey(loadedSurface,SDL_TRUE,SDL_MapRGB(loadedSurface->format,255,0,255));

    SDL_SetWindowIcon(window,loadedSurface);
    SDL_FreeSurface(loadedSurface);

    mainEvent = new SDL_Event();

    oMap = new Map(rR);

    // 初始化一些键值
    this->keyMenuPressed = this->movePressed = false;
    this->keyA = this->keyW = this->keyD = this->keyShift = false;
    this->keyAPressed = this->keyDPressed = this->firstDir = false;

    this->mouseX = this->mouseY = 0;

    CCFG::keyIDA = SDLK_a;
    CCFG::keyIDA = SDLK_s;
    CCFG::keyIDA = SDLK_d;
    CCFG::keyIDSpace = SDLK_SPACE;
    CCFG::keyIDShift = SDLK_LSHIFT;
}

Application::~Application(){
    delete oMap;
    delete mainEvent;
    Mix_CloseAudio();
    SDL_DestroyRenderer(rR);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Application::mainloop(){
    
}
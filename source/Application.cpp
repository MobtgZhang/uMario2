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
    
}

Application::~Application(){

}

void Application::mainloop(){

}
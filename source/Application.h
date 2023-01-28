# ifndef APPLICATION_HEADERS
# define APPLICATION_HEADERS
# include "headers.h"
# include "Map.h"

class Application{
private:
    SDL_Window* window;
    SDL_Renderer* rR;
    SDL_Event* mainEvent;

    // FPS 
    long frameTime;
    static const int MIN_FRAME_TIME = 16;

    unsigned long lFPSTime;
    int iNumOfFPS,iFPS;

    // INPUT
    static bool movePressed,keyMenuPressed,keyS,keyW,keyA,keyD,keyShift;
    static bool keyAPressed,keyDPressed;

    // true = RIGHT, false = LEFT
    bool firstDir;

    static Map* oMap;

    // Methods
    void Input();
    void MouseInput();
    void InputPlayer();
    void InputMenu();

public:
    Application();
    ~Application();
    void mainloop();

    static bool quitGame;

    void Update();
    void Draw();
    
    void resetMove();
    static void resetKeys();

    static bool mouseLeftPressed,mouseRightPressed;
    static int mouseX,mouseY;

    /* ----- get & set ----- */
    static Map* getMap();
};

# endif

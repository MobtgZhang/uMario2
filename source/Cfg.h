# ifndef CFG_HEADERS
# define CFG_HEADERS

class CCFG{
public:
    CCFG();
    ~CCFG();
    static int GAME_WIDTH,GAME_HEIGHT;

    static bool keySpace;

    static int keyIDA,keyIDS,keyIDD,keyIDSpace,keyIDShift;

    static bool canMoveBackward;
};

# endif

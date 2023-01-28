# include "Cfg.h"

CCFG::CCFG(){

}

CCFG::~CCFG(){

}
/*************  初始化静态变量  ****************/
int CCFG::GAME_WIDTH = 800;
int CCFG::GAME_HEIGHT = 448;

bool CCFG::keySpace = false;

int CCFG::keyIDA = 0;
int CCFG::keyIDD = 0;
int CCFG::keyIDS = 0;
int CCFG::keyIDSpace = 0;
int CCFG::keyIDShift = 0;

bool CCFG::canMoveBackward = true;

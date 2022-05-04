#ifndef JUEGOCPLUSPLUS_PLAYER_H
#define JUEGOCPLUSPLUS_PLAYER_H
#include <iostream>

class Player {
public:
    Player();
    // virtual ~Player();
    void CallInput(); //el joystick

protected:
    int x,y;
private:

};

#endif //JUEGOCPLUSPLUS_PLAYER_H



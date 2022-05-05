#ifndef JUEGOCPLUSPLUS_PLAYER_H
#define JUEGOCPLUSPLUS_PLAYER_H
#include <iostream>

class Player {
public:
    Player();
    // virtual ~Player();
    void CallInput(); //el joystick
    int x,y;
    int lastX,lastY;
    void ResetToSafePosition();
protected:
    //para que sean protecte tengo que hacer sus get and set
    //int x,y;

private:


};

#endif //JUEGOCPLUSPLUS_PLAYER_H




#include <iostream>
#include "header/Player.h"

using namespace  std;
Player::Player()
{
    x=1;
    y=1;
}


void Player::CallInput() {
    char UserInput= ' ';

    cin >>UserInput;
    switch (UserInput) {
        case 'w':
            lastY=y;
            y=y-1;
            break;
        case 'a':
            lastX=x;
            x--;
            break;
        case 's':
            lastY=y;
            y++;
            break;
        case 'd':
            lastX=x;
            x++;
            break;
    }
}
void  Player::ResetToSafePosition(){
    x=lastX;
    y=lastY;
}


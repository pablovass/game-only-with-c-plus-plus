//
// Created by Wasp on 5/4/2022.
// aca es donde escribimos la logica de las funciones que declararmos de .h
//
#include <iostream>
#include "header/Player.h"

using namespace  std;
Player::Player()
{
    x=1;
    y=1;
}

//Player::~Player() {    }

void Player::CallInput() {
    char UserInput= ' ';

    cin >>UserInput;
    switch (UserInput) {
        case 'w':
            y=y+1;
            cout<<"el jugador se va a mover hacia arriba"<<endl;
            break;
        case 'a':
            x--;
            cout<<"el jugador se va a mover hacia esquierda"<<endl;
            break;
        case 's':
            y--;
            cout<<"el jugador se va a mover hacia abajo"<<endl;
            break;
        case 'd':
            x++;
            cout<<"el jugador se va a mover hacia derecha"<<endl;
            break;
    }
    cout << "MI JUGADOR ESTA EN LAS CORDENADAS "<<x<<", "<<y<<endl;
}


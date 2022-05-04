#include <iostream>
#include "src/header/GameMap.h"
#include "src/header/Player.h"
#include "src/header/MapCell.h"
using  namespace std;
int main() {
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout<< "aca se inicia el juego"<<endl;
    while (isGameOver == false){
        //aqui es el loop del juego
        Hero.CallInput();
        Map.Draw();
    }
    return 0;
}

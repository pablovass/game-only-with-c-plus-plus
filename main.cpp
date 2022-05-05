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
        //actualizamos la info del hero
        Map.SetPlayerCell(Hero.x,Hero.y);
        //aqui dibujamos el jugador
        Map.Draw();
    }
    return 0;
}

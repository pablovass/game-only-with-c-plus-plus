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
        if (Map.SetPlayerCell(Hero.x,Hero.y) )
        {
            Map.Draw();
        }else{
            Hero.ResetToSafePosition();
            //aqui dibujamos el mapa
            Map.Draw();
        }
        //actualizamos la info del hero
        Map.SetPlayerCell(Hero.x,Hero.y);

    }
    return 0;
}

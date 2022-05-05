#include <iostream>
#include "src/header/GameMap.h"
#include "src/header/Player.h"
#include "src/header/MapCell.h"
using  namespace std;
int main() {


    Player Hero;
    GameMap Map;
    Map.DrawIntro();

    Map.Draw();

    while (Map.isGameOver == false){
        cout<<"introduce el comando de movimiento 'w' 's' 'a' 'd'   "<<endl;
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

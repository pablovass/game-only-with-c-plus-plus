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
        Hero.CallInput();
        if (Map.SetPlayerCell(Hero.x,Hero.y) )
        {
            Map.Draw();
        }else{
            Hero.ResetToSafePosition();
            Map.Draw();
        }
        Map.SetPlayerCell(Hero.x,Hero.y);

    }
    return 0;
}

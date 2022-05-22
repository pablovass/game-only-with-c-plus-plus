
#ifndef JUEGOCPLUSPLUS_GAMEMAP_H
#define JUEGOCPLUSPLUS_GAMEMAP_H
#include <iostream>
#include "MapCell.h"

class GameMap {
public:
    GameMap();
    MapCell* PlayerCell;
    MapCell cells [15][10];
    bool isGameOver = false;
    void DrawIntro();
    void Draw();
    void LoadMapFromFile();
    bool SetPlayerCell(int PlayerX,int Playery);
protected:

    void DrawVictory();
};
#endif 


#ifndef JUEGOCPLUSPLUS_GAMEMAP_H
#define JUEGOCPLUSPLUS_GAMEMAP_H
#include <iostream>
#include "MapCell.h"

class GameMap {
public:
    MapCell* PlayerCell;
    MapCell cells [15][10];
     GameMap();
    void Draw();
    bool SetPlayerCell(int PlayerX,int Playery);//obtiene la cordenas del player y actualiza el mapa
protected:
    void LoadMapFromFile();
};
#endif //JUEGOCPLUSPLUS_GAMEMAP_H

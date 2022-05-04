
#ifndef JUEGOCPLUSPLUS_GAMEMAP_H
#define JUEGOCPLUSPLUS_GAMEMAP_H
#include <iostream>
#include "MapCell.h"

class GameMap {
public:
    MapCell cell [15][10];
    void Draw();
};
#endif //JUEGOCPLUSPLUS_GAMEMAP_H

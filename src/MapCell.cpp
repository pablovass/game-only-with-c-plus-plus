//
// Created by Wasp on 5/4/2022.
//
#include <iostream>
#include "header/MapCell.h"


using  namespace  std;

MapCell::MapCell() {
    id=0;
}
bool MapCell::IsBlocked() {
    if(id=='1'){
        return  true;
    }else{
        return false;
    }
}

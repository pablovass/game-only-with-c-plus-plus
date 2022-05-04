#include "header/GameMap.h"
#include <iostream>
//
// Created by Wasp on 5/4/2022.
//
using namespace  std;


void GameMap::Draw()
{
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j <10 ; ++j)
        {
            cout<<"0";
        }
        cout<< endl;
    }
}

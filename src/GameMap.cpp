#include "header/GameMap.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


 GameMap::GameMap() {

     PlayerCell= NULL;
     LoadMapFromFile();
     isGameOver== false;
}
void GameMap::Draw()
{
    for (int i = 0; i < 15; ++i)
    {
        for (int j = 0; j <10 ; ++j)
        {
            cout<<cells[i][j].id ;
        }
        cout << endl;
    }
}

bool GameMap::SetPlayerCell(int PlayerX,int PlayerY)
{
     if(cells[PlayerY][PlayerX].IsBlocked()==false)
     {
         if(cells[PlayerY][PlayerX].id=='$')
         {
            DrawVictory();
            isGameOver=true;
             return true;
         }else{
             if(PlayerCell!=NULL){
                 PlayerCell->id = 0 ;
             }
             PlayerCell=&cells[PlayerY][PlayerX];
             PlayerCell->id = '3';
             //cout <<"las cordenas del jugador estan en: "<<PlayerX<<","<<Playery<<endl;
         }

         return  true;
     }else{
         return false;
     }

     }


/*
 * void GameMap::LoadMapFromFile()
{
     ofstream FileCreated("Map.txt");
    if (FileCreated.is_open()){
    }        else{
        cout<<"FATAL ERROR: MAP FILE COULD NOT BE CREATED!"<<endl;

    }
    string  line;
    ifstream MyFile("Map.txt");
    if (MyFile.is_open()){
    }        else{
            cout<<"FATAL ERROR: MAP FILE COULD NOT BE LOADED!"<<endl;

}    }*/
void GameMap::DrawIntro() {
    string  line;
    ifstream MyFile("Intro.txt");

    if (MyFile.is_open()) {

        while (getline(MyFile, line))
        {
            cout<<line<<endl;
        }
        // solo quiero pausar un poco el juego
        cin >> line;
    }
    else
    {
        cout<<"FATAL ERROR: INTRO COULD NOT BE LOADED!"<<endl;

    }

}

void GameMap::LoadMapFromFile(){

    string  line;
    int row = 0; // va decir en que linea estoy
    ifstream MyFile("Map.txt");

    if (MyFile.is_open()) {
        //cout<<"prueva de dibujado line"<<endl;

        while (getline(MyFile, line)) {
          //  cout<<line<<endl; no quiero que lo dibuje
            for (int p = 0; p < line.length(); p = p + 1) {
                if (line[p]=='0')
                {
                    cells[row][p].id = 0;
                }else{
                    cells[row][p].id = line[p];
                }
            }
           row++;
        }
        // cout<<" FINAL prueva de dibujado line"<<endl;
    }
    else
    {
        cout<<"FATAL ERROR: MAP FILE COULD NOT BE LOADED!"<<endl;

    }

}
void GameMap::DrawVictory() {
    string  line;
    ifstream MyFile("Win.txt");

    if (MyFile.is_open()) {

        while (getline(MyFile, line))
        {
            cout<<line<<endl;
        }
        // solo quiero pausar un poco el juego
        cin >> line;
    }
    else
    {
        cout<<"FATAL ERROR: INTRO COULD NOT BE LOADED!"<<endl;

    }

}









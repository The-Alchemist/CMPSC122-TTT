// Tic-Tac-Toe 2.0 - multiple files
// Game definition - class represents a tic-tac-toe game

#pragma once

//for access to Board class definition
#include "Board.h"  
//for access to Player class definition
#include "Player.h" 

class Game
{
public:
    Game();
    bool IsPlaying();            
    bool IsTie();                              
    void DisplayInstructions();  
    void NextPlayer();  
    void AnnounceWinner();       
    void Play();                       
    
private:
    static const int NUM_PLAYERS = 2;
    static const int FIRST = 0;
    static const int SECOND = 1;
        
    Board m_Board;                           
    Player m_Players[NUM_PLAYERS];      
    int m_Current;                           
};
                        

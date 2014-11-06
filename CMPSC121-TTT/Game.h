// Tic-Tac-Toe 2.0 - multiple files
// Game definition - class represents a tic-tac-toe game

//part of include guard - tests if PLAYER_H not defined
#ifndef GAME_H   
//part of include guard - defines PLAYER_H
#define GAME_H   

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

//part of include guard - ends #ifndef 
#endif                           

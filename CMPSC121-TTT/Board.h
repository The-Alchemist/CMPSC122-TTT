// Tic-Tac-Toe 2.0 - multiple files
// Board definition - class represents a tic-tac-toe board
#include "Move.h"

#pragma once

class Board
{  
public:
    Board();
    bool IsFull();                         
    bool IsLegalMove(int);            
    bool IsWinner(char);
    void Display();
    void Reset();                               
    void ReceiveMove(Move); 

    static const int NUM_SQUARES = 9;           
    static const char EMPTY = ' ';  

private:
    static const int NUM_COMBOS = 8;
    static const int NUM_IN_COMBO = 3;
    static const int WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO];

    char m_Squares[NUM_SQUARES];                 
};

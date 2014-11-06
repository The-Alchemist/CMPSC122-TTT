// Tic-Tac-Toe 2.0 - multiple files
// Main function

#include "stdafx.h"
#include <iostream>
//for access to Game class definition
#include "Game.h"    

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{

	Game ticTacToe;

	ticTacToe.DisplayInstructions();
	  
	char again;
	do 
	{
		ticTacToe.Play();
		cout << endl << "Play again? (y/n): ";
		cin >> again;
	} while (again != 'n');
	
	return 0;
}

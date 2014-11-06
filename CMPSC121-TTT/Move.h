#include "stdafx.h"
#pragma once

class Move
{
public:
	Move(char piece, int move);
	char getPiece();
	int getMove();

private:
	char piece;
	int move;
};

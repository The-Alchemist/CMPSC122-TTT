#include "stdafx.h"
#pragma once

class Move
{
public:
	Move(char, int);
	char getPiece();
	int getLocation();

private:
	char piece;
	int location;
};

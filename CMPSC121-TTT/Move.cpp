#include "stdafx.h"
#include "Move.h"

Move::Move(char piece, int location) : piece(piece), location(location)
{

}

char Move::getPiece()
{
	return piece;
}
int Move::getLocation()
{
	return location;
}
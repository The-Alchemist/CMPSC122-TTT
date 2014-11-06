#include "stdafx.h"
#include "Move.h"

Move::Move(char piece, int move) : piece(piece), move(move)
{

}

char Move::getPiece()
{
	return piece;
}
int Move::getMove()
{
	return move;
}
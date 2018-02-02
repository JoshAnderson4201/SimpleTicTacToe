#pragma once
#include <vector>
#include "Player.h"

const int NUM_ROWS = 3;
const int NUM_COLS = 3;

class Board
{
public:
	Board();
	~Board();

	void PrintBoard() const;
	bool IsAvailable(int) const;
	bool CheckWin();
	void MakeUnavailable(Player, int);

	char board[10] =  {'/', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
};


#include "Player.h"
#include "Board.h"
#include <string>
#include <iostream>

using namespace std;

Board::Board()
{
}

Board::~Board()
{

}

void Board::PrintBoard() const
{
    cout << endl;
	for (int i = 1; i < 10; i++)
	{
        cout << board[i];
        cout << " | ";
        if ((i == 3) || (i == 6))
        {
            cout << endl;
            cout  << "-----------";
            cout << endl;
        }
	}
	cout << endl << endl;
}

bool Board::IsAvailable(int space) const
{
    if ((board[space] == 'X') || (board[space] == 'O'))
        return false;
}

void Board::MakeUnavailable(Player player, int space)
{
    board[space] = player.GetSymbol();
}

bool Board::CheckWin()
{
    if (board[1] == board[2] && board[2] == board[3])
        return true;
    else if (board[4] == board[5] && board[5] == board[6])
        return true;
    else if (board[7] == board[8] && board[8] == board[9])
        return true;
    else if (board[1] == board[4] && board[4] == board[7])
        return true;
    else if (board[2] == board[5] && board[5] == board[8])
        return true;
    else if (board[3] == board[6] && board[6] == board[9])
        return true;
    else if (board[1] == board[5] && board[5] == board[9])
        return true;
    else if (board[3] == board[5] && board[5] == board[7])
        return true;
    else
        return false;
}

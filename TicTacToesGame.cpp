// TicTacToesGame.cpp : Defines the entry point for the console application.
//
#include "Player.h"
#include "Board.h"
#include <iostream>

using namespace std;

void ClaimSpace(Player p);
Board gameBoard;

int main()
{
	Player player1;
	Player player2;
    std::string p1Name, p2Name;

    player1.SetupPlayer(1);
    player1.SetSymbol('X');
    player2.SetupPlayer(2);
    player2.SetSymbol('O');

    int turnCount = 0;
    while (turnCount < 9)
    {
        gameBoard.PrintBoard();
        if ((turnCount % 2) == 0)
        {
            ClaimSpace(player1);
        }
        else
        {
            ClaimSpace(player2);
        }
        bool winner = gameBoard.CheckWin();
        if (winner == true)
        {
            gameBoard.PrintBoard();
            if ((turnCount % 2) == 0)
            {
                cout << player1.GetName() << " Wins! Thanks for playing!";
            }
            else
            {
                cout << player2.GetName() << " Wins! Thanks for playing!";
            }
            break;
        }

        turnCount++;
    }
    bool winner = gameBoard.CheckWin();
    if(winner == false)
    {
        gameBoard.PrintBoard();
        cout << "The game ended in a draw!" << endl;
    }
    return 0;
}

void ClaimSpace(Player p)
{
    int choice;
    cout << p.GetName() << "'s turn. Pick a space by number value: ";
    cin >> choice;
    if (choice > 0 && choice < 10)
    {
        if (gameBoard.IsAvailable(choice))
        {
            cout << choice << endl;
            gameBoard.MakeUnavailable(p, choice);
        }
        else
        {
            cout << "Oops! Spot already taken. Try another one!" << endl << endl;
            ClaimSpace(p);
        }
    }
    else
    {
        cout << "Please pick a number between 1-9! Try again." << endl << endl;
        ClaimSpace(p);
    }
}


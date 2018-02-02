
#include "Player.h"
#include "Board.h"
#include <vector>
#include <iostream>

using namespace std;

Player::Player()
{

}


Player::~Player()
{
}

void Player::SetupPlayer(int num)
{
    std::string pName;
    char pSymbol;

    cout << "Please enter name for Player " << num << ": ";
	cin >> pName;
	SetName(pName);
	cout << endl;
}

void Player::SetName(string nameIn)
{
	name = nameIn;
	return;
}

void Player::SetSymbol(char symbolIn)
{
	symbol = symbolIn;
	return;
}

char Player::GetSymbol() const
{
    return symbol;
}

std::string Player::GetName() const
{
    return name;
}

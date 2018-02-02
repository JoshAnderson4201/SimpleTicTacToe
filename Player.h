#pragma once
#include <vector>
#include <string>

class Player
{
public:
	Player();
	~Player();

	void SetupPlayer(int num);
	void SetName(std::string);
	void SetSymbol(char);

    std::string GetName() const;
	char GetSymbol() const;

private:
	std::string name;
	char symbol;
};


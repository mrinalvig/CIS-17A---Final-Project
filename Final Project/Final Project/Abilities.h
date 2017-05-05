#pragma once
#include <string>

class Abilities
{
private:
	std::string abilities;

public:
	std::string info();

	Abilities(std::string abilities);
	~Abilities();
};

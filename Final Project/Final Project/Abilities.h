#pragma once
#include <string>

class Abilities
{
private:
	std::string abilities;

public:
	Abilities(std::string abilities);
	~Abilities();
	
	std::string getAbilities() const { return "         " + abilities; };
};

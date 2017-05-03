#pragma once
#include <string>

class Abilities
{
public:
	std::string angelicAbilities;
	std::string demonicAbilities;
	std::string generalAbilities;

	std::string aInfo();

	Abilities(std::string angelicAbilities, std::string demonicAbilities, std::string generalAbilities);
	~Abilities();
};

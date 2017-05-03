#pragma once
#include <string>

class Characters
{
private:
	std::string name;
	std::string race;

public:

	int power;
	int health;
	std::string info();

	Characters(std::string race, std::string name, int power, int health);
	~Characters();

};


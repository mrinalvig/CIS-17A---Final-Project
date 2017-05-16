#pragma once
#include <string>

class Characters
{
private:
	std::string name;

public:

	int power;
	int health;
	std::string info();

	Characters(std::string name);
	~Characters();

};


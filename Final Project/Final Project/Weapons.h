#pragma once
#include <iostream>


class Weapons
{
private:
	std::string keyblades;

public:
	Weapons(std::string keyblades);
	~Weapons();

	std::string getWeapons() const { return "         " + keyblades; };
};


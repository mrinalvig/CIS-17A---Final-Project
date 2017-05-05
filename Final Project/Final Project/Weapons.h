#pragma once
#include <iostream>>


class Weapons
{
private:
	std::string keyblades;

public:
	std::string weaponExtra;
	std::string info();

	Weapons(std::string keyblades);
	~Weapons();
};


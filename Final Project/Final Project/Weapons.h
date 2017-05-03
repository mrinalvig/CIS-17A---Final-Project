#pragma once
#include <iostream>>


class Weapons
{
private:
	std::string weaponHeaven;
	std::string weaponHell;

public:
	std::string weaponExtra;
	std::string wInfo();

	Weapons(std::string weaponHeaven, std::string weaponHell, std::string weaponExtra);
	~Weapons();
};


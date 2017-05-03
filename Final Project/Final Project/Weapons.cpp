#include "Weapons.h"


std::string Weapons::wInfo()
{
	return "\nWEAPONS\nHell Weapons: " + weaponHell + "\nHeavenly Weapons: " + weaponHeaven + "\nExtra Weapons: " + weaponExtra + " ";
}

Weapons::Weapons(std::string wHell, std::string wHeaven, std::string wExtra)
{
	weaponHell = wHell;
	weaponHeaven = wHeaven;
	weaponExtra = wExtra;
}


Weapons::~Weapons()
{
}

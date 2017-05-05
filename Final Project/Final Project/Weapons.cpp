#include "Weapons.h"


std::string Weapons::info()
{
	return "WEAPONS: " + keyblades;
}

Weapons::Weapons(std::string wKeyblades)
{
	keyblades = wKeyblades;
	
}


Weapons::~Weapons()
{
}

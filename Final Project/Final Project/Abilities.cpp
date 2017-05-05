#include "Abilities.h"
#include <string>

std::string Abilities::info()
{
	return "\nABILITIES: " + abilities;
}

Abilities::Abilities(std::string aAbilities)
{
	abilities = aAbilities;
}


Abilities::~Abilities()
{
}

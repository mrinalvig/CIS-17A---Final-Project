#include "Abilities.h"
#include <string>

std::string Abilities::aInfo()
{
	return "\nABILITIES\nAngelic Abilities: \n"
		+ angelicAbilities + "\n\nDemonic Abilities: \n" + demonicAbilities + "\n\nGeneral Abilities: \n" + generalAbilities + "";
}

Abilities::Abilities(std::string aAngelic, std::string aDemonic, std::string aGeneral)
{
	angelicAbilities = aAngelic;
	demonicAbilities = aDemonic;
	generalAbilities = aGeneral;
}


Abilities::~Abilities()
{
}

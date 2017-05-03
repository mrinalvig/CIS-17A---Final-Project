#include "Characters.h"
#include <string>
using namespace std;

string Characters::info()
{
	return "Welcome " + name + "\nRace: " + race + "\nPower level: lvl " + to_string(power) + "\nHealth: " + to_string(health) + " hp";
}

Characters::Characters(string iRace, string iName, int iPower, int iHealth)
{
	race = iRace;
	name = iName;
	power = iPower;
	health = iHealth;
}

Characters::~Characters()
{
}



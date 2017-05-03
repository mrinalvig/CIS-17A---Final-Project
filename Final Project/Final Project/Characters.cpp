#include "Characters.h"
#include <string>
using namespace std;

string Characters::info()
{
	return "" + name + "\nPower level: lvl " + to_string(power) + "\nHealth: " + to_string(health) + " hp \n";
}

Characters::Characters(string iName, int iPower, int iHealth)
{
	name = iName;
	power = iPower;
	health = iHealth;
}

Characters::~Characters()
{
}



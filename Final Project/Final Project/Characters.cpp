#include "Characters.h"
#include <string>
using namespace std;

string Characters::info()
{
	return "Welcome " + name + "\nPower level: lvl " + to_string(power) + "\nHealth: " + to_string(health) + " hp";
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



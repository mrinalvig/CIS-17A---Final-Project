#include "Character.h"
#include <string>

Character::Character(std::string iName)
{
	name = iName;
}

Character::~Character()
{
}

void Character::AddWeapon(std::string name)
{
	auto sWeapons = std::make_shared<Weapons>(name);
	weapon.push_back(sWeapons);
}

std::string Character::WeaponInfo()
{
	std::string result = "SORA WEAPONS: \n";

	std::shared_ptr<Weapons> ptr = weapon.back();
	result += ptr->getWeapons();

	return result;
}


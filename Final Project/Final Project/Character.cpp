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

void Character::AddAbility(std::string _name)
{
	auto sAbilities = std::make_shared<Abilities>(_name);
	ability.push_back(sAbilities);
}

void Character::AddForm(std::string name)
{
	auto formss = std::make_shared<Forms>(name);
	form.push_back(formss);
}


std::string Character::WeaponInfo()
{
	std::string result = "		\nWEAPONS: \n";

	for (auto ptr : weapon)
	{
		result += ptr->getWeapons() + "\n";
	}

	return result;
}

std::string Character::AbilityInfo()
{
	std::string result = "		\nABILITIES: \n";

	for (auto power : ability)
	{
		result += power->getAbilities() + "\n";
	}

	return result;
}

std::string Character::formInfo()
{
	std::string result = "		\nFORMS: \n";

	for (auto forms : form)
	{
		result += forms->getForms() + "\n";
	}

	return result;
}


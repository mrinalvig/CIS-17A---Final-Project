#include "Character.h"
#include <string>

Character::Character(std::string _name)
{
	name = _name;
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

void Character::AddAbility(std::string _name, std::string _name2, std::string _name3)
{
	auto Abilities1 = std::make_shared<Abilities>(_name);
	auto Abilities2 = std::make_shared<Abilities>(_name2);
	auto Abilities3 = std::make_shared<Abilities>(_name3);
	ability.push_back(Abilities1);
	ability.push_back(Abilities2);
	ability.push_back(Abilities3);
}

void Character::AddForm(std::string name)
{
	auto formss = std::make_shared<Forms>(name);
	form.push_back(formss);
}


std::string Character::WeaponInfo()
{
	std::string result = "   WEAPONS: \n";

	for (auto ptr : weapon)
	{
		result += ptr->getWeapons() + "\n";
	}

	return result;
}

std::string Character::AbilityInfo()
{
	std::string result = "   ABILITIES: \n";

	for (auto power : ability)
	{
		result += power->getAbilities() + "\n";
	}

	return result;
}

std::string Character::formInfo()
{
	std::string result = "   FORMS: \n";

	for (auto forms : form)
	{
		result += forms->getForms() + "\n";
	}

	return result;
}


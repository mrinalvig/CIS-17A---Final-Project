#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Weapons.h"
#include "Abilities.h"
#include "Forms.h"

class Character
{
private:

	std::string name;
	std::string name2;
	std::string name3;

public:
	Character(std::string name);
	~Character();

	std::vector<std::shared_ptr<Weapons>> weapon;
	std::vector<std::shared_ptr<Abilities>> ability;
	std::vector<std::shared_ptr<Forms>> form;

	void Character::AddAbility(std::string name);
	void Character::AddAbility(std::string name, std::string name2, std::string name3);
	void Character::AddWeapon(std::string name);
	void Character::AddForm(std::string name);
	std::string AbilityInfo();
	std::string WeaponInfo();
	std::string formInfo();
	std::string getCharacters() const { return name; };

};


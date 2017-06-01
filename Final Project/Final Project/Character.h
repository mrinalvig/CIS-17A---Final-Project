#pragma once
#include <string>
#include <memory>
#include <vector>
#include "Weapons.h"

class Character
{
private:
	std::vector<std::shared_ptr<Weapons>> weapon;


	std::string name;

public:
	Character(std::string name);
	~Character();

	void Character::AddWeapon(std::string name);

	std::string WeaponInfo();

	std::string getCharacters() const { return name; };

};


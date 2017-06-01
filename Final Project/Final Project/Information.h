#pragma once
#include <string>
#include <vector>
#include <queue>
#include <memory>
#include "Abilities.h"
#include "Character.h"
#include "Forms.h"
#include "Weapons.h"

class Information
{
private:

	std::string name;

public:
	Information(std::string name);
	~Information();

	void AddCharacter(std::string name);
	
	std::vector<std::shared_ptr<Character>> character;
	std::string CharacterInfo();

};


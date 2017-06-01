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
	std::vector<std::shared_ptr<Abilities>> soraAbilities;
	std::vector<std::shared_ptr<Abilities>> donaldAbilities;
	std::vector<std::shared_ptr<Abilities>> goofyAbilities;
	
	std::vector<std::shared_ptr<Forms>> forms;

	std::string name;

public:
	Information(std::string name);
	~Information();

	void AddSoraAbilities(std::string name);
	void AddDonaldAbilities(std::string name);
	void AddGoofyAbilities(std::string name);
	void AddCharacter(std::string name);
	void AddForms(std::string name);

	std::queue<std::shared_ptr<Character>> character;

	std::string sAbilitiesInfo();
	std::string dAbilitiesInfo();
	std::string gAbilitiesInfo();
	std::string CharacterInfo();
	std::string formsInfo();
	

};


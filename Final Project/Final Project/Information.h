#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Abilities.h"
#include "Characters.h"
#include "Forms.h"
#include "Weapons.h"


class Information
{
private:
	std::vector<std::shared_ptr<Abilities>> soraAbilities;
	std::vector<std::shared_ptr<Abilities>> donaldAbilities;
	std::vector<std::shared_ptr<Abilities>> goofyAbilities;
	std::vector<std::shared_ptr<Characters>> characters;
	std::vector<std::shared_ptr<Forms>> forms;
	std::vector<std::shared_ptr<Weapons>> soraWeapons;
	std::vector<std::shared_ptr<Weapons>> donaldWeapons;
	std::vector<std::shared_ptr<Weapons>> goofyWeapons;

	std::string name;

public:
	Information(std::string name);
	~Information();

	void AddSoraAbilities(std::string name);
	void AddDonaldAbilities(std::string name);
	void AddGoofyAbilities(std::string name);
	void AddCharacters(std::string name);
	void AddForms(std::string name);
	void AddSoraWeapons(std::string name);
	void AddDonaldWeapons(std::string name);
	void AddGoofyWeapons(std::string name);

	


};


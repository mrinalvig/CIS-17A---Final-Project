#pragma once
#include <string>
#include <vector>
#include <queue>
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
	std::queue<std::shared_ptr<Characters>> soraCharacters;
	std::queue<std::shared_ptr<Characters>> donaldCharacters;
	std::queue<std::shared_ptr<Characters>> goofyCharacters;
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
	void AddSoraCharacters(std::string name);
	void AddDonaldCharacters(std::string name);
	void AddGoofyCharacters(std::string name);
	void AddForms(std::string name);
	void AddSoraWeapons(std::string name);
	void AddDonaldWeapons(std::string name);
	void AddGoofyWeapons(std::string name);

	std::string sAbilitiesInfo();
	std::string dAbilitiesInfo();
	std::string gAbilitiesInfo();
	std::string sCharactersInfo();
	std::string dCharactersInfo();
	std::string gCharactersInfo();
	std::string formsInfo();
	std::string sWeaponsInfo();
	std::string dWeaponsInfo();
	std::string gWeaponsInfo();


};


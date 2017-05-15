#include "Information.h"


Information::Information(std::string _name)
{
	name = _name;
}


Information::~Information()
{
}

void Information::AddSoraAbilities(std::string name)
{
	auto sAbilities = std::make_shared<Abilities>(name);
	soraAbilities.push_back(sAbilities);
}

void Information::AddDonaldAbilities(std::string name)
{
	auto dAbilities = std::make_shared<Abilities>(name);
	donaldAbilities.push_back(dAbilities);
}

void Information::AddGoofyAbilities(std::string name)
{
	auto gAbilities = std::make_shared<Abilities>(name);
	goofyAbilities.push_back(gAbilities);
}

void Information::AddCharacters(std::string name)
{
	auto characterss = std::make_shared<Characters>(name);
	characters.push_back(characterss);
}

void Information::AddForms(std::string name)
{
	auto formss = std::make_shared<Forms>(name);
	forms.push_back(formss);
}

void Information::AddSoraWeapons(std::string name)
{
	auto sWeapons = std::make_shared<Weapons>(name);
	soraWeapons.push_back(sWeapons);
}

void Information::AddDonaldWeapons(std::string name)
{
	auto dWeapons = std::make_shared<Weapons>(name);
	donaldWeapons.push_back(dWeapons);
}

void Information::AddGoofyWeapons(std::string name)
{
	auto gWeapons = std::make_shared<Weapons>(name);
	goofyWeapons.push_back(gWeapons);
}

std::string Information::sAbilitiesInfo()
{
	std::string result = "ABILITIES: \n";
	result += soraAbilities.pop_back;

	return result;
}

std::string Information::dAbilitiesInfo()
{
	return std::string();
}

std::string Information::gAbilitiesInfo()
{
	return std::string();
}

std::string Information::charactersInfo()
{
	return std::string();
}

std::string Information::formsInfo()
{
	return std::string();
}

std::string Information::sWeaponsInfo()
{
	return std::string();
}

std::string Information::dWeaponsInfo()
{
	return std::string();
}

std::string Information::gWeaponsInfo()
{
	return std::string();
}

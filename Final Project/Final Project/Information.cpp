#include "Information.h"


Information::Information(std::string _name)
{
	name = _name;
}

Information::~Information()
{
}

void Information::AddSoraAbilities(std::string _name)
{
	auto sAbilities = std::make_shared<Abilities>(_name);
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

void Information::AddSoraCharacters(std::string name)
{
	auto characterss = std::make_shared<Characters>(name);
	soraCharacters.push_back(characterss);
}

void Information::AddDonaldCharacters(std::string name)
{
	auto characterss = std::make_shared<Characters>(name);
	donaldCharacters.push_back(characterss);
}

void Information::AddGoofyCharacters(std::string name)
{
	auto characterss = std::make_shared<Characters>(name);
	goofyCharacters.push_back(characterss);
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
	std::string result = "SORA ABILITIES: \n";	
	
	std::shared_ptr<Abilities> ptr = soraAbilities.back();
	result += ptr->getAbilities();

	return result;
}

std::string Information::dAbilitiesInfo()
{
	std::string result = "DONALD ABILITIES: \n";

	std::shared_ptr<Abilities> ptr = donaldAbilities.back();
	result += ptr->getAbilities();

	return result;
}

std::string Information::gAbilitiesInfo()
{
	std::string result = "GOOFY ABILITIES: \n";

	std::shared_ptr<Abilities> ptr = goofyAbilities.back();
	result += ptr->getAbilities();

	return result;
}

std::string Information::sCharactersInfo()
{
	std::string output = "SORA STATS: \n";

	std::shared_ptr<Characters> sora = soraCharacters.back();

	for (auto sora : soraCharacters)
	{
		output += sora->getCharacters();
	}
	
	return output;
}

std::string Information::dCharactersInfo()
{
	std::string output = "DONALD STATS: \n";

	std::shared_ptr<Characters> donald = donaldCharacters.back();

	for (auto donald : donaldCharacters)
	{
		output += donald->getCharacters();
	}

	return output;
}

std::string Information::gCharactersInfo()
{
	std::string output = "GOOFY STATS: \n";

	std::shared_ptr<Characters> goofy = goofyCharacters.back();

	for (auto goofy : goofyCharacters)
	{
		output += goofy->getCharacters();
	}

	return output;
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

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

void Information::AddCharacter(std::string name)
{
	auto characterss = std::make_shared<Character>(name);
	character.push(characterss);
}

void Information::AddForms(std::string name)
{
	auto formss = std::make_shared<Forms>(name);
	forms.push_back(formss);
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

std::string Information::CharacterInfo()
{
	std::string output = "Characters: \n\n";

	while (character.size() > 0)
	{
		std::shared_ptr<Character> player = character.front();
		character.pop();
		output += player->getCharacters();
	}
	
	return output;
}

std::string Information::formsInfo()
{
	std::string result = "SORA FORMS: \n";

	std::shared_ptr<Forms> ptr = forms.back();
	result += ptr->getForms();

	return result;
}



#include "Information.h"


Information::Information(std::string _name)
{
	name = _name;
}

Information::~Information()
{
}

void Information::AddCharacter(std::string name)
{
	auto characterss = std::make_shared<Character>(name);
	character.push_back(characterss);
}

std::string Information::CharacterInfo()
{
	std::string output = "Characters: \n\n";

	for (auto player : character)
	{
		//std::shared_ptr<Character> player = character.back();
		//character.pop_back();
		output += player->getCharacters() + "\n";
	}
	
	return output;
}





#pragma once
#include <string>

class Characters
{
private:
	std::string name;

public:
	Characters(std::string name);
	~Characters();

	std::string getCharacters() const { return name; };
	std::string Abilitiess() { return "CHARACTERS: \n" + name; };

};


#pragma once
#include <string>

class Forms
{
private:
	std::string defaultOutfit;
public:
	std::string bonusOutfit;

	std::string oInfo();

	Forms(std::string defaultOutfit, std::string bonusOutfit);
	~Forms();
};

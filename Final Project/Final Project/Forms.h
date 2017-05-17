#pragma once
#include <string>

class Forms
{
private:
	std::string outfits;

public:
	Forms(std::string outfits);
	~Forms();

	std::string getForms() const { return outfits; };
};

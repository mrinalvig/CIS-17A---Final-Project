#include "Forms.h"

std::string Forms::oInfo()
{
	return "\n OUTFITS  \nDefault Outfit: " + defaultOutfit + "\nBonus Outfits: " + bonusOutfit + "";
}

Forms::Forms(std::string oDefault, std::string oBonus)
{
	defaultOutfit = oDefault;
	bonusOutfit = oBonus;
}


Forms::~Forms()
{
}
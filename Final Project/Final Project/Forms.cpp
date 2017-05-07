#include "Forms.h"

std::string Forms::info()
{
	return "Forms: " + outfits;
}

Forms::Forms(std::string oOutfits)
{
	outfits = oOutfits;
	
}


Forms::~Forms()
{
}
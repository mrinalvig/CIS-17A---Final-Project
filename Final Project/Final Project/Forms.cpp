#include "Forms.h"

std::string Forms::info()
{
	return "\nForms: " + outfits;
}

Forms::Forms(std::string oOutfits)
{
	outfits = oOutfits;
	
}


Forms::~Forms()
{
}
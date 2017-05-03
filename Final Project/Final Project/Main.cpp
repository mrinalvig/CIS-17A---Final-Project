#include <iostream>
#include <string>
#include "Characters.h"
#include "Weapons.h"
#include "Abilities.h"
#include "Forms.h"
using namespace std;

void printCharacter();
void printWeapons();
void printAbilities();
void printForms();


int main()
{
	
	
	
	


	getchar();
	return 0;
}

void printCharacter()
{
	Characters dante = Characters("Dante", 100, 100);
	Characters vergil = Characters("Vergil", 80, 100);

	cout << dante.info() << endl;
	cout << vergil.info() << endl;

}

void printWeapons()
{
	Weapons wDante = Weapons("Rebellion, Arbiter, and Eryx", "Osiris and Aquila", "Ebony & Ivory, Revenant, and Kablooey");
	Weapons wVergil = Weapons("Yamato Devil Mode", "Yamato Angel Mode", "Sword Illusion, Doppleganger");

	cout << wDante.wInfo() << endl;
	cout << wVergil.wInfo() << endl;
}

void printAbilities()
{
	Abilities aDante = Abilities("Angel Boost, Ophion Angel Lift, and Angel Evade", "Ophion Demon Pull, Ophion Demon Kicker, Demon Evade, and Devil Trigger",
		"Jump, Double Jump, Enemy Step, Evade, and Leap");
	Abilities aVergil = Abilities("Angel Boost and Vergil Angel Lift", "Vergil Deamon Pull", "Jump, Enemy Step, Evade, Trick Up, and Trick Down");

	cout << aDante.aInfo() << endl;
	cout << aVergil.aInfo() << endl;

}

void printForms()
{
	Forms oDante = Forms("Standard", "Original, Son of Sparda, Classic Dante, Neo Dante, Dark Dante, DMC 1 Dante");
	Forms oVergil = Forms("Standard", "Weak Vergil, DMC 3 Vergil, Standard (Subsequent Playthroughs)");

	cout << oDante.oInfo() << endl;
	cout << oVergil.oInfo() << endl;

}
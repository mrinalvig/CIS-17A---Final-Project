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
	int thing = 1;
	
	while (thing = 1)
	{
		system("cls");
		cout << "Welcome to Kingdom Hearts 2 Stats! Would you like info on: \n1. Characters \n2. Weapons \n3. Abilities \n4. Forms" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{

		case 1: printCharacter();
			break;
		case 2: printWeapons();
			break;
		case 3:printAbilities();
			break;
		case 4:printForms();
			break;

		default: break;
		}
	}
	
	


	getchar();
	return 0;
}

void printCharacter()
{
	system("cls");

	Characters sora = Characters("Sora - starting out", 1, 10);
	Characters mSora = Characters("Sora - maxed out", 99, 111);
	Characters donald = Characters("Donald - starting out", 1, 10);
	Characters mDonald = Characters("Donald - maxed out", 99, 111);
	Characters goofy = Characters("Goofy - starting out", 1, 10);
	Characters mGoofy = Characters("Goofy - maxed out", 99, 111);

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{

	case 1: {
		cout << sora.info() << endl;
		cout << mSora.info() << endl;
		break;
	}
		
	case 2: {
		cout << donald.info() << endl;
		cout << mDonald.info() << endl;
		break;
	}
		
	case 3: {
		cout << goofy.info() << endl;
		cout << mGoofy.info() << endl;
		break;
	}
		
	case 4: {
		cout << sora.info() << endl;
		cout << mSora.info() << endl;
		cout << donald.info() << endl;
		cout << mDonald.info() << endl;
		cout << goofy.info() << endl;
		cout << mGoofy.info() << endl;
		break;
	}
		

	default: break;
	}
	
	system("pause");
}

void printWeapons()
{
	system("cls");

	Weapons sora = Weapons("\n\nKindom Key \nStar Seeker \nHidden Dragon \nHero's Crest \nMonochrome \nFollow the Wind \nCircle of Life \nPhoton Debugger \nOathkeeper \nRumbling Rose \nGuardian Soul \nWishing Lamp \nDecisive Pumpin \nMysterious Abyss \nGull Wing \nSleeping Lion \nSweet Memory \nBond of Flame \nFatal Crest \nOblivion \nFenrir \nUltima Weapon");
	Weapons donald = Weapons("\n\nMage's Staff \nHammer Staff \nComet Staff \nVictory Bell \nLord's Broom \nRising Dragon \nWisdom Wand \nShaman's Relic \nNobody Lance \nSave the Queen \nSave the Queen +");
	Weapons donald = Weapons("")

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{

	case 1: {
		cout << sora.info() << endl;
		break;
	}

	case 2: {
		cout << donald.info() << endl;
		break;
	}

	case 3: {
		cout << goofy.info() << endl;
		break;
	}

	case 4: {
		cout << sora.info() << endl;
		cout << donald.info() << endl;
		cout << goofy.info() << endl;
		break;
	}


	default: break;
	}

	cout << sora.info() << endl;

	system("pause");
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
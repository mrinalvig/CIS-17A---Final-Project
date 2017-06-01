#include <iostream>
#include <string>
#include <algorithm>
#include "Character.h"
#include "Weapons.h"
#include "Abilities.h"
#include "Forms.h"
#include "Information.h"
using namespace std;

void printCharacter(const shared_ptr<Information> information);
void printWeapons(const shared_ptr<Character> character, const shared_ptr<Information> information);
void printAbilities(const shared_ptr<Information> information);
void printForms(const shared_ptr<Information> information);


int main()
{
	int thing = 1;
	string name;
	auto information = make_shared<Information>(name);
	auto character = make_shared<Character>(name);
	
	while (thing = 1)
	{
		system("cls");
		cout << "Welcome! Would you like to: \n1. Create a Character \n2. Add Weapons \n3. Add Abilities \n4. Add Forms \n5. Exit" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1: printCharacter(information);
			break;
		case 2: printWeapons(character, information);
			break;
		case 3:printAbilities(information);
			break;
		case 4:printForms(information);
			break;
		case 5: return 0;
			break;

		default: break;
		}
	}

	getchar();
	return 0;
}

void printCharacter(const shared_ptr<Information> information)
{
	system("cls");

	bool loop = true;

	while (loop == true)
	{
		system("cls");

		cout << "Would you like to: \n1. Create an Angel \n2. Create a Demon \n3. Create a Nephilim \n4. Create a Human \n5. Print All Characters \n6. Finished Making Characters" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{

		case 1: information->AddCharacter("Angel\n");
			break;
		case 2: information->AddCharacter("Demon\n");
			break;
		case 3: information->AddCharacter("Nephilim\n");
			break;

		case 4: information->AddCharacter("Human\n");
			break;
		case 5:{
			cout << information->CharacterInfo() << endl;
			system("pause");
		}
			break;
		case 6: loop = false;
			break;
		
		default: break;
		}

	}
	
	system("pause");
}

void printWeapons(const shared_ptr<Character> character, const shared_ptr<Information> information)
{
	system("cls");

	string sWeapons = "\nKindom Key \nStar Seeker \nHidden Dragon \nHero's Crest \nMonochrome" 
		"\nFollow the Wind \nCircle of Life \nPhoton Debugger \nOathkeeper \nRumbling Rose \nGuardian Soul" 
		"\nWishing Lamp \nDecisive Pumpin \nMysterious Abyss \nGull Wing \nSleeping Lion \nSweet Memory" 
		"\nBond of Flame \nFatal Crest \nOblivion \nFenrir \nUltima Weapon\n";

	string dWeapons = "\nMage's Staff \nHammer Staff \nComet Staff \nVictory Bell \nLord's Broom" 
		"\nRising Dragon \nWisdom Wand \nShaman's Relic \nNobody Lance \nSave the Queen \nSave the Queen +\n";

	string gWeapons = "\nKnight's Shield \nAdamant Shield \nFalling Star \nChain Gear \nDreamcloud" 
		"\nOgre Shield \nGenji Shield \nKnight Defender \nAkashic Record \nNobody Guard \nSave the King \nSave the King +\n";  

	cout << "Would you like to add weapons for: \n1. Angels \n2. Demons \n3. Nephilim \n4. Humans" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{
		case 1: {

			for (int i = 0; i < information->character.size(); i++)
			{
				if (character->getCharacters[i] == "Angel")
				{
					character->AddWeapon[i]("Angelic Scythe");
				}
			}
			cout << character->WeaponInfo() << endl;
		}
			break;
		
		case 2: {
			character->AddWeapon(dWeapons);
			cout << character->WeaponInfo() << endl;
		}
			break;
		
		case 3: {
			character->AddWeapon(gWeapons);
			cout << character->WeaponInfo() << endl;
		}
			break;
		

		case 4: {
			character->AddWeapon(sWeapons);
			cout << character->WeaponInfo() << endl;

			character->AddWeapon(dWeapons);
			cout << character->WeaponInfo() << endl;

			character->AddWeapon(gWeapons);
			cout << character->WeaponInfo() << endl;
		}
			break;

	default: break;
	}

	system("pause");
}

void printAbilities(const shared_ptr<Information> information)
{
	system("cls");

	string sAbilities = "\nGuard \nUpper Slash \nHorizontal Slash \nFinishing Leap \nRetaliating Slash"
		"\nSlapshot \nDoge Slash \nSlide Dash \nGuard Break \nExplosion \nAerial Sweep \nAerial Spiral \nAerial Finish"
		"\nCounterGuard \nAuto Valor \nAuto Master \nAuto Final \nAuto Summon \nTrinity Limit\n\n";
	
	string dAbilities = "\nDonald Fire \nDonald Blizzard \nDonald Thunder \nDonald Cure \nFantasia \nFlare Force\n\n";

	string gAbilities = "\nGoofy Tornado \nGoofy Bash \nGoofy Turbo \nTeamwork \nTornado Fusion\n\n";

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{
		case 1: {
			information->AddSoraAbilities(sAbilities);
			cout << information->sAbilitiesInfo() << endl;
		}
			break;
		case 2: {
			information->AddDonaldAbilities(dAbilities);
			cout << information->dAbilitiesInfo() << endl;
		}
			break;
		case 3: {
			information->AddGoofyAbilities(gAbilities);
			cout << information->gAbilitiesInfo() << endl;
		}
			break;
		case 4: {
			information->AddSoraAbilities(sAbilities);
			cout << information->sAbilitiesInfo() << endl;
			information->AddDonaldAbilities(dAbilities);
			cout << information->dAbilitiesInfo() << endl;
			information->AddGoofyAbilities(gAbilities);
			cout << information->gAbilitiesInfo() << endl;
			break;
		}

	default: break;
	} 

	system("pause");
}

void printForms(const shared_ptr<Information> information)
{
	system("cls");

	string sora ="\nValor Form \nWisdom Form \nMaster Form \nFinal Form \nAnti Form \n";

	cout << "Sora is the only one with multiple forms. \n" << endl;
	information->AddForms(sora);
	cout << information->formsInfo() << endl;

	system("pause");
}
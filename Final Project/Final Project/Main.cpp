#include <iostream>
#include <string>
#include "Characters.h"
#include "Weapons.h"
#include "Abilities.h"
#include "Forms.h"
#include "Information.h"
using namespace std;

void printCharacter(const shared_ptr<Information> information);
void printWeapons(const shared_ptr<Information> information);
void printAbilities(const shared_ptr<Information> information);
void printForms(const shared_ptr<Information> information);


int main()
{
	int thing = 1;
	string name;
	auto information = make_shared<Information>(name);
	
	while (thing = 1)
	{
		system("cls");
		cout << "Welcome to Kingdom Hearts 2 Stats! Would you like info on: \n1. Characters \n2. Weapons \n3. Abilities \n4. Forms \n5. Exit" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1: printCharacter(information);
			break;
		case 2: printWeapons(information);
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

	string sora = "\nSora - starting out \nPower level: lvl 1 \nHealth: 10hp\n";
	string mSora = "\nSora - maxed out \nPower level: lvl 99 \nHealth: 111hp\n";
	string donald = "\nDonald - starting out \nPower level: lvl 1 \nHealth: 10hp\n";
	string mDonald = "\nDonald - maxed out \nPower level: lvl 99 \nHealth: 111hp\n";
	string goofy = "\nGoofy - starting out \nPower level: lvl 1 \nHealth: 10hp\n";
	string mGoofy = "\nGoofy - maxed out \nPower level: lvl 99 \nHealth: 111hp\n";

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{

	case 1: {
		information->AddSoraCharacters(sora);
		information->AddSoraCharacters(mSora);
		cout << information->sCharactersInfo() << endl;
	}
		break;
		
	case 2: {
		information->AddDonaldCharacters(donald);
		information->AddDonaldCharacters(mDonald);
		cout << information->dCharactersInfo() << endl;
	}
		break;
	case 3: {
		information->AddGoofyCharacters(goofy);
		information->AddGoofyCharacters(mGoofy);
		cout << information->gCharactersInfo() << endl;
	}
		break;
		
	case 4: {
		information->AddSoraCharacters(sora);
		information->AddSoraCharacters(mSora);
		cout << information->sCharactersInfo() << endl;

		information->AddDonaldCharacters(donald);
		information->AddDonaldCharacters(mDonald);
		cout << information->dCharactersInfo() << endl;

		information->AddGoofyCharacters(goofy);
		information->AddGoofyCharacters(mGoofy);
		cout << information->gCharactersInfo() << endl;
	}
		break;

	default: break;
	}
	
	system("pause");
}

void printWeapons(const shared_ptr<Information> information)
{
	system("cls");

	string sWeapons = "\n\nKindom Key \nStar Seeker \nHidden Dragon \nHero's Crest \nMonochrome" 
		"\nFollow the Wind \nCircle of Life \nPhoton Debugger \nOathkeeper \nRumbling Rose \nGuardian Soul" 
		"\nWishing Lamp \nDecisive Pumpin \nMysterious Abyss \nGull Wing \nSleeping Lion \nSweet Memory" 
		"\nBond of Flame \nFatal Crest \nOblivion \nFenrir \nUltima Weapon\n";

	string dWeapons = "\n\nMage's Staff \nHammer Staff \nComet Staff \nVictory Bell \nLord's Broom" 
		"\nRising Dragon \nWisdom Wand \nShaman's Relic \nNobody Lance \nSave the Queen \nSave the Queen +\n";

	string gWeapons = "\n\nKnight's Shield \nAdamant Shield \nFalling Star \nChain Gear \nDreamcloud" 
		"\nOgre Shield \nGenji Shield \nKnight Defender \nAkashic Record \nNobody Guard \nSave the King \nSave the King +\n";

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{
		case 1: information->AddSoraWeapons(sWeapons);
			break;
		
		case 2: information->AddDonaldWeapons(dWeapons);
			break;
		
		case 3: information->AddGoofyWeapons(gWeapons);
			break;
		

		case 4: {
			information->AddSoraWeapons(sWeapons);
			information->AddDonaldWeapons(dWeapons);
			information->AddGoofyWeapons(gWeapons);
			break;
		}

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

	string sora ="\n\nValor Form \nWisdom Form \nMaster Form \nFinal Form \nAnti Form \n";

	cout << "Sora is the only one with multiple forms. \n" << endl;
	information->AddForms(sora);

	system("pause");
}
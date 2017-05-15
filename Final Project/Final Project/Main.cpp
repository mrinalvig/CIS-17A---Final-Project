#include <iostream>
#include <string>
#include "Characters.h"
#include "Weapons.h"
#include "Abilities.h"
#include "Forms.h"
#include "Information.h"
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
		cout << "Welcome to Kingdom Hearts 2 Stats! Would you like info on: \n1. Characters \n2. Weapons \n3. Abilities \n4. Forms \n5. Exit" << endl;
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
		case 5: return 0;
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

	Weapons sora = Weapons("\n\nKindom Key \nStar Seeker \nHidden Dragon \nHero's Crest \nMonochrome" 
		"\nFollow the Wind \nCircle of Life \nPhoton Debugger \nOathkeeper \nRumbling Rose \nGuardian Soul" 
		"\nWishing Lamp \nDecisive Pumpin \nMysterious Abyss \nGull Wing \nSleeping Lion \nSweet Memory" 
		"\nBond of Flame \nFatal Crest \nOblivion \nFenrir \nUltima Weapon\n");

	Weapons donald = Weapons("\n\nMage's Staff \nHammer Staff \nComet Staff \nVictory Bell \nLord's Broom" 
		"\nRising Dragon \nWisdom Wand \nShaman's Relic \nNobody Lance \nSave the Queen \nSave the Queen +\n");

	Weapons goofy = Weapons("\n\nKnight's Shield \nAdamant Shield \nFalling Star \nChain Gear \nDreamcloud" 
		"\nOgre Shield \nGenji Shield \nKnight Defender \nAkashic Record \nNobody Guard \nSave the King \nSave the King +\n");

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{
		case 1: cout << sora.info() << endl;
			break;
		
		case 2: cout << donald.info() << endl;
			break;
		

		case 3: cout << goofy.info() << endl;
			break;
		

		case 4: {
			cout << sora.info() << endl;
			cout << donald.info() << endl;
			cout << goofy.info() << endl;
			break;
		}

	default: break;
	}

	system("pause");
}

void printAbilities(const shared_ptr<Information> information)
{
	system("cls");

	string sAbilities = "\n\nGuard \nUpper Slash \nHorizontal Slash \nFinishing Leap \nRetaliating Slash"
		"\nSlapshot \nDoge Slash \nSlide Dash \nGuard Break \nExplosion \nAerial Sweep \nAerial Spiral \nAerial Finish"
		"\nCounterGuard \nAuto Valor \nAuto Master \nAuto Final \nAuto Summon \nTrinity Limit\n";
	
	string dAbilities = "\n\nDonald Fire \nDonald Blizzard \nDonald Thunder \nDonald Cure \nFantasia \nFlare Force\n";

	string gAbilities = "\n\nGoofy Tornado \nGoofy Bash \nGoofy Turbo \nTeamwork \nTornado Fusion\n";

	cout << "Would you like info on: \n1. Sora \n2. Donald \n3. Goofy \n4. All" << endl;
	int choice;
	cin >> choice;

	system("cls");

	switch (choice)
	{
	case 1: {
		information->AddSoraAbilities(sAbilities);
		information->sAbilitiesInfo;
	}
			break;
		case 2: information->AddDonaldAbilities(dAbilities);
			break;
		case 3: information->AddGoofyAbilities(gAbilities);
			break;
		case 4: {
			information->AddSoraAbilities(sAbilities);
			information->AddDonaldAbilities(dAbilities);
			information->AddGoofyAbilities(gAbilities);
			break;
		}

	default: break;
	}

	system("pause");
	

}

void printForms()
{
	system("cls");

	Forms sora = Forms("\n\nValor Form \nWisdom Form \nMaster Form \nFinal Form \nAnti Form \n");

	cout << "Sora is the only one with multiple forms. \n" << endl;
	cout << sora.info() << endl;

	system("pause");
}
#include <iostream>
#include <string>
#include <algorithm>
#include "Character.h"
#include "Information.h"
using namespace std;

void printCharacter(const shared_ptr<Information> information);
void printWeapons(const shared_ptr<Character> character, const shared_ptr<Information> information);
void printAbilities(const shared_ptr<Character> character, const shared_ptr<Information> information);
void printForms(const shared_ptr<Character> character, const shared_ptr<Information> information);
void printInfo(const shared_ptr<Character> character, const shared_ptr<Information> information);


int main()
{
	int thing = 1;
	string name;
	auto information = make_shared<Information>(name);
	auto character = make_shared<Character>(name);
	
	while (thing = 1)
	{
		system("cls");
		cout << "Welcome! Would you like to: \n1. Create a Character \n2. Add Weapons \n3. Add Abilities \n4. Add Forms \n5. Print Character info \n6. Exit" << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1: printCharacter(information);
			break;
		case 2: printWeapons(character, information);
			break;
		case 3:printAbilities(character, information);
			break;
		case 4:printForms(character, information);
			break;
		case 5:printInfo(character, information);
			break;
		case 6: return 0;
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


	cout << "Would you like to: \n1. Create an Angel \n2. Create a Demon \n3. Create a Nephilim \n4. Create a Human \n5. Finished Making Characters" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{

		case 1: {
			information->AddCharacter("Angel");
			cout << "Angel added!" << endl;
			system("pause");
			printCharacter(information);
		}
			break;
		case 2: {
			information->AddCharacter("Demon");
			cout << "Demon added!" << endl;
			system("pause");
			printCharacter(information);
		}
			break;
		case 3: {
			information->AddCharacter("Nephilim");
			cout << "Nephilim added!" << endl;
			system("pause");
			printCharacter(information);
		}
			break;

		case 4: {
			information->AddCharacter("Human");
			cout << "Human added!" << endl;
			system("pause");
			printCharacter(information);
		}
			break;
		case 5: {
			cout << "Exiting" << endl;
			system("pause");
		}
		
		default: break;
	}

}

void printWeapons(const shared_ptr<Character> character, const shared_ptr<Information> information)
{
	system("cls");

	cout << "Would you like to add weapons for: \n1. Angels \n2. Demons \n3. Nephilim \n4. Humans \n5. Finished adding Weapons" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
		case 1: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Angel")
				{
					player->AddWeapon("Angelic Scythe");
					cout << "Angelic Scythe added! \n" << endl;
				}
			}
			system("pause");
			printWeapons(character, information);
		}
				break;

		case 2: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Demon")
				{
					player->AddWeapon("Demonic Axe");
					cout << "Demonic Axe added! \n" << endl;
				}
			}
			system("pause");
			printWeapons(character, information);
		}
				break;

		case 3: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Nephilim")
				{
					player->AddWeapon("Sword");
					cout << "Sword added! \n" << endl;
				}
			}
			system("pause");
			printWeapons(character, information);
		}
				break;

		case 4: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Human")
				{
					player->AddWeapon("Guns");
					cout << "Guns added! \n" << endl;
				}
			}
			system("pause");
			printWeapons(character, information);
	}
			break;

		case 5: {
			cout << "Exiting" << endl;
		}
			break;

	default: break;
	}
	
}

void printAbilities(const shared_ptr<Character> character, const shared_ptr<Information> information)
{
	system("cls");

	
	cout << "Would you like to add abilities for: \n1. Angels \n2. Devils \n3. Nephilim \n4. Humans \n5. Exit" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
		case 1: {

			cout << "Which ability would you like to add for Angels?: \n1. Angel Evade \n2. Angel Boost \n3. Angel Lift" << endl;
			int aChoice;
			cin >> aChoice;

			for (auto player : information->character)
			{
				if (player->getCharacters() == "Angel")
				{
					switch (aChoice)
					{
						case 1: {
							player->AddAbility("Angel Evade");
							cout << "Angel Evade added! \n" << endl;
						}
								break;
						case 2: {
							player->AddAbility("Angel Boost");
							cout << "Angel Boost added! \n" << endl;
						}
								break;
						case 3: {
							player->AddAbility("Angel Lift");
							cout << "Angel Lift added! \n" << endl;
						}
								break;
					}
					
				}
			}
			system("pause");
			printAbilities(character, information);
		}
				break;
		case 2: {
			cout << "Which ability would you like to add for Demons?: \n1. Demon Evade \n2. Demon Pull \n3. Devil Trigger" << endl;
			int aChoice;
			cin >> aChoice;

			for (auto player : information->character)
			{
				if (player->getCharacters() == "Demon")
				{
					switch (aChoice)
					{
					case 1: {
						player->AddAbility("Demon Evade");
						cout << "Demon Evade added! \n" << endl;
					}
							break;
					case 2: {
						player->AddAbility("Demon Pull");
						cout << "Demon Pull added! \n" << endl;
					}
							break;
					case 3: {
						player->AddAbility("Devil Trigger");
						cout << "Devil Trigger added! \n" << endl;
					}
							break;
					}

				}
			}
			system("pause");
			printAbilities(character, information);
		}
				break;
		case 3: {
			cout << "Which ability would you like to add for Angels?: \n1. Evade \n2. Jump \n3. Ricochet Kick" << endl;
			int aChoice;
			cin >> aChoice;

			for (auto player : information->character)
			{
				if (player->getCharacters() == "Nephilim")
				{
					switch (aChoice)
					{
					case 1: {
						player->AddAbility("Evade");
						cout << "Evade added! \n" << endl;
					}
							break;
					case 2: {
						player->AddAbility("Jump");
						cout << "Jump added! \n" << endl;
					}
							break;
					case 3: {
						player->AddAbility("Ricochet Kick");
						cout << "Ricochet Kick added! \n" << endl;
					}
							break;
					}

				}
			}
			system("pause");
			printAbilities(character, information);
		}
				break;
		case 4: {
			cout << "Which ability would you like to add for Humans?: \n1. Jump \n2. Enemy Step \n3. Payoff" << endl;
			int aChoice;
			cin >> aChoice;

			for (auto player : information->character)
			{
				if (player->getCharacters() == "Human")
				{
					switch (aChoice)
					{
					case 1: {
						player->AddAbility("Jump");
						cout << "Jump added! \n" << endl;
					}
							break;
					case 2: {
						player->AddAbility("Enemy Step");
						cout << "Enemy Step added! \n" << endl;
					}
							break;
					case 3: {
						player->AddAbility("Payoff");
						cout << "Payoff added! \n" << endl;
					}
							break;
					}

				}
			}
			system("pause");
			printAbilities(character, information);
		}
				break;
		case 5: {
			cout << "Exiting" << endl;
			system("pause");
		}
			break;

		default: break;
	}
}

void printForms(const shared_ptr<Character> character, const shared_ptr<Information> information)
{
	system("cls");

	cout << "Would you like to create a form for: \n1. Angels \n2. Demons \n3. Nephilim \n4. Humans \n5. Finished creating Forms" << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
		case 1: {

			for (auto player : information->character)
			{
				if (player->getCharacters() == "Angel")
				{
					player->AddForm("Angel of Death");
					cout << "Angel of Death form created! \n" << endl;
				}
			}
			system("pause");
			printForms(character, information);
		}
				break;

		case 2: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Demon")
				{
					player->AddForm("Devil");
					cout << "Devil form added! \n" << endl;
				}
			}
			system("pause");
			printForms(character, information);
		}
				break;

		case 3: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Nephilim")
				{
					player->AddForm("Osiris");
					cout << "Osiris form added! \n" << endl;
				}
			}
			system("pause");
			printForms(character, information);
		}
				break;

		case 4: {
			for (auto player : information->character)
			{
				if (player->getCharacters() == "Human")
				{
					player->AddForm("Demon Slayer");
					cout << "Demon Slayer form added! \n" << endl;
				}
			}
			system("pause");
			printForms(character, information);
		}
				break;

		case 5: {
			cout << "Exiting" << endl;
			system("pause");
		}
			break;

		default: break;
	}
}

void printInfo(const shared_ptr<Character> character, const shared_ptr<Information> information)
{
	system("cls");

	int index = 1;
	for (auto characterss : information->character)
	{
		cout << "Character " << index << " - " << characterss->getCharacters() << ":" << endl;
		cout << characterss->WeaponInfo() << endl;
		cout << characterss->AbilityInfo() << endl;
		cout << characterss->formInfo() << endl;
		cout << "________________________________" << endl;
		
		index += 1;
	}
	system("pause");
}


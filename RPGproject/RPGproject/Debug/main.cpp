#include<iostream>
#include<string>
#include<vector>
#include "Player.h"
#include"Mage.h"
#include"Priest.h"
#include"Warrior.h"
using namespace std;

void printMainMenu();
void printRaceMenu();

Player* createPlayer(string palyerName, int typeNum, int raceNum);
void doCleanUp(vector<Player*> playerList);
Race getRace(int raceNum);

void printAll(vector<Player*> playerList);

int main() 
{

	int choice;
	int raceNum;
	string playerName;
	vector <Player*> playerList;

	printMainMenu();
	cin >> choice;
	cin.get();

	while (choice != 0) {

		cout << "What were you like to name your character ?" << endl;
		getline(cin, playerName);


		printMainMenu();
			cin >>choice;
			cin.get();

			Player* tempPlayer = createPlayer(playerName, choice, raceNum);
			playerList.push_back(tempPlayer);
	}

	printAll(playerList);

	doCleanUp(playerList);

	cout << "Program Done! " << endl;


	return 0;
}



void printMainMenu() {

	cout << endl;
	cout << "Which of the following would you like ?" << endl;
	cout << "\t1 - Create a Warrior" << endl;
	cout << "\t2 - Create a Priest " << endl;
	cout << "\t3 - Create a Mage" << endl;
	cout << "\t0 - Finish creating players" << endl;
}
void printRaceMenu() {
	cout << " Now Whiuch Race do You want ?" << endl;
	cout << "\t 1 - Human" << endl;
	cout << "\t 2 - Elf" << endl;
	cout << "\t 3 - Dwarf" << endl;
	cout << "\t 4 - Orc" << endl;
	cout << "\t 5 - Troll" << endl;
}

Player* createPlayer(string palyerName, int typeNum, int raceNum) {
	
	Race playerRace = getRace(raceNum);

	Player* tempPlayer = nullptr;


	if (typeNum == 1) {

		tempPlayer = new Warrior(palyerName, playerRace);
	}

	else if (typeNum == 2) {

		tempPlayer = new Priest(palyerName, playerRace);
	}
	else if (typeNum == 3) {
		tempPlayer = new Mage(palyerName, playerRace);

	}
	return tempPlayer;
}
void doCleanUp(vector<Player*> playerList) {

	for (Player* player : playerList) {
		delete player;
	}
	playerList.clear();

}
Race getRace(int raceNum) {
	Race race;

	if (raceNum == 1) {
		race = HUMAN;
	}
	else if (raceNum == 2) {
		race = ELF;
	}
	else if (raceNum == 3) {
		race = DWARF;
	}
	else if (raceNum == 4) {
		race = ORC;
	}
	else if (raceNum == 5) {
		race = TROLL;
	}

	return race;
}

void printAll(vector<Player*> playerList) {

	for (Player* player : playerList) {
		cout << "I'm a " << player->whatRace() << " and my attack is " << player->attack() << endl;
	}
}
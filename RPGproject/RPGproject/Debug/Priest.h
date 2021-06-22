#ifndef PRIEST_H
#define PRIEST_H
#include"Player.h"
#include<string>
using namespace std;
class Priest : public Player {
public:
	Priest(string name, Race race) : Player(name, race, 100, 200) {

	}
	string attack() const {
		return "I will assult you with my Holy Warth!. ";
	}
private:
};

#endif
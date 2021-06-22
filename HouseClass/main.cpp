#include<iostream>
#include<string>
#include "House.h"


using namespace std;




void printHouseData(const House& house);

int main() {
	House myHouse;
	House urHouse;
	House theirHouse(4, 11, "Green");

	myHouse.print();

	myHouse.setColor("Red");
	myHouse.setNumStories(5);
	myHouse.setNumWindows(10);

	urHouse.setColor("Blue");
	urHouse.setNumStories(2);
	urHouse.setNumWindows(7);


	
	/*printHouseData(myHouse);
	printHouseData(urHouse);*/

	myHouse.print();
	urHouse.print();
	theirHouse.print();
	return 0;
}


void printHouseData(const House& house) {
	//cout << "The House is " << house.getColor() << " has " << house.getStories() << " Stories and " << house.getWindows() << " windows" << endl;
}
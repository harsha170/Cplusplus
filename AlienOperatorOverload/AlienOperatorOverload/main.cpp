#include<iostream>
#include "Alien.h"
using namespace std;

int main() {

	Alien alien1(120, 50, 'M');
	Alien alien2(200, 55, 'M');
	Alien alien3(250, 70, 'F');

	Alien alien4 = alien1 + alien2;
	Alien alien5 = alien2 + alien3;

	cout << "alien1 == alien2?" << boolalpha 
		<< (alien1 == alien2) << endl;
	cout << "alien1 != alien3?" 
		<< boolalpha << (alien1 != alien3) << endl;
	cout << "alien4 >= alien5?" 
		<< boolalpha << (alien4 >= alien5) << endl;
	cout << "alien2 <= alien5?" 
		<< boolalpha << (alien2 <= alien5) << endl;
	cout << "alien3 > alien5?"
		<< boolalpha << (alien3 > alien5) << endl;
	cout << "alien4 < alien5?"
		<< boolalpha << (alien4 < alien5) << endl;
	return 0;
}
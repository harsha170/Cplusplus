#include <iostream>
#include "AngryCat.h"
using namespace std;

void catTreats(int numTreats);

int main() {

	int numTreats = 0;

	cout << "Enter number of treats ?" << endl;
	cin >> numTreats;

	try {
		catTreats(numTreats);
	}
	catch(const AngryCat & err){

		cout << err.what() << endl;
	}

	return 0;
}

void catTreats(int numTreats) {
	if (numTreats < 3)
		throw AngryCat();
	else if (numTreats < 6)
		throw AngryCat("Kitty is still not satisfied!");
	
		cout << "Kitty is happy with " << numTreats << " treats." << endl;
}
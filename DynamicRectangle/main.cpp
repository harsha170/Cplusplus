#include<iostream>
#include "Rectangle.h"
using namespace std;

int main() {

	const int ARR_SIZE = 3;

	Rectangle* rectSize[ARR_SIZE];

	rectSize[0] = new Rectangle(5, 12);
	rectSize[1] = new Rectangle(3, 4);
	rectSize[2] = new Rectangle(6, 10);

	for (int i = 0; i < ARR_SIZE; i++) {

		cout << rectSize[i]->perimeter() << endl;
		cout << rectSize[i]->area() << endl;

		cout << endl;
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		delete rectSize[i];
		rectSize[i] = nullptr;
	}


	return 0;
}
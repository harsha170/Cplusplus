#include<iostream>
#include "WrapDriveOverheating.h"
#include<stdexcept>
using namespace std;

void wrapTest(int temp);

int main() {
	int temp;

	try {

		cout << "Testing....!!!";
		for (int i = 0; i < 10; i++) {
			wrapTest(50 + (i * 10));
		}
		//wrapTest(70);
	}
	catch (const wrapDriveOverheating & err) {
		cout << err.what() << endl;
	}
	
	

	return 0;
}

void wrapTest(int temp) {
	if (temp > 80) {
		throw wrapDriveOverheating();
	}
	else {
		cout << "Temperature condition is safe now!" << endl;
	}
}
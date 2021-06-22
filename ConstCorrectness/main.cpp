#include <iostream>

using namespace std;

void noChange();

int main() {

	noChange();

	return 0;
}

void noChange() {

	double*  myDouble = new double(12.89);

	cout << "\t no constant data: " << *myDouble << endl;

	*myDouble =  10.09;

	myDouble = new double(12.4);

	cout << "\t no constant data: " << *myDouble << endl;

	delete myDouble;
}

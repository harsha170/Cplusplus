#include<iostream>

using namespace std;

void threeTimesN(int input, int& output);
int main() {
	int myInput;
	threeTimesN(100, myInput);
	cout << "My Input is " << myInput << endl;

	return 0;
}

void threeTimesN(int input, int& output) {
	output = 3 * input;
}
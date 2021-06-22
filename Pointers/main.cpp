#include <iostream>

using namespace std;

int main() {
	 
	double num = 3.50;
	double* numPtr = &num;

	cout <<"Num: " << num << endl;
	cout << "*NumPtr: " << *numPtr << endl;
	cout << "NumPtr: " << numPtr << endl;

	bool *boolPtr = new bool;
	*boolPtr = true;

	cout << boolalpha << *boolPtr << endl;

	delete boolPtr;
	boolPtr = nullptr;



	return 0;
}
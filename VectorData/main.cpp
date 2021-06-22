#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> vecData;
	int input;

	cout << "Enter a non negative integer or negative integer to quit" << endl;
	cin >> input;

	while (input > 0) {


		vecData.push_back(input);
		cout << "Enter a non negative integer  or negative integer to quit" << endl;
		cin >> input;

		
	}

	cout << "doubled numbers are:  " << endl;

	for (int nums : vecData) {
		cout << nums * 2 << endl;
	}

	return 0;
}
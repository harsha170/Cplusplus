#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	const int NUM_PPL = 5;
	vector<string> vecName;
	vector<int> vecWeight;
	string tempName;
	int tempWeight;
	for (int i = 0; i < NUM_PPL; i++) {
		cout << "Enter persons Full Name " << endl;
		getline(cin, tempName);
		cout << "Enter " << tempName << "'s weight" << endl;
		cin>> tempWeight;
		cin.get();
		vecName.push_back(tempName);
		vecWeight.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PPL; i++) {
		cout << vecName[i] << "'s Weight is " << vecWeight[i] << endl;

	}
	return 0;
}
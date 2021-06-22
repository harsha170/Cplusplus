#include<iostream>
#include<fstream>
#include<string>
#include"ItemFreq.h"
using namespace std;

int main() {

	ItemFreq itemfreq;
	ifstream infile;
	string tempName;

	infile.open("shopping.txt");

	if (!infile) {
		cout << "error in file" << endl;
		return 1;
	}


	while (!infile.eof()) {
		infile >> tempName;
		itemfreq.addItem(tempName);

	}

	itemfreq.printFreq();

	infile.close();


	return 0;
}
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
	ifstream inputfile;
	inputfile.open("input.txt");
	int sum = 0;
	int inputNum;
	//cout << "bug" << endl;
	vector<int> myInts;

	if (!inputfile) {
		cout << "bug" << endl;
	}
	while (!inputfile.eof()) 
	{
		inputfile >> inputNum;
		myInts.push_back(inputNum);
		sum += inputNum;
	}

	for (int item : myInts) {
		cout << item << endl;
	}

	cout << endl;
	cout << "Sum: " << sum << endl;

	inputfile.close();
	return 0;
}
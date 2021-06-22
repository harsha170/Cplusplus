#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ifstream nums;
	ofstream doubleNums;

	nums.open("intNums.txt");
	doubleNums.open("output.txt");

	int inp;
	int mul;

	if (!nums) {
		cout << "File error" << endl;
	}

	while (!nums.eof()) {
		nums >> inp;
		mul = inp * 2;
		doubleNums << mul << endl;
		cout << mul << endl;
	}
	

	nums.close();
	doubleNums.close();

	return 0;
}
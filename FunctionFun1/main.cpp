#include<iostream>

using namespace std;

void printSqr(int n);
int calcSqr(int s);


int main() {
	
	printSqr(calcSqr(25));

	return 0;
}

void printSqr(int n) {
	cout << "the sqr is " << n << endl;
}

int calcSqr(int s) {
	return s * s;
}
#include<iostream>

using namespace std;
int factorial(int num);

int main() {
	int fact = factorial(6);
	cout << "Fact is" << fact << endl;
	
	return 0;
}

int factorial(int num) {
	if (num > 1) {
		return num * factorial(num - 1);
	}
	else {
		return 1;
	}
	
}
#include<iostream>
using namespace std;

void modifyGlobal();
int counter = 0;

int main() {
	cout << "Top loop " << counter << endl;
	for (int i = 0; i < 100; i++) {
		modifyGlobal();
		
	}

	cout<<"outside loop " << counter << endl;
}

void modifyGlobal() {
	counter++;
}
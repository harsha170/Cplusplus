#include<iostream>
#include<stdexcept>
using namespace std;

void printSomething(int num);
void doSomething(int num);


int main() {
	int num;
	

	try {
		cout << "Enter a number less than 100" << endl;
		cin >> num;
		doSomething(num);
		cout << "Yay! main able to process input" << endl;
	}
	catch (const invalid_argument & err) {
		cout << "Main cant process number" << endl;
		cout << err.what() << endl;
	}
	catch (out_of_range& err) {
		cout << "do Something says number is big!" << endl;
		cout << err.what() << endl;
	}


	return 0;
}

void printSomething(int num) {
	cout << "Welcome to positive integer " << endl;
		if (num > 100 ) {
			throw out_of_range("Number cannot be greater than 100 ");
			
		}
		else if (num > 0) {
			cout << "Yay! thats a great job! " << endl;
		}
		else {
			throw invalid_argument("Can't process this number");
		}
	
	
	
}

void doSomething(int num) {
	try {
		printSomething(num);
		cout << "Yay! printSomething could process that number"<< endl;
	}
	catch (const invalid_argument& err) {
		cout << "doSomething can't process number" << endl;
		cout << err.what() << endl;
		throw;
	}
	catch (out_of_range& err) {
		cout << "do Something says number is big!" << endl;
		throw;
	}
}
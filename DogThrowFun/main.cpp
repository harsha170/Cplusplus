#include <iostream>
#include <string>
#include <stdexcept>
#include "Dog.h"
using namespace std;

int main() {

	try {
		Dog d1("German");
		Dog d2("pubble");
		Dog d3("sally");

		cout << d1.getBreed() << endl;
		cout << d2.getBreed() << endl;

	}
	catch(const runtime_error & err){
		cout << err.what() << endl;
	}

	return 0;
}
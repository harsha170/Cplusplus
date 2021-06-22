#include <iostream>
using namespace std;
int main() {

	for (int i = 0; i <= 50; i++) {
		if (i % 2 == 0) {
			cout << "even number is " << i << endl;
		}
		else if (i % 2 != 0) {
			cout << "odd number is " << i << endl;
		}
	}

	return 0;
}
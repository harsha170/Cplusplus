#include<iostream>
#include<stdexcept>

using namespace std;

int imBroken(int n1, int n2);

int main() {
	try {
		int a;
		a = imBroken(18, 2);
		cout << a << endl;

		a = imBroken(10, 0);
		cout << a << endl;
	}
	catch (const invalid_argument& err) {
		cout << err.what() << endl;
	}
	
	return 0;
}
int imBroken(int n1, int n2) {
	int result;
	if (n2 != 0) {
		result = n1 / n2;
	}
	else {
		throw invalid_argument("Can't divide by 0.");
	}
	return result;
}
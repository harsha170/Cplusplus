#include <iostream>
#include <string>
using namespace std;

int getResult(int n);

int main() {
	int res = getResult(5);
	cout << res << endl;
	return 0;
}

int getResult(int n) {

	return n * n * n;
}
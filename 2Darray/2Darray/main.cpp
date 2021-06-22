#include<iostream>
#include<array>

using namespace std;

int main() {

	int myArr[2][3]{
		{1, 2, 3},
		{4, 5, 6}
	};
	myArr[1][0] = 14;

	cout << myArr[0][1] << endl;

	cout << endl;

	for (int row = 1; row >= 0; row--) {
		for (int col = 2; col >= 0; col--) {
			cout << myArr[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}
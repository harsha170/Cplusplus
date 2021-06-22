#include <iostream>
using namespace std;

int main() {
	int no1;
	int no2;
	int sum;
	cout << "enter non negative integer no1 to continue or negative integer to quit" << endl;
	cin >> no1;
	cout << "enter non negative integer no2 to continue or negative integer to quit" << endl;
	cin >> no2;
	while (no1 >= 0 && no2 >= 0)
	{
		sum = no1 + no2;
		cout << sum << endl;
		cout << "enter non negative integer no1 to continue or negative integer to quit" << endl;
		cin >> no1;
		cout << "enter non negative integer no2 to continue or negative integer to quit" << endl;
		cin >> no2;
	}

	return 0;
}
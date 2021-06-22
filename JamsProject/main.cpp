#include <iostream>
#include <string>

using namespace std;

int main() {

	char Package;
	int jams;
	int cost;

	cout << "What package do you own ? A,B, or C" << endl;
	cin >> Package;

	/*cout << "How many jams,jellies you purchased this month ?" << endl;
	cin >> jams;*/

	if (Package == 'A' || Package == 'a') {
		cout << "How many jams,jellies you purchased this month ?" << endl;
		cin >> jams;
		int packageCost = 8;
		int jamsIncluded = 2;
		if (jams <= jamsIncluded) {
			cout << "Total Cost is" << packageCost << " $" << endl;
		}
		else {
			jams -= jamsIncluded;
			cost = (jams * 5) + packageCost;
			cout << "Total cost is " << cost << " $" << endl;
		}
	}

	else if (Package == 'B' || Package == 'b')
	{
		cout << "How many jams,jellies you purchased this month ?" << endl;
		cin >> jams;
		int packageCost = 12;
		int jamsIncluded = 4;
		if (jams <= jamsIncluded) {
			cout << "Total Cost is" << packageCost << " $" << endl;
		}
		else {
			jams -= jamsIncluded;
			cost = (jams * 4) + packageCost;
			cout << "Total cost is " << cost << " $" << endl;
		}
	}

	else if (Package == 'C' || Package == 'c')
	{
		cout << "How many jams,jellies you purchased this month ?" << endl;
		cin >> jams;
		int packageCost = 15;
		int jamsIncluded = 6;
		if (jams <= jamsIncluded) {
			cout << "Total Cost is " << packageCost << " $" << endl;
		}
		else {
			jams -= jamsIncluded;
			cost = (jams * 3) + packageCost;
			cout << "Total cost is " << cost << " $" << endl;
		}
	}
	else {
		cout << "You have selected non-existing package" << endl;
	}


	return 0;
}
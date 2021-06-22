#include<iostream>
#include<stdexcept>

using namespace std;

char getGrade(int percent);

int main() {

	int percent;

	try {
		cout<<getGrade(50)<<endl;
		cout << getGrade(80) << endl;
		cout << getGrade(-50) << endl;

	}
	catch (const out_of_range& err) {
		cout << err.what() << endl;
	}

	return 0;
}

char getGrade(int percent) {
	char grade;
	if (percent > 100 || percent < 0) {
		throw out_of_range("Your percent must be in range of 0 to 100.");
		
	}
	else if (percent >= 90) {
		grade = 'A';
	}
	else if (percent >= 80) {
		grade = 'B';
	}
	else if (percent >= 70) {
		grade = 'C';
	}
	else if (percent >= 60) {
		grade = 'D';
	}
	else if (percent < 90) {
		grade = 'F';
	}
	return grade;
}
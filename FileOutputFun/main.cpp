#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void outFun(ofstream& outfile, int num);

int main() {

	ofstream outfile;
	int num;

	cout << "Enter a high number: " << endl;
	cin >> num;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	

	outFun(outfile, num);

	outfile.close();

	cout << "Done!" << endl;

	return 0;
}

void outFun(ofstream& outfile, int num) {


	for (int i = 1; i < num; i++) {
		outfile << setw(12) << setprecision(3) << (i * 6.87)
			<< setw(14) << setprecision(2) << (i * 7.56)<<endl;

		cout << setw(12) << setprecision(3) << (i * 6.87)
			<< setw(14) << setprecision(2) << (i * 7.56) << endl;
	}
}
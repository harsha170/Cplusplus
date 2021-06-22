#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ifstream scoresFile;
	ofstream outScores;

	scoresFile.open("scores.txt");
	int inpNum;
	double sum = 0.0;
	double average = 0.0;
	int max = 0;
	int min = 0;
	int count = 0;

	if (!scoresFile) {
		cout << "Oops Error while opening Scores file....!" << endl;
		return 1;
	}

	while (!scoresFile.eof()) {
		scoresFile >> inpNum;
		if (inpNum >= 0 && inpNum <= 100) {
			if (count == 0) {
				min = inpNum;
				max = inpNum;
			}
			if (inpNum < min){

				min = inpNum;
			}
			if (inpNum > max) {
				max = inpNum;
			}
			sum += inpNum;

			count++;
		}

	}

	if (count != 0) {
		average = sum / count;
	}

	cout << "Statistics: " << endl;
	cout << "\t Max: " << max << endl;
	cout << "\t Min: " << min << endl;
	cout << "\t Average: " << average << endl;
	scoresFile.close();
	outScores.close();


	return 0;
}
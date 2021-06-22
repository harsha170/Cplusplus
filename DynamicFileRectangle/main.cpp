#include<iostream>
#include "Rectangle.h"
#include<fstream>
#include<iostream>
#include<vector>

using namespace std;

void popRect(ifstream& inFile, vector<Rectangle*>& vecRect);

void print(ofstream& outFile, vector<Rectangle*>& vecRect);

void deallocate(vector<Rectangle*>& vecRect);

int main() {

	vector<Rectangle*> vecRect;
	ifstream infile;
	ofstream outfile;

	infile.open("Rectangle.txt");
	outfile.open("output.txt");

	if (!infile) {
		cout << "Oops Error in opening file.....!" << endl;
	}

	popRect(infile, vecRect);
	print(outfile, vecRect);
	deallocate(vecRect);

	infile.close();
	outfile.close();
	return 0;
}


void popRect(ifstream& infile, vector<Rectangle*>& vecRect) {

	Rectangle* temp;

	int length;
	int width;

	while (!infile.eof()) {
		infile >> length;
		infile >> width;

		temp = new Rectangle(length, width);
		vecRect.push_back(temp);
	}


}

void print(ofstream& outfile, vector<Rectangle*>& vecRect) {

	for (Rectangle* rectPtr : vecRect) {
		outfile << rectPtr->area() << "\t" << rectPtr->perimeter() << endl;
	}

}

void deallocate(vector<Rectangle*>& vecRect) {

	for (Rectangle* rectPtr : vecRect) {
		delete rectPtr;
		
	}
	vecRect.clear();
}

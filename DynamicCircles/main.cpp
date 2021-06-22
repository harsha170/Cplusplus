#include<iostream>

#include "Circle.h"

using namespace std;

void printCircles(Circle** circArray, int numCir );
int r;

int main() {
	int num = 0;
	//int r;
	cout << "Enter number of circles: " << endl;
	cin >> num;

	Circle** circles = new Circle* [num];

	for (int i = 0; i < num; i++) {
		cout << "Enter radius " << i << "circle" << endl;
		cin >> r;
		circles[i] = new Circle(r);
			//Circle areaC();
	}

	cout << endl;

	printCircles(circles, num);
	

	for (int i = 0; i < num; i++) {
		delete circles[i];
		circles[i] = nullptr;
	}

	delete[] circles;
	return 0;
}

void printCircles(Circle** circArray, int numCir) {
	for (int i = 0; i < numCir; i++) {
		cout << "Circle " << i << endl;
		cout << "\t Circumference " << circArray[i]->circum() << endl;
		cout << "\t Area " << circArray[i]->area() << endl;
	}

}
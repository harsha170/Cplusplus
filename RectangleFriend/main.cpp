#include<iostream>
using namespace std;
#include "Rectangle.h"
#include "RectangleHelper.h"
using namespace std;

void changeData(Rectangle& rect);

int main() {
	RectangleHelper helper;
	Rectangle r1(10, 5);

	cout << "r1 value Before: " << r1.area() << endl;
	cout << endl;

	changeData(r1);

	cout << "r1 Value After: " << r1.area() << endl;
	cout << endl;
	helper.modifyRect(r1);
	cout << "r1 Value After friend: " << r1.area() << endl;

	return 0;
}

void changeData(Rectangle& rect) {

	rect.width = 100;
	rect.length = 100;
}
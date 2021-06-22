#include<iostream>
#include "Rectangle.h"
using namespace std;


int main() {
	Rectangle rectangleArea(6.986676, 7.987656);
	Rectangle pRectangle(6.96,7.98);

	cout << "Area of Rectangle is " << rectangleArea.area() << endl;
	cout << "perimeter of Rectangle is " << pRectangle.perimeter() << endl;

	rectangleArea.setLength(20.0);
	rectangleArea.setWidth(25.0);

	pRectangle.setLength(20.0);
	pRectangle.setWidth(25.0);

	cout << "New length: " << rectangleArea.getLength() << endl;
	cout << "New width: " << rectangleArea.getWidth() << endl;

	cout << "New Area of Rectangle: " << rectangleArea.area() << endl;

	cout << "New perimeter of Rectangle is " << pRectangle.perimeter() << endl;
	return 0;
}
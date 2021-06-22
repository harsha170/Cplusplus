#include<iostream>
#include "Circle.h"
#include<cmath>
using namespace std;

#define pi 3.14;

Circle::Circle() {
	r = 1;
}

Circle::Circle(double r) {
	this->r = r;
}

double Circle::getRadius(double r) {
	return r;
}

void Circle::setRadius(double r) {
	this->r = r;
}

double Circle::area() const {
	return pow(r,2) * pi; 
}

double Circle::circum() const {
	return 2 * r * pi;
}
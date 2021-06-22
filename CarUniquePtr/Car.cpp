#include<iostream>
#include<string>
#include "Car.h"

using namespace std;



Car::Car(string color, int numdoors) {
	this->color = color;
	this->numdoors = numdoors;
}
string Car::getColor() {
	return color;
}
int Car::getDoors() {
	return numdoors;
}
#include<iostream>
#include "Animal.h"
#include<string>
using namespace std;

Animal::Animal(string name, double weight) {
	this->name = name;
	this->weight = weight;
}
void Animal::setName(string name) {
	this->name = name;
}
void Animal::setWeight(double weight) {
	this->weight = weight;
}
double Animal::getWeight() const {
	return weight;
}
string Animal::getName() const {
	return name;
}
string Animal::eat() const {
	return "I love dog food";
}

string Animal::getNoise() const {
	return "No Voice";
}
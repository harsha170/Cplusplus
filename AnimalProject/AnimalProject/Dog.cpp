#include<iostream>
#include<string>
#include"Dog.h"

using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name,weight) 
{

	this->breed = breed;
}
string Dog::getBreed()const {
	return breed;
}
void Dog::digHole() const {
	cout << "I'm digging Hole!" << endl;
}

string Dog::getNoise() const {
	return "Woof!";
}

void Dog::chaseCat() const {
	cout << "I'm Chasing the cat!, Here Kitty! Kitty!" << endl;
}

string Dog::eat() const {
	return "I love Dog Food.";
}
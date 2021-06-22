#include<iostream>
#include<string>
#include "Animal.h"
#include "Cat.h"

using namespace std;

Cat::Cat(string name, double weight) : Animal(name,weight) {

}

void Cat::chaseMouse() const {
	cout << "I'm Chasing Mouse!" << endl;
}

string Cat::getNoise() const {
	return "Meow!";
}

string Cat::eat() const {
	return "Tasty Kitty!";
}
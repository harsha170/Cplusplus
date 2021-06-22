#include<iostream>
#include<stdexcept>
#include "Dog.h"

using namespace std;

Dog::Dog(string breed) {
	if (breed != "pubble") {
		this->breed = breed;
	}
	else {
		throw runtime_error ("Pubble is not a dog breed");
	}
}

string Dog::getBreed() const {
	return breed;
}
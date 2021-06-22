#include "House.h"
#include<string>
#include<iostream>
using namespace std;

		House::House() {
			this->color = "White";
			this->numStories = 5;
			this->numWindows= 8;
			}

		House::House(int numStories, int numWindows, string color) {
			this -> numStories = numStories;
			this->numWindows = numWindows;
			this->color = color;
		}

		House::~House() {
			cout << "The House with " << color << " color and " << numStories << " Stories," << numWindows << " windows Destroyed!" << endl;
		}
	void House:: setNumStories(int numStories) {
		this->numStories = numStories;
	}

	void House::setColor(string color) {
		this->color = color;
	}

	void House::setNumWindows(int numWindows) {
		this->numWindows = numWindows;
	}

	int House::getStories() const {
		return numStories;
	}

	int House::getWindows() const {
		return numWindows;
	}
	string House::getColor() const {
		return color;
	}

	void House::print() const {
		cout << "The House is " << color << " has " << numStories << " Stories and " << numWindows << " windows" << endl;

	}



	string color;
	int numStories;
	int numWindows;

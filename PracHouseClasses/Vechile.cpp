#include<iostream>
#include<string>
#include "Vechile.h"

using namespace std;
		
		Vechile::Vechile(string name, string color, int chasis, string breaking, int cost) {
			this->name = name;
			this->color = color;
			this->chasis = chasis;
			this->breaking = breaking;
			this->cost = cost;
				}


		void Vechile:: setName(string name) {
			this->name = name;
		}

		void Vechile::setColor(string color) {
			this->color = color;
		}

		void Vechile::setChasis(int chasis) {
			this->chasis = chasis;
		}

		void Vechile::setBreakingSystem(string breaking) {
			this->breaking = breaking;
		}

		void Vechile::setCost(int cost) {
			this->cost = cost;
		}

		string Vechile::getName() const {
			return name;
		}

		string Vechile::getColor() const {
			return color;
		}

		int Vechile::getChasis()const {
			return chasis;
		}

		string Vechile::getBreakingSystem() const {
			return breaking;
		}

		int Vechile::getCost() const {
			return cost;
		}

		void Vechile::print() const {
			cout << "The brand new " << name << " comes with " << breaking << " system and " << color << " color with " << chasis << "CC."<<" With reasonable price "<<cost<<" RS" << endl;
		}
#include "Pizza.h"
#include<string>
#include<vector>
#include<iostream>

using namespace std;



			Pizza::Pizza(string name, int cost, int diameter) {
				this->name = name;
				this->cost = cost;
				this->diameter = diameter;
				toppings.push_back("cheese");
			}
			void Pizza::addTopping(string topping) {
				toppings.push_back(topping);
			}
			string Pizza::getName() const {
				return name;
			}
			int Pizza::getCost() const {
				return cost;
			}
			int Pizza::getDiameter() const {
				return diameter;
			}
			void Pizza::printToppings() const {
				for (string topping : toppings) {
					cout << "\t" << topping << endl;
				}
			}


			string name;
			int cost;
			int diameter;
			vector<string> toppings;
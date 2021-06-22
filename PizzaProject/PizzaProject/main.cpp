#include <iostream>
#include<string>
#include<vector>
#include "Pizza.h"

using namespace std;

void printPizzzaData(const Pizza& pizza);

int main() {
	Pizza pizzaVeg("Paneer Pizza", 8, 5);
	Pizza pizzaNonVeg("Chicken Barbeque", 10, 5);
	pizzaVeg.addTopping("Pepperoni");
	Pizza special("Special Pizza", 15, 12);

	special.addTopping("Black Olives");
	special.addTopping("Extra Cheese");
	special.addTopping("Pepperroni");
	special.addTopping("Onion");

	printPizzzaData(pizzaVeg);
	printPizzzaData(pizzaNonVeg);
	printPizzzaData(special);



	return 0;
}

void printPizzzaData(const Pizza& pizza) {
	cout << "Name: "<<pizza.getName() << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Toppings: " << endl;
	pizza.printToppings();
	cout << endl;
}
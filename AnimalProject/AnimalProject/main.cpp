#include<iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main() {

	//Animal animal1("Horse", 78.90);

	Dog dog("Tommy", 56.86, "Pumbaraian");

	Animal* dogPtr = new Dog("Fido", 35, "german");

	Animal* catPtr = new Cat("Tom", 45.8);

	cout << "Cat voice " << catPtr->getNoise() << endl;
	cout << "Cat Ate  " <<  catPtr->eat() << endl;
	//cout << "Cat Chase " << ((Cat*)catPtr)->chaseMouse() << endl;
	((Cat*)catPtr)->chaseMouse();//old version 
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse(); //new version

	/*cout << "Animal Name: " << animal1.getName() << endl;
	cout << "Animal Weight: " << animal1.getWeight() << endl;
	cout << "Animal Noise: " << animal1.getNoise() << endl;

	*/
	cout << endl;

	//cout<<dogPtr->eat()<<endl;

	/*cout << "Dog's Name " << dog.getName() << endl;
	cout << "Dog's Weight " << dog.getWeight() << endl;
	cout << "Dog's Noise " << dog.getNoise() << endl;
	cout << "Dog's Breed " << dog.getBreed() << endl;
	dog.digHole();
	dog.chaseCat();*/
	//dog.eat();

	delete catPtr;
	catPtr = nullptr;
	return 0;
}
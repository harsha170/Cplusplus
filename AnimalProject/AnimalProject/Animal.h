#ifndef ANIMAL_H
#define ANIMAL_H
#include<string>
using namespace std;


class Animal {

public:
	Animal(string name, double weight);
	void setName(string name);
	void setWeight(double weight);
	double getWeight() const;
	string getName() const;
	string getNoise() const;
	virtual string eat() const = 0;

private:
	string name;
	int weight;
};

#endif
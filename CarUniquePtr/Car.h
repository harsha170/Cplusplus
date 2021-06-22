#ifndef CAR_H
#define CAR_H
#include<string>

using namespace std;

class Car {
public:
	Car(string color, int numdoors);
	string getColor();
	int getDoors();

private:
	string color;
	int numdoors;
};

#endif
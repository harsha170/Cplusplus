#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std; 

class Circle {
public:
	Circle();

	Circle(double r);

	double getRadius(double r);

	void setRadius(double r);

	double area() const;

	double circum() const;

private:
	double r;


};

#endif
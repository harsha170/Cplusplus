#ifndef HOUSE_H
#define HOUSE_H

#include<string>
using namespace std;

class House {
public:
	House();

	House(int numStories, int numWindows, string color);

	~House();

	void setNumStories(int numStories);

	void setColor(string color);

	void setNumWindows(int numWindows);

	int getStories() const;

	int getWindows() const;
	string getColor() const;

	void print() const;


private:
	string color;
	int numStories;
	int numWindows;


};//end class
#endif;

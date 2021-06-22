#ifndef ITEMFREQ_H
#define ITEMFREQ_H
#include <vector>
#include<string>
using namespace std;

class ItemFreq {
public:
	void addItem(string item);
	void printFreq() const;

private:
	vector<string> items;
	vector<int> frequencies;
	int indexOfItem(string item) const;
};


#endif;
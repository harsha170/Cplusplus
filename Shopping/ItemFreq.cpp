#include<iostream>
#include<string>
#include"ItemFreq.h"
#include<iomanip>
#include <vector>
using namespace std;


void ItemFreq::addItem(string item) {
	
	int index = indexOfItem(item);
	if (index != -1) {
		frequencies[index]++;
	}
	else {
		items.push_back(item);
		frequencies.push_back(1);
	}

}

void ItemFreq::printFreq() const {
	for (int i = 0; i < items.size(); i++) {
		cout << setw(12) << items[i] << setw(8) << frequencies[i] << endl;
	}
}

int ItemFreq::indexOfItem(string item) const {
	int resIndex = -1;

	for (int i = 0; i < items.size(); i++) {
		if (item == items.at(i)) {
			resIndex = i;
			break;
		}
	}

	return resIndex;
}


string item;
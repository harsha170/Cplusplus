#include <iostream>
using namespace std;
#include "Swapper.h"
template <class T>
T getBigger(T a, T b);



int main() {
	Swapper<int> intSwapper(5, 10);
	Swapper<string> strSwapper("Jhon", "Sam");

	double big = getBigger(3.14, 4.15);
	int big1 = getBigger(55,90);

	cout << big << endl;
	cout << big1 << endl;

	cout << endl;
	cout << "Before Swap " << endl;
	cout << intSwapper.getFirst() <<" "<<intSwapper.getSecond()<< endl;
	cout << strSwapper.getFirst() << " " << strSwapper.getSecond() << endl;

	intSwapper.swap();
	strSwapper.swap();
	cout << "After Swap " << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << strSwapper.getFirst() << " " << strSwapper.getSecond() << endl;


	return 0;
}



template <class T>
T getBigger(T a, T b) {
	if (a > b) {
		return a;
	}
	return b;
}

//double getBigger(double a, double b) {
//	if (a > b) {
//		return a;
//	}
//	return b;
//}
//int getBigger(int a, int b) {
//
//	if (a > b) {
//		return a;
//	}
//	return b;
//}

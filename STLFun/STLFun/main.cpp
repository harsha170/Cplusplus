#include<iostream>
#include<deque>
using namespace std;


void printDeque(deque<int> deck);
int main() {

	deque<int> myDeck;

	myDeck.push_back(9);
	myDeck.push_back(2);
	myDeck.push_back(7);
	myDeck.push_back(5);

	cout << "Push back: " << endl;
	printDeque(myDeck);
	cout << endl;
		cout << "Push Front: " << endl;

		myDeck.push_front(14);
		myDeck.push_front(15);
		myDeck.push_front(16);
		myDeck.push_front(18);

		printDeque(myDeck);


	return 0;
}

void printDeque(deque<int> deck) {
	for (int num : deck) {
		cout << num << endl;
	}
}
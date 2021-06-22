#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int num;
	bool guessed = false;
	int count = 0;
	srand((unsigned)time(NULL));
	int random = rand() % 100;
	while(!guessed){
		cout << "Guess a Number " << endl;
		cin >> num;
		if (num > 100 || num < 1) {
			cout << "That was a wasted guess. You must guess an number 1>num<100 " << endl;
		}
		 else if (random == num) {
			guessed = true;
			cout << "Congratulations your guess is right" << endl;
		}
		else if (num > random) {
			cout << "Your guess is high" << endl;
		}
		else if (num < random) {
			cout << "Your guess is low" << endl;
		}
		count++;
	
	}
	cout << "You had guessed number in " << count << " times. Thanks for Playing" << endl;
	return 0;
}
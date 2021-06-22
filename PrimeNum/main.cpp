#include<iostream>
using namespace std;

int main() {
	int num;
	int isPrime = true;
	cout << "Enter a Number to check Prime or not: " << endl;
	cin >> num;


	if (num == 0 || num == 1) {
		cout << num << "is prime"<<endl;
	}
	else {
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				isPrime = false;
				break;
			}

		}
		if (isPrime) {
			cout << num << " is prime" << endl;
		}
		else {
			cout << num << " not prime" << endl;
		}
	}




	return 0;
}
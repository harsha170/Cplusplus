#include<iostream>
#include<array>

using namespace std;

int main() {

	array<int, 5> nums;
	

	for (int i = 0; i < 5; i++) {
		cout << "enter a number" << endl;
		cin >> nums[i];
		
}
	for (int Ints : nums) {
		cout << "here are doubled " << Ints * 2 << endl;
	}

	return 0;
}
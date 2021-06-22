#include <iostream>
#include<array>

using namespace std;

int main() {

	array<int, 10> nums;

	for (int i = 0; i < nums.size(); i++) {
		nums[i] = i * 2;
	}

	for (int a : nums) {
		cout << a << endl;
	}

	return 0;
}
#include<iostream>
#include<array>
using namespace std;

int sumArray(int arr[], int arrSize);

int main() {
	int arr[]{ 5,6,9,8,3,7,2,8,9,10 };
	int sum = sumArray(arr, 10);

	cout << sum << endl;
	return 0;
}

int sumArray(int arr[], int arrSize) {
	int sum = 0;
	for (int i = 0; i < arrSize; i++) {
		sum += arr[i];
	}

	return sum;
}
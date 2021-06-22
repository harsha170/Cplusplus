#include <iostream>
#include<array>

using namespace std;
int sumArr(array<int, 10> myArray);
void theArr(array<int, 10> refArray, int& ref);

int main() {
	
	array<int, 10> newArray{ 1,2,3,4,5,6,7,8,9,10 };
	int result = sumArr(newArray);

	cout << "The result: " << result << endl;

	int resByRef;

	theArr(newArray, resByRef);

	cout << resByRef << endl;

	return 0;
}

int sumArr(array<int, 10> myArray) {
	int sum = 0;
	for (int item : myArray) {
		sum = sum + item;
	}

	return sum;

}

void theArr(array<int, 10> refArray, int& ref) {
	ref = 0;
	for (int refItem : refArray) {
		ref += refItem;
	}
}



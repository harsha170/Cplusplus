#include<iostream>
#include <string>
#include<stack>
using namespace std;

void storeReverse(string orgiString, stack<char>& reverseStack);
bool isPalindrome(string orgiString);
void printResult(string orgiString);

int main() {

	string strArray[5];
	strArray[0] = "fudeg";
	strArray[1] = "bob";
	strArray[2] = "civic";
	strArray[3] = "dogs";
	strArray[4] = "racecar";

	for (string str : strArray) {
		printResult(str);
		cout << endl;
	}

	return 0;
}


void storeReverse(string orgiString, stack<char>& reverseStack) {

	for (char c : orgiString) {
		reverseStack.push(c);
	}
}
bool isPalindrome(string orgiString) {
	stack<char> reverseStack;
	storeReverse(orgiString, reverseStack);

	bool result = true;

	if (orgiString.length() == reverseStack.size()) {
		for (char c : orgiString) {
			char currChar = reverseStack.top();
			if (currChar != c) {
				result = false;
				break;
			}
			reverseStack.pop();
		}
	}
	else {
		result = false;
	}
	return result;
}
void printResult(string orgiString) {

	cout << "Is " << orgiString << " a palindrome ?\t" << boolalpha
		<< isPalindrome(orgiString) << endl;
}
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {

	queue<string> names;
	names.push("jhon");
	names.push("sally");
	names.push("Ajay");
	names.push("Sam");
	names.push("Ali");
	names.push("Karen");

	while (!names.empty()) {
		cout << names.front() << endl;
		names.pop();
	}
	return 0;
}
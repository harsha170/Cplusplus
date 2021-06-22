#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {

	map<string, string> contacts;

	contacts["jhon"] = "0987654213";
	contacts["Ajay"] = "9533631068";
	contacts["sally"] = "9505138060";
	//contacts["jhon"] = "0987654213";

	for (pair<string, string> element : contacts) {
		cout << element.first << " = " << element.second << endl;
	}
}
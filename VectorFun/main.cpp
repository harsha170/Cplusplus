#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	vector<string>  names;
	names.push_back("Ajay");
	names.push_back("vijay");
	names.push_back("bob");
	names.push_back("don");
	names.push_back("jhon");


	for (string Name : names) {
		cout << "vectors list:  " << Name << endl;
	}
	
	
	names.insert(names.begin() + 2, "Marcob");
	names.pop_back();

	for (string Name : names) {
		cout << "new vectors list: " << Name << endl;
	}


	return 0;
}
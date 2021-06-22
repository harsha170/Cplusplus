#ifndef DICTIONARY_H
#define DICTIONARY_H
#include<map>
#include<string>
using namespace std;

class Dictionary {

public:
	void adddefination(string word, string defination);
	string getDefination(string word)const;
	void printAll();
private:

	map<string, string> dictionary; //map name
};

#endif
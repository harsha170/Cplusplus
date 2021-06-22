#include<iostream>
#include<map>
#include<string>
#include "Dictionary.h"

using namespace std;

void printMenu();
void uiAddWord(Dictionary& dictionary);
void uiGetDefination(const Dictionary& dictionary);

int main() {

	Dictionary theDictionary;

	int userChoice;
	printMenu();
	cin >> userChoice; //user selects options from printMenu().
	cin.get();

	while (userChoice != 0) {

		if (userChoice == 1) {
			uiAddWord(theDictionary);
		}
		else if (userChoice == 2) {
			uiGetDefination(theDictionary);
		}
		else if (userChoice == 3) {
			cout << "Printing All Definations" << endl;
			theDictionary.printAll(); //printing all by getting printAll method from class.
			cout << endl;
		}
		cout << endl;

		printMenu();
		cin >> userChoice;
		cin.get();
	}
	cout << "Program Done!" << endl;
	return 0;
}

void printMenu() {
	cout << endl; //normal menu to display user to select first.
	cout << "Type your Selection" << endl;
	cout << "1 - Add a new word & defination" << endl;
	cout << "2 - Get the defination for a word" << endl;
	cout << "3 - Print all definations" << endl;
	cout << "0 - Exit the program" << endl;
	cout << endl;

}
void uiAddWord(Dictionary& dictionary) {

	string word;
	string defination;

	cout << "Enter a Word" << endl;
	getline(cin, word);

	cout << "Enter the defination for " <<word<< endl;
	getline(cin, defination);


	dictionary.adddefination(word, defination);  //adding defination calling method in class.
}
void uiGetDefination(const Dictionary& dictionary) {

	string theWord;
	cout << "For which word you want defination?" << endl;

	getline(cin, theWord);

	cout << dictionary.getDefination(theWord) << endl; //getting defination calling method in class.
}

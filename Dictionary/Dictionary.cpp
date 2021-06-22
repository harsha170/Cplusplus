#include<iostream>
#include<map>
#include<string>
#include "Dictionary.h"

using namespace std;


		void Dictionary::adddefination(string word, string defination) {
			auto it = dictionary.find(word);

			if (it != dictionary.end()) { //if word is there in dictionary, updating defination.
				it->second = defination;
			}
			else {
				dictionary[word] = defination; //if no word find there assining defination to word.
			}

		}
		string Dictionary::getDefination(string word)const {

			auto it = dictionary.find(word); //finding word from dictionary

			string result = "";

			if (it != dictionary.end()) { //if word found 
				result = it->second;       //displaying defination(like Value for key)
			}
			else {
				result = "Not Found";
			}

			return result;


		}
		void Dictionary::printAll() {
			for (auto pair : dictionary) {
				cout << pair.first << ":\t" << pair.second << endl;  //printing like key value pairs.
			}
			cout << endl;
		}
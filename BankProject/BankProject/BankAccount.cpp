#include<iostream>
#include "BankAccount.h"
#include<string>
using namespace std;

			BankAccount::BankAccount(string owner) {
				this->owner = owner;
				this->balance = 0;
			}

			BankAccount::BankAccount(string owner, int balance) {
				this->owner = owner;
				if (balance <= 0)
				{
					cout << "You have to enter value > 0. " << endl;
				}
				else
				{
					this->balance = balance;
				}
				
			}

			void BankAccount::deposit(int amount) {

				if (amount > 0) {
					balance += amount;
				}

				else {
					cout << "The Deposit amount must be greater than 0. " << endl;
				}
			}

			void BankAccount::withdraw(int amount) {
				if (amount > 0 && amount <= balance) {
					balance -= amount;
				}
				else {
					cout << "The Withdraw amount must be greater than 0 " <<
						"and less than your balance." << endl;
				}
			}

			string BankAccount::getOwner() const {
				return owner;
					}

			int BankAccount::getBalance() const {
				return balance;
			}

			string owner;
			int balance;
#include<iostream>
#include<string>
#include "BankAccount.h"
using namespace std;


int main() {

	BankAccount myAccount("Jerry", 5000);
	BankAccount tomAccount("Tom");

	tomAccount.deposit(500);

	cout << "Tom deposited " << tomAccount.getBalance() << endl;

	tomAccount.withdraw(1000);

	cout << "You can't withdraw because your account has " << tomAccount.getBalance() << " only!" << endl;

	cout << myAccount.getOwner() << " Account contains " << myAccount.getBalance() << endl;

	myAccount.withdraw(500);

	cout << myAccount.getOwner() << " current Balance after withdrawl " << myAccount.getBalance() << endl;

	return 0;
}
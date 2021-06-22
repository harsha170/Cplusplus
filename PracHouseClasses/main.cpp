#include<iostream>
#include<string>
#include "Vechile.h";

using namespace std;



int main() {
	Vechile cbHornet("Honda CB Hornet", "Repsol Edition", 198,"ABS",200000);
	Vechile royalEnfield("Royal Enfield Bullet","Matte Black", 350, "ABS",180000);
	Vechile ktmDuke("KTM Duke", "Orange-White", 150, "CBS",150000);
	cbHornet.print();
	royalEnfield.print();
	ktmDuke.print();

	return 0;
}


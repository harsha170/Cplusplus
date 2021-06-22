#ifndef VECHILE_H
#define VECHILE_H
#include<iostream>
#include<string>

using namespace std;

	class Vechile {
		
		public: 
			Vechile();
			Vechile(string name, string color, int chasis, string breaking, int cost);

			void setName(string name);

			void setColor(string color);

			void setChasis(int chasis);

			void setBreakingSystem(string breaking);

			void setCost(int cost);

			string getName() const;

			string getColor() const;

			int getChasis() const;

			string getBreakingSystem() const;

			int getCost() const;

			void print() const;
		
		private: 
			string name;
			string color;
			int chasis;
			string breaking;
			int cost;
		
	};
#endif;
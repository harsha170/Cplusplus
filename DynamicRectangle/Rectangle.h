#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>


class Rectangle {

		public:
			Rectangle(double length, double width);

			void  setLength(double length);

			void  setWidth(double width);

			double getLength() const;

			double getWidth() const;

			double area() const;

			double perimeter() const;

		private: 
			double length;
			double width;
};




#endif;

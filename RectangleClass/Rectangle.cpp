#include "Rectangle.h"
#include<iostream>

using namespace std;


			Rectangle::Rectangle(double length, double width) {
				this->length = length;
				this->width = width;
			}

			void Rectangle::setLength(double length) {
				this->length = length;
			}

			void Rectangle::setWidth(double width) {
				this -> width = width;
			}

			double Rectangle::getLength() const {
				return length;
			}

			double Rectangle::getWidth() const {
				return width;
			}

			double Rectangle:: area() const {
				
				return length * width;
			}

			double Rectangle::perimeter() const {
				return 2 * (length + width);
			}

		
			double length;
			double width;
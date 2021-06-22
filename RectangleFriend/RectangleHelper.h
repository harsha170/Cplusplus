#ifndef RECTANGLE_HELPER_H
#define RECTANGLE_HELPER_H
#include "Rectangle.h"
using namespace std;

class RectangleHelper {
public:
	void modifyRect(Rectangle& rect) {
		rect.width = 500;
		rect.length = 100;
	}
};

#endif
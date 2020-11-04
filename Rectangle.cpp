#include "Rectangle.h"
#include <iostream>

void Rectangle::draw() {
	std::cout << "Drawing rectangle with "
	          << "x = " << this->getX()
		  << ", y = " << this->getY()
		  << ", w = " << this->w
		  << ", h = " << this->h
		  << std::endl;
}

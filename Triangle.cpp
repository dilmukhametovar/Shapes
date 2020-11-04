#include "Triangle.h"
#include <iostream>

void Triangle::draw() {
	std::cout << "Drawing triangle with "
	          << "x = " << this->getX()
		  << ", y = " << this->getY()
		  << ", a = " << this->a
		  << ", b = " << this->b
		  << ", c = " << this->c
		  << std::endl;
}


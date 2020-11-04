#include <iostream>
#include "Circle.h"

void Circle::draw() {
	std::cout << "Drawing circle with "
                  << "x = " << this->getX()
                  << ", y = " << this->getY()
                  << ", radius = " << this->radius
                  << std::endl;
}

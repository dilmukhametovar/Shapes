#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <vector>

int main() {
	std::vector<Shape *> shapes;
	shapes.push_back(new Circle(1, 1, 2));
	shapes.push_back(new Triangle(2, 2, 3, 4, 5));
	shapes.push_back(new Rectangle(3, 3, 4, 3));
	
	for (auto * s : shapes) {
		s->draw();
	}
}

#include "Shape.h"

class Triangle : public Shape {
	double a, b, c; // triangle's sides in clockwise order
public:
	Triangle(double a) : Shape(), a(a), b(a), c(a) {}
	Triangle(double x, double y, double a) {}
	Triangle(double x, double y, double a, double b, double c) :
		Shape(x, y), a(a), b(b), c(c) {}

	virtual void draw() override;
};

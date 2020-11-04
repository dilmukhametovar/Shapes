#include "Shape.h"

class Circle : public Shape {
	double radius;
public:
	explicit Circle(double radius) : Shape(), radius(radius) {}
	Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}

	virtual void draw() override;
};


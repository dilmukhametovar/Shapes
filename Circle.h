#include "Shape.h"

class Circle : public Shape {
	double radius;
public:
	explicit Circle(radius) : Shape(), radius(radius) {}
	Circle(double x, double y) : Shape(x, y), radius(radius) {}

	~Circle() {}
	
	virtual void draw() override;
};


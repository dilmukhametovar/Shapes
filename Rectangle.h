#include "Shape.h"

class Rectangle : public Shape {
	double w, h;
public:
	Rectangle(double a) : Shape(), w(a), h(a) {} //Square
	Rectangle(double x, double y, double a) :
		Shape(x, y), w(a), h(a) {} // Square
	Rectangle(double x, double y, double w, double h) :
		Shape(x, y), w(w), h(h) {}

	double getW() { return w; }
	double getH() { return h; }
	
	void setW(double w) { this->w = w; }
	void setH(double h) { this->h = h; }

	virtual void draw() override;
};

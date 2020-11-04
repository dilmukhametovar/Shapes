#pragma once

class Shape {
	double x, y;
public:
	Shape() : x(0), y(0) {}
	Shape(double x, double y) : x(x), y(y) {}
	virtual ~Shape() {}

	double getX() { return x; }
	double getY() { return y; }
	double setX(double x) { this->x = x; }
	double setY(double y) { this->y = y; }

	virtual void draw() = 0;
};

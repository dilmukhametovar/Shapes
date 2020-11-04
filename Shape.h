class Shape {
	double x, y;
public:
	Shape() : x(0), y(0) {}
	Shape(double x, double y) : x(x), y(y) {}
	~Shape() {}
	virtual void draw() = 0;
;}

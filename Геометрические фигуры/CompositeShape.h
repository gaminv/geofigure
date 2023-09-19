#ifndef COMPOSITESHAPE_H
#define COMPOSITESHAPE_H

#include "shape.h" 

class CompositeShape : public Shape
{
public:
	CompositeShape();
	~CompositeShape();

	void addShape(Shape* shape);
	double getArea();
	/*Shape* clone();
	rectangle_t getFrameRect();
	void move(double x, double y);
	void move(point_t& newCentre);*/
	void scale(double k);
	std::string getName();

	
private:
	Shape** shapes_ = new Shape*;
	int size_;
	point_t pos_;
};

#endif

#include "CompositeShape.h"

CompositeShape::CompositeShape()
{
	pos_.x = 0.0;
	pos_.y = 0.0;
	size_ = 0;
}

CompositeShape::~CompositeShape()
{
	std::cout << "destructor";
}

void CompositeShape::addShape(Shape* shape)
{
	Shape* copyShape;
	copyShape = shape->clone();
	shapes_[size_] = copyShape;
	size_++;

	pos_.x = this->getFrameRect().pos.x;
	pos_.y = this->getFrameRect().pos.y;
}

double CompositeShape::getArea() 
{
	double area = 0;
	for (int i = 0; i < size_; i++) {
		area += shapes_[i][0].getArea();
	}
	return area;
}

void CompositeShape::scale(double k)
{

	for (int i = 0; i < size_; i++) {
		shapes_[i][0].scale(k);
	}
}


std::string CompositeShape::getName() 
{
	return "COMPLEX";
}


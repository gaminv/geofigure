#include "rectangle.h"

Rectangle::Rectangle()
{
	leftPoint_.x = 0.0;
	leftPoint_.y = 0.0;
	rightPoint_.x = 0.0;
	rightPoint_.y = 0.0;
}

Rectangle::Rectangle(double leftX, double leftY, double rightX, float rightY)
{
	leftPoint_.x = leftX;
	leftPoint_.y = leftY;
	rightPoint_.x = rightX;
	rightPoint_.y = rightY;
	Rectangle_.width = rightPoint_.x - leftPoint_.x;
	Rectangle_.height = rightPoint_.y - leftPoint_.y;
	Rectangle_.pos.x = (rightPoint_.x + leftPoint_.x) / 2;
	Rectangle_.pos.y = (rightPoint_.y + leftPoint_.y) / 2;
}

Rectangle::~Rectangle()
{
	std::cout << "destructor rectangle\n";
}

double Rectangle::getArea()
{
	return Rectangle_.width * Rectangle_.height;
}

rectangle_t Rectangle::getFrameRect()
{
	// Ограничивающий прямоугольник
	return Rectangle_;
}

void Rectangle::move(double x, double y) //Смещение по осям 
{
 	rightPoint_.x += x;
	rightPoint_.y += y;
	leftPoint_.x += x;
	leftPoint_.y += y;
}

void Rectangle::move(const point_t& newCentre) //Перемещение в конкретнюю точку
{
	leftPoint_.x = newCentre.x - Rectangle_.width / 2;
	leftPoint_.y = newCentre.y - Rectangle_.height / 2;
	rightPoint_.x = newCentre.x + Rectangle_.width / 2;
	rightPoint_.y = newCentre.y + Rectangle_.height / 2;
}

void Rectangle::scale(double k)
{
	rightPoint_.x = Rectangle_.pos.x + Rectangle_.width / 2 * k;
	rightPoint_.y = Rectangle_.pos.y + Rectangle_.height / 2 * k;
	leftPoint_.x = Rectangle_.pos.x - Rectangle_.width / 2 * k;
	leftPoint_.y = Rectangle_.pos.y - Rectangle_.height / 2 * k;
}

std::string Rectangle::getName() 
{
	return "RECTANGLE";
}

Shape* Rectangle::clone() 
{
	Shape* cloneShape;
	Rectangle *rectangle = new Rectangle;
	rectangle->leftPoint_ = this->leftPoint_;
	rectangle->rightPoint_ = this->rightPoint_;
	cloneShape = rectangle;
	delete rectangle;
	return cloneShape;
}





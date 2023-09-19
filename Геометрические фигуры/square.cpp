#include "square.h"

Square::Square()
{
	leftPoint_.x = 0.0;
	leftPoint_.y = 0.0;
	square_.height = 0;
	square_.width = 0;
	square_.pos.x = 0;
	square_.pos.y = 0;
}

Square::Square(double leftX, double leftY, double length)
{
	leftPoint_.x = leftX;
	leftPoint_.y = leftY;
	square_.height = length;
	square_.width = length;
	square_.pos.x = leftPoint_.x + (square_.width / 2);
	square_.pos.y = leftPoint_.y + (square_.height / 2);
	longitude = length;
}

Square::~Square()
{
	std::cout << "destructor square\n";
}

double Square::getArea()
{
	return square_.height * square_.width;
}

rectangle_t Square::getFrameRect()
{
	// Ограничивающий прямоугольник
	return square_;
}

void Square::move(double x, double y)
{
	square_.pos.x = x;
	square_.pos.y = y;
	leftPoint_.x = x - (square_.width / 2);
	leftPoint_.y = y - (square_.height / 2);
}

void Square::move(const point_t& newCentre) // Смещение по осям 
{
	square_.pos.x += newCentre.x;
	square_.pos.y += newCentre.y;
	leftPoint_.x = square_.pos.x - (square_.width / 2);
	leftPoint_.y = square_.pos.y - (square_.height / 2);
}

void Square::scale(double k)
{
	square_.height *= k;
	square_.width *= k;
	leftPoint_.x = square_.pos.x - (square_.width / 2);
	leftPoint_.y = square_.pos.y - (square_.height / 2);
	longitude *= k;
}

std::string Square::getName()
{
	return "SQUARE";
}

Shape* Square::clone()
{
	Shape* cloneShape;
	Square* square = new Square;
	square->leftPoint_ = this->leftPoint_;
	square->longitude = this->longitude;
	cloneShape = square;
	return cloneShape;
}

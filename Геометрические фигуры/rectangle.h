#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"


class Rectangle : public Shape
{
public:
    Rectangle();
    // онструктор пр€моугольника, координаты нижнего левого и правого верхнего угла
    Rectangle(double leftX, double leftY, double rightX, float rightY);
    ~Rectangle();

    double getArea();
    rectangle_t getFrameRect();
    void move(double x, double y);
    void move(const point_t& newCentre);
    void scale(double k);
    std::string getName();
    Shape* clone();
private:
    point_t leftPoint_;
    point_t rightPoint_;
    rectangle_t Rectangle_;
};

#endif
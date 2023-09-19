#ifndef SHAPE_H
#define SHAPE_H
#include "base-types.h"
#include <iostream>

class Shape
{
public:
    virtual double getArea() = 0;
    virtual rectangle_t getFrameRect() = 0;
    virtual void move(double x, double y) = 0;
    virtual void move(const point_t& newCentre) = 0;
    virtual void scale(double k) = 0;
    virtual std::string getName() = 0;
    virtual Shape* clone() = 0;

    friend std::ostream& operator << (std::ostream& out, Shape& s);
    bool operator < (Shape& other);
};

#endif

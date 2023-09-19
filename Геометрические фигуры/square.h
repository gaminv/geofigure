#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"


class Square : public Shape
{
public:
    Square();
    //����������� ��������, ���������� ������� ������ ���� � ����� �������
    Square(double leftX, double leftY, double length);
    ~Square();

    double getArea();
    rectangle_t getFrameRect();
    void move(double x, double y);
    void move(const point_t& newCentre);
    void scale(double k);
    std::string getName();
    Shape* clone();
private:
    rectangle_t square_;
    point_t leftPoint_;
    double longitude;//��������� ��� ����, ����� �������� ��� ��� ����������� ������
};

#endif
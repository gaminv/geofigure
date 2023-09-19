#include <iostream>

#include "rectangle.h"
#include "square.h"
#include "CompositeShape.h"

int main()
{
	Rectangle rect(0, 0, 3, 4);
	rect.getArea();
	rect.getFrameRect();
	rect.move({ 2,1 });//Перемещение в конкретнюю точку
	rect.move(3.0, 3.0);//Смещение по осям 
	rect.scale(2);
	rect.getName();
	rect.clone();

	Square square(1, 1, 4);
	square.scale(2);
	square.getArea();
	square.getFrameRect();
	square.move(3.0, 3.0);
	square.move({ 3,3 });
	square.getName();
	square.clone();

	CompositeShape Comp(); 
	

}
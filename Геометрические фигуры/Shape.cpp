#include <iomanip>
#include "Shape.h"



//std::ostream& operator << (std::ostream& out, Shape& shape) 
//{
//
//}

bool Shape::operator< (Shape& other) {
	return (this->getArea() < other.getArea());
}
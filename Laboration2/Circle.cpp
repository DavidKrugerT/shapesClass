#include "Circle.h"

//constructor
Circle::Circle(float r) : radius(r) {
}

float Circle::GetArea() const 
{
	return radius * radius * PI;
}

Circle::~Circle()
{
}

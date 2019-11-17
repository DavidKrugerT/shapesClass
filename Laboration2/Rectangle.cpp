#include "Rectangle.h"

//constructor
Rectangle::Rectangle(float h, float w) : height(h), width(w) {
}

float Rectangle::GetArea() const
{
	float area = height * width;
	return area;
}

Rectangle::~Rectangle()
{
}

#include "Cylinder.h"

//constructor
Cylinder::Cylinder(float r, float h) : Circle(r), height(h) {
}

float Cylinder::GetArea() const
{
	float area = Circle::GetArea() * 2 + height * (2 * PI*radius);
	return area;
}

Cylinder::~Cylinder()
{
}

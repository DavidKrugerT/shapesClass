#include "roundedRectangle.h"

roundedRectangle::roundedRectangle(float h, float w, float r) : Rectangle(h, w), C(r)
{

}

float roundedRectangle::GetArea() const
{
	float area = Rectangle::GetArea() - (C.radius * C.radius * 4) + C.GetArea();
	return area;
}

roundedRectangle::~roundedRectangle()
{
}

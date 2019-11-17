#include "Parallelepipe.h"

//constructor
Parallelepipe::Parallelepipe(float h, float w, float d) : Rectangle(h, w), depth(d) {
}

float Parallelepipe::GetArea() const
{
	float area = Rectangle::GetArea() * 2 + (depth*height) * 2 + (width*depth) * 2;
	return area;
}

Parallelepipe::~Parallelepipe()
{
}

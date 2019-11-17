#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shapes.h"

class Rectangle : public Shapes {
public:
	Rectangle() = delete;
	Rectangle(float h , float w);
	float height;
	float width;
	float GetArea() const override;
	~Rectangle();
};


#endif 

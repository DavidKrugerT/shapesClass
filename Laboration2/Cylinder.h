#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cylinder : public Circle {
public:
	Cylinder() = delete;
	Cylinder(float r, float h);
	float height;
	float GetArea() const override;
	~Cylinder();
};


#endif // !CYLINDER_H

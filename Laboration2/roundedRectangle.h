#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H
#include "Rectangle.h"
#include "Circle.h"


class roundedRectangle : public Rectangle {
public:
	roundedRectangle() = delete;
	roundedRectangle(float h, float w, float r);
	float GetArea() const override;
	~roundedRectangle();

private:
	Circle C;
};


#endif // !1




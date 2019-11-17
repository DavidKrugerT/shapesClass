#ifndef CIRCLE_H
#define CIRCLE_H
#include "shapes.h"


class Circle : public Shapes {
public:
	Circle() = delete;
	Circle(float r);
	static constexpr float PI = 3.14f;
	float radius;
	float GetArea() const override;
	~Circle();
};

#endif // !CIRCLE_H


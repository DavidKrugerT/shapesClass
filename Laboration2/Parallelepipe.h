#ifndef PARALLELEPIPE_H
#define PARALLELEPIPE_H
#include "Rectangle.h"

class Parallelepipe : public Rectangle {
public:
	Parallelepipe() = delete;
	Parallelepipe(float h, float w, float d);
	float depth;
	float GetArea() const override;
	~Parallelepipe();

};

#endif // !1


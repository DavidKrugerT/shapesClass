#ifndef SHAPES_H
#define SHAPES_H
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <vector>
#include <string>

class Shapes {
public:
	virtual float GetArea() const = 0;
	std::string GetColor();
	void SetColor(std::string fade);
private:
	std::string _color;
};

#endif


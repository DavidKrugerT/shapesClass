#include "Rectangle.h"
#include "Parallelepipe.h"
#include "Circle.h"
#include "roundedRectangle.h"
#include "Cylinder.h"
#include <memory>
#include <iostream>
#include <vector>

//hämtar den totala arean av alla element i vectorn.
void GetData(std::vector<std::unique_ptr< Shapes>>& areas) {
	float totalArea = 0;
	for (auto &a : areas)
	{
		std::cout << "the shapes area and color: " << a.get()->GetArea() << "  " << a.get()->GetColor() << std::endl;
		totalArea += a.get()->GetArea();
	}
	std::cout << "The total area of all the shapes: " <<  totalArea << std::endl;
}

int main() {
	
	std::vector<std::unique_ptr< Shapes >> shape;

	shape.push_back(std::make_unique < Rectangle>(3, 2));
	shape.push_back(std::make_unique < roundedRectangle>(3, 2, 1));
	shape.push_back(std::make_unique < Parallelepipe>(2, 4, 3));
	shape.push_back(std::make_unique < Circle>(5));
	shape.push_back(std::make_unique < Cylinder>(2, 3));

	shape[0].get()->SetColor("white");
	shape[1].get()->SetColor("Red");
	shape[2].get()->SetColor("Green");
	shape[3].get()->SetColor("Yellow");
	shape[4].get()->SetColor("Purple");

	GetData(shape);
	system("PAUSE");
	return 0;
}



// Area.cpp

#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    double Area::calculateSquareArea(const Square& square) {
        return square.calculateArea();
    }

    double Area::calculateTriangleArea(const Triangle& triangle) {
        return triangle.calculateArea();
    }

    double Area::calculateCircleArea(const Circle& circle) {
        return circle.calculateArea();
    }
}

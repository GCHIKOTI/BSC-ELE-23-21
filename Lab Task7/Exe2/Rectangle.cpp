// Rectangle.cpp

#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}

// Overloaded constructor
Rectangle::Rectangle(double len, double wid) {
    length = len;
    width = wid;
}

// Setters
void Rectangle::setLength(double len) {
    length = len;
}

void Rectangle::setWidth(double wid) {
    width = wid;
}

// Getters
double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

// Calculate area
double Rectangle::calculateArea() const {
    return length * width;
}

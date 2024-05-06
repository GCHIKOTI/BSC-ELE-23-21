// main.cpp

#include <iostream>
#include "Rectangle.h"

int main() {
    // Create an instance of Rectangle
    Rectangle myRectangle;

    // Get user input for length and width
    double userLength, userWidth;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> userLength;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> userWidth;

    // Set the values using accessor methods
    myRectangle.setLength(userLength);
    myRectangle.setWidth(userWidth);

    // Calculate and display the area
    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}

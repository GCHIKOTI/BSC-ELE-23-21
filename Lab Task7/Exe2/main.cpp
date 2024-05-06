// main.cpp

#include <iostream>
#include "Rectangle.h"

int main() {
    // Create an instance of Rectangle using default constructor
    Rectangle myRectangle1;

    // Get user input for length and width
    double userLength, userWidth;
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> userLength;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> userWidth;

    // Set the values using accessor methods
    myRectangle1.setLength(userLength);
    myRectangle1.setWidth(userWidth);

    // Calculate and display the area
    double area1 = myRectangle1.calculateArea();
    std::cout << "Area of the first rectangle: " << area1 << std::endl;

    // Create another instance of Rectangle using overloaded constructor
    double len2, wid2;
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> len2;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> wid2;

    Rectangle myRectangle2(len2, wid2);

    // Calculate and display the area for the second rectangle
    double area2 = myRectangle2.calculateArea();
    std::cout << "Area of the second rectangle: " << area2 << std::endl;

    return 0;
}

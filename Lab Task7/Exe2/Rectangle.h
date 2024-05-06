
// Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(double len, double wid);

    // Accessor methods
    void setLength(double len);
    void setWidth(double wid);
    double getLength() const;
    double getWidth() const;

    // Calculate and return the area
    double calculateArea() const;
};

#endif /* FC947F21_66F7_414B_87C7_5B48C1948CC3 */

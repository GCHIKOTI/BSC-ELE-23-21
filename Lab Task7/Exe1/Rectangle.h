#ifndef C892FE53_D8DF_42BE_8D06_E920D0F5B3EC
#define C892FE53_D8DF_42BE_8D06_E920D0F5B3EC

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle();

    // Accessor methods
    void setLength(double len);
    void setWidth(double wid);
    double getLength() const;
    double getWidth() const;

    // Calculate and return the area
    double calculateArea() const;
};


#endif /* C892FE53_D8DF_42BE_8D06_E920D0F5B3EC */

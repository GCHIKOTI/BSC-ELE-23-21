#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;

    Polygon* pPoly1 = &rect; // Pointer to base class (Rectangle)
    Polygon* pPoly2 = &trgl; // Pointer to base class (Triangle)

    pPoly1->SetValues(4,5); // Calls Rectangle::SetValues
    pPoly2->SetValues(4, 5); // Calls Triangle::SetValues

    cout << "Rectangle area: " << rect.Area() << '\n'; // Calls Rectangle::Area
    cout << "Triangle area: " << trgl.Area() << '\n'; // Calls Triangle::Area

    return 0;
}

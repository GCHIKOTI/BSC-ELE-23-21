#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly3 = &poly;

    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    pPoly3->SetValues(4, 5);

    cout << "Rectangle area: " << pPoly1->Area() << '\n';
    cout << "Triangle area: " << pPoly2->Area() << '\n';
    cout << "Polygon area: " << pPoly3->Area() << '\n';

    return 0;
}

#include <iostream>
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"
#include "shapes/Area.h"

using namespace std;
using namespace shapes;

int main() {
    char choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                // Similar input and calculation for triangle
                // ...
                break;
            }
            case '3': {
                // Similar input and calculation for circle
                // ...
                break;
            }
            case '4':
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != '4');

    return 0;
}

#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person Jane = Person(60.0f);
    Person John = Person(75.0f);
    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    // Additional lines
    string janeFirstName = "Jane";
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << endl;

    return 0;
}

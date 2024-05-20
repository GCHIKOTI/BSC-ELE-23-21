#include <iostream>
#include "Person.h"
using namespace std;

int main() {
Person person;
    Person Jane = Person("Jane", 60.0f,23);
    Person John = Person("John", 75.0f, 32);

    float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

if (Jane == John) {
    cout << "This is the same person";
} else if (Jane != John) {
    cout << "This is NOT the same person";
}
if (Jane < John){
    cout << "Jane is younger than John" << endl;
}

if (John > Jane){
    cout << "John is older than Jane" << endl;
}
  return 0;
}

#pragma once
#include <string>

using namespace std;

class Person
{
public:
    Person(float newWeight);
    ~Person();
    // Overload the add operator
    float operator + (const Person& otherPerson);

    // Add the type conversion operator
    operator int ();

private:
    string mFirstName;
    float mWeight;
};

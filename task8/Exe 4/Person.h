#pragma once
#include <string>
using namespace std;

class Person
{
public:
    Person();
    Person(float newWeight);
    ~Person();
    // Overload the addition operator
    float operator+(const Person& otherPerson);

    // Conversion operator to get the age as an integer
    operator int() const
    {
        return mAge;
    }

private:
    float mWeight;
    string mFirstName;
    int mAge;
};

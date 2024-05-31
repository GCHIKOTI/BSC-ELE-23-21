

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

// Default constructor
Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Constructor with weight parameter
Person::Person(float newWeight)
{
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
Person::~Person()
{
}

// Overload the addition operator
float Person::operator+(const Person& otherPerson)
{
    // Add the weights of two Person objects
    return mWeight + otherPerson.mWeight;
}

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

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

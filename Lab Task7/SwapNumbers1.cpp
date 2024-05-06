#include <iostream>
using namespace std;

// Function to swap numbers using references
void SwapNumbers(int& refA, int& refB) {
    int temp = refA;
    refA = refB;
    refB = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "VarB before swap: " << varB << endl;

    // Call the function with references to varA and varB
    SwapNumbers(varA, varB);

    cout << "varA after swap: " << varA << endl;
    cout << "VarB after swap: " << varB << endl;

    return 0;
}
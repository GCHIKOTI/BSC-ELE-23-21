#include <iostream>
using namespace std;

// Function to swap numbers using pointers
void SwapNumbers(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "VarB before swap: " << varB << endl;

    // Call the function with pointers to varA and varB
    SwapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl;
    cout << "VarB after swap: " << varB << endl;

    return 0;
}

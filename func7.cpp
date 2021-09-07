#include "iostream"
#include "func7.h"
using namespace std;

void factorial(int number) {

    int unsigned fact = 1;
    int unsigned i = 1;
    for (; i <= number; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << number << " is: " << fact << "\n" << endl;
}
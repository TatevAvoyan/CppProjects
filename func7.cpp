#include "iostream"
#include "func7.h"
using namespace std;

void factorial(double number) {

    double fact = 1;
    double i = 1;
    for (; i <= number; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << number << " is: " << fact << "\n" << endl;
}
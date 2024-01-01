//Define a program to calculate the power of a number using recursion.
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the power of a number using recursion
double num(double base, double exponent) {
    if (exponent == 0) {
        return 1; //any number with power 0 is 1.
    } else {
        return base * num(base, exponent - 1); //for the desired out we want to see
    }
}

int main() {
    double base, exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = num(base, exponent); //calling the function  fot getting output

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0; //successful execution!!
}

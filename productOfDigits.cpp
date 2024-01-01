#include <iostream>

using namespace std;

int main() {
    int number;
    
    while (true) {
        cout << "Enter a number (greater than 0): ";
        cin >> number;

        if (number > 0) {
            break; // Exit the loop if the number is valid
        } else {
            cout << "Please enter a number greater than 0." << endl;
        }
    }

    int product = 1;
    int digit;

    // Calculate the product of digits using a while loop
    while (number > 0) {
        digit = number % 10; // Get the last digit
        product *= digit;   // Multiply by the product
        number /= 10;       // Remove the last digit
    }

    cout << "The product of the digits is: " << product << endl;

    return 0;
}

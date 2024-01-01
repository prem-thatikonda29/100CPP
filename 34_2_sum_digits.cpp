// Calculate the sum of digits of a number using a do-while loop.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num, sum = 0.0; // Declare double variables 'num' and 'sum', and initialize 'sum' to 0.0.

    cout << "Enter the number: "; // Ask the user to enter a number.
    cin >> num; // Store the user input in the variable 'num'.

    string numStr = to_string(num); // Convert the number to a string.

    for (char digitChar : numStr) // Loop through each character in the string.
    {
        if (isdigit(digitChar)) // Check if the character is a digit.
        {
            int digit = digitChar - '0'; // Convert the character to an integer digit.
            sum += digit; // Add the digit to 'sum'.
        }
    }

    cout << "Sum of digits: " << sum << endl; // Print the sum of digits.

    return 0; // End of program.
}

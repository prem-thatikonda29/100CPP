// Implement a program that generates a pattern of a pyramid using nested loops.
#include <iostream>
using namespace std;

int main() {
    int n; // Declare an integer variable 'n'. This will store the number of rows in the pyramid.

    cout << "Enter the number of rows : "; // Prompt the user to enter the number of rows.
    cin >> n; //store the user input in 'n'.

    for (int i = 1; i <= n; ++i) // Start a loop that iterates through each row from 1 to 'n'.
    {
        for (int j = 1; j <= n - i; ++j) { // Start an inner loop for printing spaces, the number of spaces decreases with each row.
            cout << "  "; // Print space.
        }

        for (int k = 1; k <= 2 * i - 1; ++k) { // Start another inner loop for printing @,the number of asterisks increases with each row.
            cout << "@ "; // Print @
        }

        cout << endl; // Move to the next line.
    }

    return 0; //End of this
}

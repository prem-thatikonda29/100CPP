#include <iostream>
#include <string> // Include the string library

using namespace std;

// Function to check if a number is prime
bool isPrime(int n, int i = 2) {
    if (n <= 2) {
        return (n == 2);
    }
    if (n % i == 0) {
        return false;
    }
    if (i * i > n) {
        return true;
    }
    return isPrime(n, i + 1);
}

int main() {
    string input; // Use a string to read user input

    do {
        cout << "Enter a positive integer or 'q' to quit: ";
        cin >> input;

        if (input == "q" || input == "Q") {
            break; // Exit the loop if 'q' or 'Q' is entered
        }

        // Convert the input string to an integer
        int number = stoi(input);

        if (number <= 1) {
            cout << "Not a prime number." << endl;
        } else {
            if (isPrime(number)) {
                cout << number << " is a prime number." << endl;
            } else {
                cout << number << " is not a prime number." << endl;
            }
        }
    } while (true);

    return 0;
}

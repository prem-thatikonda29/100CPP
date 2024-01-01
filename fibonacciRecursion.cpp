#include <iostream>
using namespace std;

// Recursive function to find the nth Fibonacci term
int fibonacci(int n) 
{
    // Base cases: Fibonacci(0) is 0, Fibonacci(1) is 1
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n to find the nth Fibonacci term: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    } else {
        int result = fibonacci(n);
        cout << "The " << n << "th Fibonacci term is: " << result << endl;
    }

    return 0;
}

//Write a C++ program to find the HCF (Highest Common Factor) of two numbers using recursion.
#include <iostream>
using namespace std;

int hcf_of(int a, int b) {
    if (b == 0) {
        return a;  // When b becomes 0, a is the HCF.
    } else {
        return hcf_of(b, a % b);  // Recursive call with (b, a % b).
    }
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int hcf = hcf_of(num1, num2); //calling function.

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf << endl;

    return 0;
}

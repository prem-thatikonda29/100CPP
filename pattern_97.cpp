#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    // Print the top half of the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        // Print decreasing numbers
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        // Move to the next line
        cout << endl;
    }

    // Print the bottom half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }

        // Print decreasing numbers
        for (int l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}

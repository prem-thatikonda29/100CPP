#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= 2 * (rows - i) + 1; k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}

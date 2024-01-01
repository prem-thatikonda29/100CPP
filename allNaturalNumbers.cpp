#include <iostream>

using namespace std;

int main() {
    int N;

    while (true) {
        cout << "Enter a positive integer (greater than 0): ";
        cin >> N;

        if (N > 0) {
            break; // Exit the loop if the number is valid
        } else {
            cout << "Please enter a positive integer greater than 0." << endl;
        }
    }

    int i = 1;

    cout << "Natural numbers from 1 to " << N << ":" << endl;

    while (i <= N) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    return 0;
}

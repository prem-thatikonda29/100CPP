#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int left = 0;
    int right = input.length() - 1;

    while (left < right) {
        // Swap characters at the left and right indices
        char temp = input[left];
        input[left] = input[right];
        input[right] = temp;

        // Move the left index to the right and the right index to the left
        left++;
        right--;
    }

    cout << "Reversed string: " << input << endl;

    return 0;
}

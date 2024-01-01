#include <iostream>

using namespace std;

// Function to segregate even and odd numbers in an array
void segregateEvenOdd(int arr[], int size) {
    int left = 0;                       // Index of the leftmost element
    int right = size - 1;               // Index of the rightmost element

    while (left < right) {
        // Move left index to the right while arr[left] is even
        while (arr[left] % 2 == 0 && left < right) {
            left++;
        }

        // Move right index to the left while arr[right] is odd
        while (arr[right] % 2 != 0 && left < right) {
            right--;
        }

        if (left < right) {
            // Swap arr[left] and arr[right]
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int size1;

    cout << "Enter a size of array : ";
    cin >> size1;

    int arr[size1];

    cout << "Enter "<< size1 << " numbers into the array : \n";
    for(int i = 0; i < size1; i++){
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    segregateEvenOdd(arr, size);

    cout << "Array after segregating even and odd numbers: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

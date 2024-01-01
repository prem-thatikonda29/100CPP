#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements you want to enter : \n";
    cin>>n;
    int arr[n];
    

    for(int i = 0 ; i < n ; i++){
        cout<<"\nEnter "<<i+1<<" Element : \n";
        cin>>arr[i];
    }

    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        // Check for duplicates
        for (int j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to overwrite the duplicate
                for (int k = j; k < n - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --n; // Decrease the size of the array
            } else {
                ++j;
            }
        }
    }

    // Print the array with duplicates removed
    cout<<"Deleted array : \n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// largest smallest number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    if (n <= 0) {
        cout<<"Invalid input. Please enter a positive number of elements."<<endl;
        return 1; // Exit with an error code
    }

    double arr[n];

    cout<<"Enter the elements of the array:"<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    double smallest = arr[0];
    double largest = arr[0];

    for (int i = 1; i < n; ++i) {       
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout<<"Smallest element: "<<smallest<<endl;
    cout<<"Largest element: "<<largest<<endl;

    return 0; 
}
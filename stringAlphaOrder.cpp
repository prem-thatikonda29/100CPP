#include <iostream>
#include <algorithm>                        // for the sort function
#include <string>                           // for string data type

using namespace std;

int main() {
    int size;                          //initialising variable to store size of array

    cout << "How many array elements do you have? ";
    cin >> size;

    string stringArray[size];          //creating array of particular size(user input)

    cout << "\nEnter array elements :\n";
    for(int i = 0; i < size; i++){
        cin >> stringArray[i];
    }

    // Determine the number of strings in the array
    int numStrings = sizeof(stringArray) / sizeof(stringArray[0]);

    // function to sort the array in alphabetical order
    sort(stringArray, stringArray + numStrings);


    cout << "Sorted array is :\n";   
    
    // Display the sorted strings
    for (int i = 0; i < numStrings; i++) {
        cout << stringArray[i] << endl;
    }

    return 0;
}

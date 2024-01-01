#include <iostream>
#include <algorithm>
using namespace std;

// Function to compute the intersection of two arrays
void intersection(int arr1[], int size1, int arr2[], int size2) 
{
    sort(arr1, arr1 + size1);
    sort(arr2, arr2 + size2);

    cout << "Intersection of the two arrays: ";

    //initialising loop variables to 0 so that they run from 1st index of loops
    int i = 0, j = 0;

    //loop runs till atleast one array reaches its end
    while (i < size1 && j < size2) 
    {
        //if both elements are equal, print element
        if (arr1[i] == arr2[j]) {                        
            cout << arr1[i] << " ";
            i++;
            j++; 
        } 
        //if element at 'i' is lesser than that at 'j', 'i' is increased so that next element is checked
        else if (arr1[i] < arr2[j]) {                  
            i++;
        } 
        //if element at 'j' is lesser than that at 'i', 'j' is increased so that next element is checked
        else {
            j++;
        }
    }

    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < n1; i++) 
    {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < n2; i++) 
    {
        cin >> arr2[i];
    }

    intersection(arr1, n1, arr2, n2);

    return 0;
}

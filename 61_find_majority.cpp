//Write a program to find the majority element in an array (element appearing more than N/2 times).
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10; 
    int arr[SIZE] = {0, 1, 1, 0, 1, 1, 1, 1, 0, 1}; 

    int candidate = arr[0];  // Assume the first element is the majority candidate.
    int count = 1;  // Initialize the count of the majority candidate.

    for (int i = 1; i < SIZE; ++i) 
    {
        if (arr[i] == candidate) 
        {
            ++count;  // Increment the count if the current element matches the candidate.
        } 
        else 
        {
            --count;  // Decrement the count if the current element is different from the candidate.
        }

        if (count == 0) 
        {
            candidate = arr[i];  // If count becomes zero, update the candidate.
            count = 1;  // Reset count to 1.
        }
    }

    // Now 'candidate' contains the potential majority element.
    int majority_count = 0;  // Initialize a counter for the candidate.

    for (int i = 0; i < SIZE; ++i) 
    {
        if (arr[i] == candidate) 
        {
            ++majority_count;  // Count occurrences of the candidate.
        }
    }

    if (majority_count > SIZE / 2) 
    {
        cout << "Majority element is: " << candidate << endl;
    } 
    else 
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}

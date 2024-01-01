// Implement a program that counts the frequency of each element in an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10; // Define a constant variable 'SIZE' with value 10. It represents the size of the arrays.
    int arr[SIZE] = {0, 2, 0, 0, 2, 4, 1, 1, 0, 1}; // Initialize an integer array 'arr' with 10 elements.

    int freq[SIZE]= {0}; // Initialize another integer array 'freq' with 10 elements, all set to 0. This will store frequencies.

    for (int i = 0; i < SIZE; ++i) // Start a loop from i = 0 to SIZE - 1. This will iterate through each element of 'arr'.
    {
        int current_value = arr[i]; // Store the current element of 'arr' in 'current_value'.

        bool counted = false; // Initialize a boolean variable 'counted' and set it to false.

        for (int j = 0; j < i; ++j) // Start another loop from j = 0 to i - 1. This will check if 'current_value' has already been counted.
        {
            if (current_value == arr[j]) // If 'current_value' is equal to any previous element in 'arr'.
            {
                counted = true; // Set 'counted' to true, indicating that this value has already been counted.
                break; // Exit the loop, as there's no need to check further.
            }
        }

        if(!counted) // If 'counted' is still false, it means 'current_value' has not been counted before.
        {
            int count = 0; // Initialize a counter 'count' to 0. This will keep track of how many times 'current_value' occurs.

            for (int j = 0; j < SIZE; ++j) // Start another loop from j = 0 to SIZE - 1. This will count the occurrences of 'current_value'.
            {
                if (current_value == arr[j]) // If 'current_value' matches the j-th element of 'arr'.
                {
                    ++count; // Increment the counter 'count'.
                }
            }

            cout<<"Element "<< current_value << " occurs "<< count <<" times "<<endl; // Print the result.
        }
    }

    return 0; // Indicate successful execution of the program.
}

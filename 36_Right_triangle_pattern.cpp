// Implement a program that prints the pattern of a right-angled triangle using nested loops.
#include <iostream>
using namespace std;

int main()
{
    int n; // Declare an integer variable 'n' to store the number of rows for the right-angled triangle.

    cout<<"Enter the number of rows of right angled triangle you want: "; // Prompt the user to enter the number of rows.
    cin>> n; //store the user input in the variable 'n'.

    for (int i = 0; i <= n; i++) // Start a loop from 0 to 'n'for number of rows.
    {
        for (int j = 0; j < i; j++) // Start an inner loop from 0 to 'i' ,which controls the number of '*' in each row.
        {
            cout<< " * "; // Print *
        }
        cout<< endl; // Move to the next line.
    }

    return 0; //end of this.
}

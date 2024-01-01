//Implement a program to reverse an array in-place.
#include <iostream>
using namespace std;

int main()
{
    int size; //declaring size variable to know the the size of array user want to enter.
    cout << "Enter the size of the array: "; //asking the user for it
    cin >> size;//initializing that value to the variable' size'.

    //we are going to ask the user each element to input as long as the size entered by the user itself
    int arr[size]; //declaring an array with the size as said by user

    for (int i = 0; i < size; i++) //i the index number starting from zero to (size -1) to ask each element of the array.
    {
        cout << "Enter element " << i + 1 << ": "; //format of printing the message to ask the value to the user.
        cin >> arr[i]; //initializing each value of i as given by the user above.
    }

    cout << "Original array: "; //to display the original array how it looks 
    for (int i = 0; i < size; i++) //from the index number 0 to the last index number i.e. (size - 1) i.e. (< size).
    {
        cout << arr[i] << "  "; //for the space in between each elent of the array.
    }

    //now starting with the revering process.
    for (int i = 0; i < (size / 2); i++) //i= 0  and (i< size/2) to reverse the array as long as i < half of the size of the array.
                                         //Consider this example:
                                         //Original array: [1, 2, 3, 4, 5, 6]
                                         //size = 6 so half = 3
                                         //Swap arr[0] with arr[5]: [6, 2, 3, 4, 5, 1] --->1
                                         //Swap arr[1] with arr[4]: [6, 5, 3, 4, 2, 1] --->2
                                         //Swap arr[2] with arr[3]: [6, 5, 4, 3, 2, 1] --->3
    {
        int rev = arr[i]; 
        arr[i] = arr[size - 1 - i]; //here size -1 to get the index number and -i to get which index place are we looking at.
                                    //for example: size is 10, total index number are 10 but till 9 because it starts from zero (0 to 09).
                                    //so we are accessing each index number through it. and are stored accordingly as shown above in the example.
                                    //Once half is done the rest is done i.e. we get the reversed array.
        arr[size - 1 - i] = rev;    //and then we are storing it in this particular variable.
    }

    cout << endl << "Reversed array: "; //For printing the output
    for (int i = 0; i < size; i++) //how? by printing each 'i' now.
    {
        cout << arr[i] << "  ";     //and like this we get our needful output
    }
    cout<<endl<<endl;
    return 0; //end of this function.
}

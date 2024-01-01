#include <iostream>
using namespace std;

int main()
{
    int size;
    double sum=0;
    double avg;

    cout << "Enter how many elements should be in the array : \n";
    cin >> size;

    //initialising array of size input by user
    int arr[size];

    cout << "Enter array elements : \n";
    //taking input values into array by user
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Your array : \n{";
    //displaying array to user
    for(int i = 0; i < size; i++){
        
        if(i < size-1){
            cout << arr[i]<<", ";
        }
        else{
            cout << arr[i];
        }
    }
    cout << "}";

    //calculating sum of all elements in array
    for(int i = 0; i < size; i++){
        sum+=arr[i];
    }

    //calculating average of elements
    avg = (sum/size);

    cout << "\nAverage of elements in the array : " << avg;
}
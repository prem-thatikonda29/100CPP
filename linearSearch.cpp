#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter how many elements in the array : ";
    cin >> size;

    int arr[size];

    cout << "Enter elements of array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int value;
    cout << "Enter value to search for in array : \n";
    cin >> value;

    for(int i = 0; i < size; i++){
        if(arr[i]==value){
            cout << value << " found at index " << i << endl;
            break;
        }
    }

    return 0;
}
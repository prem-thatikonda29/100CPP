#include <iostream>
using namespace std;

int main(){
    int rows, cols,sum=0;
    int currRow = 1;

    cout << "How many rows : ";
    cin >> rows;
    cout << "How many columns : ";
    cin >> cols;
    
    int arr[rows][cols];                        //creating matrix of size (rows x cols)
    cout << "Enter array elements :\n";
    for(int i = 0; i < rows ; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
        cout << "\n";
    }
    
    //displaying matrix
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    //iterating through array to calculate sum
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
        cout << "Sum of elements of row "<<currRow << " = " << sum << endl;
        currRow++;
        sum = 0;
    }
}
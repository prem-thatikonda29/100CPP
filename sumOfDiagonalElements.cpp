#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    do{
        cout << "Enter the number of rows: ";
        cin >> rows;

        cout << "Enter the number of columns: ";
        cin >> cols;
        if (rows != cols) 
        {
        cout << "The matrix must be square (rows should equal columns)." << endl;
        }
        
    }while(rows!=cols);

    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Calculate the sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    cout << "Sum of main diagonal elements: " << sum << endl;

    return 0;
}

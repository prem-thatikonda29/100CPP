#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the number of rows and columns of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create the original matrix and the transpose
    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the transpose of the matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display the transpose matrix
    cout << "Transpose of the Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

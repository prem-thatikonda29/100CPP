#include <iostream>
#include <vector>

using namespace std;

vector<int> findLargestInEachRow(vector<vector<int> >& matrix) {
    vector<int> largestElements;

    for (size_t i = 0; i < matrix.size(); ++i) {
        if (matrix[i].empty()) {
            // Handle empty rows if necessary
            largestElements.push_back(INT_MIN); // Set to a minimum value
        } else {
            // Initialize the maximum element for the current row
            int maxElement = matrix[i][0];

            // Iterate through the elements in the current row
            for (size_t j = 1; j < matrix[i].size(); ++j) {
                if (matrix[i][j] > maxElement) {
                    maxElement = matrix[i][j];
                }
            }

            // Append the maximum element of the current row to the result vector
            largestElements.push_back(maxElement);
        }
    }

    return largestElements;
}

int main() {
    int numRows, numCols;
    
    cout << "Enter the number of rows: ";
    cin >> numRows;
    cout << "Enter the number of columns: ";
    cin >> numCols;
    
    vector<vector<int> > matrix(numRows, vector<int>(numCols));

    // Input values for the matrix
    for (size_t i = 0; i < numRows; ++i) {
        for (size_t j = 0; j < numCols; ++j) {
            cout << "Enter value for matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Call the function to find the largest element in each row
    vector<int> result = findLargestInEachRow(matrix);

    // Display the result
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Largest element in row " << i + 1 << ": " << result[i] << endl;
    }

    return 0;
}

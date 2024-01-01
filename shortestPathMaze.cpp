#include <iostream>
using namespace std;

const int MAX_ROWS = 20; // Maximum number of rows
const int MAX_COLS = 20; // Maximum number of columns

// Define directions (up, down, left, right)
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y, int rows, int cols) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

bool findShortestPath(int x, int y, int endX, int endY, int rows, int cols, int maze[MAX_ROWS][MAX_COLS], bool visited[MAX_ROWS][MAX_COLS]) {
    if (x == endX && y == endY) {
        // Reached the end point
        return true;
    }

    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY, rows, cols) && maze[newX][newY] == 0 && !visited[newX][newY]) {
            if (findShortestPath(newX, newY, endX, endY, rows, cols, maze, visited)) {
                // Found a path to the end point
                cout << "(" << x << ", " << y << ") -> ";
                return true;
            }
        }
    }

    visited[x][y] = false; // Backtrack
    return false;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows (<= " << MAX_ROWS << "): ";
    cin >> rows;

    cout << "Enter the number of columns (<= " << MAX_COLS << "): ";
    cin >> cols;

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        cout << "Invalid input for rows or columns." << endl;
        return 1;
    }

    int maze[MAX_ROWS][MAX_COLS];

    cout << "Enter the maze (0 for open path, 1 for wall):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> maze[i][j];
        }
    }

    int startX, startY, endX, endY;

    cout << "Enter the start point (row and column): ";
    cin >> startX >> startY;

    cout << "Enter the end point (row and column): ";
    cin >> endX >> endY;

    if (!isValid(startX, startY, rows, cols) || !isValid(endX, endY, rows, cols)) {
        cout << "Invalid input for start or end point. Points should be within the maze boundaries." << endl;
        return 1;
    }

    bool visited[MAX_ROWS][MAX_COLS] = {false};

    cout << "Shortest path from start to end:" << endl;
    if (findShortestPath(startX, startY, endX, endY, rows, cols, maze, visited)) {
        cout << "(" << endX << ", " << endY << ")" << endl;
    } else {
        cout << "No path found!" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate the number of ways to climb stairs with memoization
int countWaysToClimbStairs(int n, int m, int stepSizes[], int memo[]) {
    if (n < 0) return 0; // Invalid path
    if (n == 0) return 1; // Reached the top

    // Check if the result is already memoized
    if (memo[n] != -1) return memo[n];

    int ways = 0;
    for (int i = 0; i < m; i++) {
        ways += countWaysToClimbStairs(n - stepSizes[i], m, stepSizes, memo);
    }

    // Memoize the result
    memo[n] = ways;

    return ways;
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int m;
    cout << "Enter the number of step sizes: ";
    cin >> m;

    int stepSizes[m];
    cout << "Enter the step sizes: ";
    for (int i = 0; i < m; i++) {
        cin >> stepSizes[i];
    }

    int memo[n + 1];
    for (int i = 0; i <= n; i++) {
        memo[i] = -1; // Initialize memoization table
    }

    int ways = countWaysToClimbStairs(n, m, stepSizes, memo);
    cout << "Number of ways to climb the stairs: " << ways << endl;

    return 0;
}

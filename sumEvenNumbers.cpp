#include <iostream>

using namespace std;

int main() {
    int N;

    while (true) {
        cout << "Enter a positive integer: ";
        cin >> N;

        if (N > 0) {
            break; // Exit the loop if the number is valid
        } else {
            cout << "Please enter a number greater than 0." << endl;
        }
    }

    int i = 1;
    int sum = 0;

    cout << "Even numbers from 1 to " << N << ":" << endl;

    while (i <= N) {
        if(i%2==0){
            cout << i << " ";
            sum+=i;
        }
        i++;
    }
    cout << "\n\nSum of even numbers from 1 - "<<N<<" = "<<sum << endl;

    return 0;
}

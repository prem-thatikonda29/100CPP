#include <iostream>
#include <cctype>

using namespace std;

// Function to move a disk from source peg to destination peg
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk " << n << " from " << source << " to " << destination << endl;
        return;
    }

    // Calculate the auxiliary peg based on source and destination
    char tempRod = 'A' + 'B' + 'C' - source - destination;

    // Move (n-1) disks from source to auxiliary peg using destination as the auxiliary peg
    towerOfHanoi(n - 1, source, tempRod, destination);

    // Move the nth disk from source to destination peg
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move (n-1) disks from auxiliary to destination peg using source as the auxiliary peg
    towerOfHanoi(n - 1, tempRod, destination, source);
}

int main() {
    int numDisks;
    char destinationRod;
    
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    while (true) {
        cout << "Enter the destination rod (A, B, or C): ";
        cin >> destinationRod;

        destinationRod = toupper(destinationRod);

        if (destinationRod == 'A' || destinationRod == 'B' || destinationRod == 'C') {
            break;
        } else {
            cout << "Invalid destination rod. Please enter A, B, or C." << endl;
        }
    }

    cout << "Tower of Hanoi Solution:" << endl;
    towerOfHanoi(numDisks, 'A', destinationRod, 'B'); // Auxiliary peg is determined here

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    int n, q;

    cout << "\nWELCOME TO RANDOM QUESTION ASSIGNING TO GROUPS WHICH WILL SHOW STUDENT'S ASSIGNED QUESTION IN GROUPS OF FIVE\n";
    cout << "\nHow many students: ";
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter Student " << i + 1 << " Name: ";
        cin >> arr[i];
    }

label:
    cout << "\nHow many questions are there? : ";
    cin >> q;
    if (q <= 0) {
        cout << "\nPlease input a positive number of questions.\n";
        goto label;
    }

    int que[q];
    for (int i = 0; i < q; i++) {
        que[i] = i + 1;
    }

    for (int i = 0; i < n / 5; i++) {
        cout << "\n__________________________________________________________________\n";
        cout << "\nGroup " << i + 1 << " Name and question:\n";

        for (int j = 0; j < 5; j++) {
            rerun:

            int random = rand() % n;
            if (arr[random] == "0") {
                goto rerun;
            } else {
                cout << "\n____________________________________\n";
                cout << "\nStudent " << arr[random];
                arr[random] = "0";
            }
        }

        int totalq = q / 5;

        for (int k = 0; k < totalq; k++) {
            another:

            int randomq;
            do {
                randomq = rand() % q;
            } while (que[randomq] == 0);

            cout << "\nAssigned question " << que[randomq];
            que[randomq] = 0;
        }

        cout << "\n___________________________________________________________\n\n";
    }

    return 0;
}

#include <iostream>

using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    int sum = 0;
    bool isEqual;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }

    isEqual = (sum==num);
    return isEqual; // Check if the sum of divisors is equal to the number
}

int main() {
    int number,choice;
    bool playagain = true;
    cout << "\n\nA perfect number is a positive integer that is equal to the sum of its positive divisors, excluding itself. \nFor example, 28 is a perfect number \nbecause its divisors (1, 2, 4, 7, and 14) add up to 28.";

    do{

        while(true) 
        {
            cout << "\n\nEnter a number to check if it's a perfect number: ";
            cin >> number;

            if (number > 0) {
                break; // Exit the loop if the number is valid
            } 
            else {
                cout << "Please enter a number greater than 0." << endl;
            }
        }

        if (isPerfectNumber(number)) {
            cout << number << " is a perfect number." << endl;
        } else {
            cout << number << " is not a perfect number." << endl;
        }

        cout <<endl<< "Check another number? \n";
        do{   
            cout << "Press 1 for yes, 2 for No\n";
            cin >> choice;

            if(choice!=2 && choice!=1){
                cout << "Please enter valid response \n\n";
            }
        }while(choice!=2 && choice!=1);

        if(choice==2){
                playagain=false;
                cout << "BYEE HAVE A GREAT TIME! ";
        }
    }while(playagain==true);

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int number,choice;
    bool isPositive = true;      //initialising boolean to check if number is +
    bool playagain = true;      //initialising boolean to check if user wants to run program again
    bool valid = true;          //initialising boolean to check if choice to run program again is valid
    
   do{                          //do-while loop so that program runs atleast once first, then depends on user
        while(true){
            cout << "Enter a positive number: ";
            cin >> number;

            if (number > 0) {
                break;          // Exit the loop if the number is valid
            } else {
                cout << "Please enter a number greater than 0." << endl;
            }
        }

        unsigned long long factorial = 1;         // Use unsigned long long to handle large factorials

        for (int i = 1; i <= number; i++) {
            factorial *= i;                      // Multiply by i to calculate the factorial
        }

        cout << "Factorial of " << number << " : " << factorial << endl;

        do{                                      //do-while loop to ask if user wants to run program again
            cout << "Do you want to check another number's factorial?\n";
            cout << "1 - Yes || 2 - No \n";
            cin >> choice;

            if(choice==1){
                valid = true;
                break;
            }
            else if(choice==2){
               cout << "Okay bye :(" << endl;
               //setting boolean to false so that loop to run program is exited
               playagain=false;               
               break;                            
            }
        }while(valid==false);
   }while(playagain==true);

    return 0;
}

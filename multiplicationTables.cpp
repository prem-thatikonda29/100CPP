#include <iostream>
using namespace std;

int main() {
    int number,choice,multiples;
    bool playagain = true;

    cout << "Welcome to the Multiplication Table Generator!\n";
    do{
        cout << "Enter a number : ";
        cin >> number;

        cout << "How many multiples do you want? ";
        cin >> multiples;

        cout << endl<<"Multiplication table of " << number << ":" << endl;

        for (int i = 1; i <= multiples; ++i) {
            cout << number << " x " << i << " = " << (number * i) << endl;
        }

        cout <<endl<< "Check another number's table? \n";
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
    }while(playagain == true);
    
    return 0;
}

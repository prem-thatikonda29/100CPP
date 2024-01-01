//Write a C++ program to check if a number is prime or composite.
#include <iostream>
using namespace std;

int main()
{
  while (true) //always runs the loop till infinity
  {
    
    int n; //declaring a variable 'n' of data type integer

    cout << endl<< "Enter the number you want to check for (enter 0 to exit): ";  //asking user for the input
    cin >> n;  //initializing 'n' with the value by the user


    if (n == 0)
    {
        break; // Exit the loop if the user enters 0
    }

    if (n == 2)
    {
        cout << endl<< "The number " << n << " is a prime number." << endl;
    }
    else if (n < 1)
    {
        cout << endl<<"Enter a valid number, please. (whole number)." << endl;
    }
    else if (n==1)
    {
        cout<< endl<< "Entered number "<< n << " is neither prime nor composite."<<endl;
    }
    else
    {
        bool prime = true;  //boolean used to see if true or false condition if false break and if true continue.

        for (int i = 2; i<n; i++) // for example taken if 5 we will check 5 divisiblity with 2, 3 and 4. if remainder is  then its divisible otherwise not.
        {
            if (n % i == 0)
            {
                prime = false; //since its now divisible
                break; // break from the loop when the divisibility is found and now its not a prime.
            }
        }

        if (prime)
        {
            cout << endl<< "The Entered number " << n << " is a prime number." << endl;
        }
        else
        {
            cout << endl<< "The Entered number " << n << " is a composite number." << endl;
        }
    }
   
   }
   cout <<endl<<  "Thank you for using PrimeCompoQuest !! "; //when enterd 0  while exiting message.

   return 0;
}

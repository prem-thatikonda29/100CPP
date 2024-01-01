//Implement a program that checks if a string is a palindrome.

// what is a palindrome?
//where the reversed version of a word or number is as same as the original one.
//example : "madam" and "12321".
#include <iostream>
using namespace std;

int main()
{
    string a; //declaring a variable 'a' to store the string input by the user
    cout << "Enter what you want to check for (palindrome): "; // asking the user choice of input.
    cin >> a; //initializing it with the user input.

    int b = a.length(); //initializing the declared variable 'b' with the length of the variable 'a'.
                        //it contains- how long is the user input.
    bool Palindrome = true; //the true condition- if its a palindrome

    for (int i = 0; i < b/2; i++) ///i= 0  and (i< b/2) to reverse the input as long as i < half of the size of the string.
                                  //Consider this example:
                                  //input string: [madam]]
                                  // index no.  [0]=m , [1]=a, [2]=d, [3]=a, [4]=m. {size-1=index number}
                                  //size = 5 so half = 2  (since, integer division)
                                  //(a[i] = a[b-i-1])
                                  //string [0] = b-i-1 i.e. 5-0-1 i.e. 4 = "m" ---->1
                                  //string [1] = 5-1-1 i.e. 3 = "a"            ---->2
                                  //string [2] = 5-2-1 i.e. 2 = "d"            ---->3
                                  //since same it is palindrome
    {
        if (a[i] != a[b-i-1])     //since (a[i] != a[b-i-1]) is not same therfore not a palindrome.
        {
            Palindrome = false;   // it not a plaindrome
            break;                //break the loop
        }
    }

    if (Palindrome)               //if it is a plaindrome...
    {
        cout << "The entered string is a palindrome." << endl; //declare the string as palindrome
    }
    else
    {
        cout << "The entered string is not a palindrome." << endl; //otherwise declare it as not.
    }

    return 0; //end of the function.
}

//Implement a program to find the sum of natural numbers using recursion.
#include <iostream> 
using namespace std;

int sum (int n) //function signature 
{
    if (n == 0)  //if 0 then return to zero. since naturalnumber starts from 1 to infinity
    {
        return 0;
    }
    cout << n;  // this is for the final printing output to print the first n. then +n-1+n-2 till it becomes zero.
    if (n > 1)  // since sum is between two numbers, hence must be greater then one to start from one.
    {
        cout << " + "; // to print the final output as said above to print each --(decrement) and show result.
        return n+ sum(n-1); //this is where our operation is going on. for example. n=5, 5 +sum(4) then 5+4+sum(3) then 5+4+3+sum(2)... and at last 5+4+3+2+1 = result. untill becomes zero.
    }
    return 1; //end of this.
}

int main() 
{
    int num; //int num is declared.

    cout<<endl<<endl<<"Enter a natural number: "; //getting a number (must be natural number) from the user.
    cin>>num; //initialize the user value to num.
    if (num < 1) //if num <1 then its not a natural number.
    {
        cout<< "Enter a natural number."<<endl;
        return 1;
    }
    
    int result = sum(num); //calling the sum function to proess the user input and initializing it with the declared variable 'result'.
    cout<< " = " << result <<endl; //for final outcome printing.

    cout<< "Sum of natural numbers from 1 to "<< num << " is: "<<  result << endl; //the final outcome in words.
    
    return 0; //end of this.
}
                                                    //Including required streaming library
#include <iostream>

                                                   //Using standard namespace for whole code
using namespace std;

//making a function to perform the gcd and returning the value

int gcd(int n , int a , int b){              //Passed arguments are for iteration and calculations

                                            //initialized and declared some variables
    int max = 0;
    int c,d;

    //Using for loop to iterate till the greatest input by user
    for (int i = 1 ; i < n ; ++i){
        c = a % i;
        d = b % i;
        if (c == 0 && d == 0){
            //changing value of max when it is a common divisor
            max = i;
          }  
    }
    //returning the GCD
    return max;
}


//Entry level for execution
int main(){
                                                            //Declaring some variables to take inputs
    int a,b,n;

    cout<<"Enter two number to get GCD of  : \n";
    cin>>a>>b;

    //Setting "n" to greatest input by user                                                 
    n = (a>=b)? a : b;

    int max =0 ;

    //Finalising the code
    max = gcd(n,a,b);
    cout<<max;

    //Helping compiler to know it ran Successfully
    return 0;
}
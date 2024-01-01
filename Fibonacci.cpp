//Including terminal streaming library
#include <iostream>

//Standard scope for All the code
using namespace std;

//Main function
int main()
{
    //Initializing and declaring
    int a = 0 , b = 1 , n , next , series;

    cout<<"No. of fibonacci's you want : \n";
    cin>>n;

    next = b;
    cout<<"\nSeries : \n"<<a<<"\n"<<b<<"\n";   //Printing the first two fibonacci start of series

    //Using increment based for loop that works till Less than 1 than input because we already printed two number of series
    for (int i = 0 ; i < (n-1) ; i++)
    {   
        //Setting series variable to two variables
        series = a + next;

        //Printing series
        cout<<series<<"\n";

        //Setting the next numbers of series to be used to  print
        b = next;
        a= b;
        next = series;

    }

    //Adding one line to organize the output
    cout<<"\n";

    //Karna hi padta isko
    return 0;
}
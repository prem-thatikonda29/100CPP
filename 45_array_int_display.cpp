//Define an array of integers and display its elements.
#include <iostream>
using namespace std;

int main()
{
    int even[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18 }; //an array with size 10 and already with value.
   // even[2]= 24;   //even we can change the number at particular index number.
    for (int i = 0; i < 10; i++)  //for int i=o but less than the size to get the index number, and increement by 1 each time from zero to last index number. in this case it is 9.
    {
        cout<< "index number" <<"[" <<i<<"]" << " = " <<even[i]<<endl; //print all the values of the array of particular value of i.
    }
    return 0;//end of function

}
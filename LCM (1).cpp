//Using Input output streaming library 
#include <iostream>

//Standard namespace for code
using namespace std;

//Entry for execution
int main(){
    //Declaring some variables
    int input1 , input2 , small , big ;

    cout<<"Enter two numbers to get LCM of : \n";
    cin>>input1>>input2;

    //Checking which number from user is bigger and which smaller
   if(input1>=input2){
        small = input2;
        big = input1;
   }
   else{
    small = input1;
    big = input2;
   }
    
    //Using while to see if the user's input is Bigger than or equal to 0 on both side
    while(small>=0 && big>=0)
    {
        //using incremented for loop till smallest input from user to get the lcm
        for(int i = 1 ; i <= small ; i++)
        {
            if ((big*i) % small == 0)   //Checking for the lowest multiple of "big" which is also divisble by "small"
            {
                cout<<"LCM = "<<(big*i);
                return 0;
            }
        }
        //Condition if smallest input is zero so for loop never starts and This will be printed
        cout<<"LCM is 0";
        return 0;
        

    }
    //Ain't receiving any negative values from the user
    cout<<"Negative values are invalid";

    //essential
    return 0;
}
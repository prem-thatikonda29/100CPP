//using standard i/o method
#include <iostream>

//Standard scope for the code
using namespace std;

//main entry function
int main(){
                                        //initializing some values
    int a = 0,b = 0 , i = 1;

    //using do while to get the output to be more than 0
    cout<<"WELCOME TO NATURAL NUMBER CALCULATOR \n \n";
    do
    {
        if(a<0){
            cout<<"\n ERROR : \nPlease Enter positive number to perform the sum \n";
        }
        
        cout<<"How many natural number's sum you want(greater than zero) : \n";
        cin>>a;

    }while(a<=0);

    

    //Loop to get the sum of Natural numbers 
    while(i <= a)                    //Loop is adding the sum of increment from 1 till the input in the variable "B"
    {
        b += i++;
    }

                                                    //Printing the bracket to look better
    cout<<"(";

    //Loop executing to show the sequence of how sum of N natural number works
    for (int i = a ; i > 0 ; i--)
    {                 //Loop is working on the concept on decrementing the input till it reaches "1"and Makes the sequence clear
        if(i==1){
            cout<<i;
        }else{cout<<i<<"+";}

    }

    cout<<")";

    //Printing sum
    cout<<"\nSum is "<<b <<"\n";

    //Isko lagana padta (To get compiler to know it is a succesful code)
    return 0;
}

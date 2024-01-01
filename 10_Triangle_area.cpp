//Implement a program to calculate the area of a triangle given its base and height.
#include <iostream>
using namespace std;

int main()
{
    char choice;                                      //for asking the user wheather he/she want to do more calculations after one.

    do                                                //do-while loop for the iteration as long as user enter "y" as the choice for further calculations
    {
    
    double height, base ,area;                        // double only just to be ablr to use the decimal numbers too.

    cout<<endl<<"Enter the length of 'base': ";       //getting input from the user for base
    cin>>base;

    cout<<endl<<"Enter the height: ";                 //getting input from the user for height
    cin>>height;

    area = 0.5 * base * height ;                      //formula of area of triangle i.e. 1/2 * base * height
    
    
    cout<< endl<< "Area of the given Triangle is "<<  area << " square units."<<endl<<endl;    //printing the output in a sentence with units since area is a square unit.

    cout<< "Do you want to continue calculating more ? (enter 'y' to continue): ";             //asking the user for choice. if yes or no for further calculations.
    cin>> choice;                           //feeding the input from user choice.

    }                                       //end of do part of the loop, where it will be executed even if its not true, then see the while condition to give output.
    
    while (choice == 'y' || choice =='Y');  // while condition to say when actually to do the "do" part of the code and till when.
                                            //like here it will run till its 'y' enterd by the user otherwise print the following message.
    
    
    cout<< endl<<"Thank you for using Trispace calculator !! ";                                //The message while exiting.
    
    

    return 0; //executed //end of this
}
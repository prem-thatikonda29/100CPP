//Create a program to convert temperature from Celsius to Fahrenheit and vice versa.
#include <iostream>
using namespace std;

int main()
{
    //F= fahrenheit    and    C=Celsius
    int choice; //declaring the variable of integer type "choice"
    double F, C; //declaring F and C of data type double
    
    do //starting do-while loop
    {
        cout<<endl <<"°C to °F (1)" <<endl <<"   or" <<endl << "°F to °C (2)"<<endl <<endl; //asking the user for choice of conversion
        cin>> choice; //input the coice of user
     
        switch (choice) //switch cases to use either F to C or vice versa
        {
        case 1: // C to F
            cout<<endl<< "Enter the value of C: "; //asking the user for the input
            cin>> C;                         //storing the input in the variable
            F= ((9.0/5)*C) + 32;             //formula
            cout<<endl<< C << " °C is equal to " << F <<" °F."<<endl<<endl; //printing the outcome value 
            break; //break the statement to come out of this loop
        
        case 2: //F to C
            cout<< endl<<"Enter the value of F: "; //asking the user for the input
            cin>> F;                         //storing the input in the variable
            C= (5.0/9) * (F-32);             //formula
            cout<<endl<< F << " °F is equal to " << C <<" °C."<<endl<<endl;  //printing the outcome value 
            break;  //break the statement to come out of this loop

        case 0: // when enterd 0 exit the progra
            cout<<endl<< "Exiting the program. Thank you!"<< endl<<endl; //exit by greeting
            break; //break the statement to come out of this loop
        
        default: //when entered other thaan valid choices available
            cout <<"Invalid choice. Please enter 1, 2, or 0 to exit."<<endl<<endl; //print this error message
        }

    } while (choice !=0); //the condition states unitill when is this loop suppose to go on and on 
    
    
    
    return 0; //end of this 
}
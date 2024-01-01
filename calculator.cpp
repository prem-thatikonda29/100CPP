#include <iostream>

using namespace std;

int main(){ 
    float a , b ;
    char y;

    cout<<"WELCOME TO CALCULATOR \n\n";

    
    cout<<"Enter Both number : ";
    cin>>a>>b;

    label:
        cout<<"Enter the operation you want to perform : \n'+'for addition , '-' for subtraction , '*' for multiplication , \n'%' for modulus , '/'for division\n";
        cin>>y;


    switch (y)
    {
        case '+':
            cout<<"Addition is : "<<a+b;
            break;
        case '-':
            cout<<"Subtraction is : "<<a-b;
            break;
        case '/':
            cout<<"Division is : "<<a/b;
            break;
        case '%':
            cout<<"Remainder is : "<<int(a)%int(b);
            break;
        case '*':
            cout<<"Multiplication is : "<<a*b;
            break;
        default:
            cout<<"\nERROR : Wrong operation input \n\n";
            goto label;
    }




    return 0;
}
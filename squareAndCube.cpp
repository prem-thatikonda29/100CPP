#include<iostream>
using namespace std;

void square(int x)
{
    int prod;
    prod=x*x;
    cout<<"Square of "<<x<<" = " <<prod<<"."<<endl;
}
void cube(int y)
{
    int cuprod;
    cuprod=y*y*y;
    cout<<"Cube of "<<y<<" = " <<cuprod<<"."<<endl;
};

int main()
{
    int power;
    cout<<"Which prcodeure would you like to perform?"<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Cube"<<endl;
    cout<<"3.Both"<<endl;
    cin>>power;

    switch(power)
    {
        case 1:
                int a;
                cout<<"Please enter number - ";
                cin>>a;
                square(a);
                break;
        
        case 2:
                int b;
                cout<<"Please enter number - ";
                cin>>b;
                cube(b);
                break;

        case 3:
                int c;
                cout<<"Please enter number - ";
                cin>>c;
                square(c);
                cube(c);
                break;

    }

}

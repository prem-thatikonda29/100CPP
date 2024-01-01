#include <iostream>

using namespace std;

int main(){

    int n;

    main();

    cout <<"Enter line : \n";
    cin>>n;

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = (n-i) ; j >= 0 ; j-- )
        {
            cout<<" ";
        }

        for(int k = 0; k<=i ; k++ )
        {
            cout<<"*";
        }

        for(int l = 0 ;l< i ; l++)
        {
            cout<<"*";
        }
        cout<<"\n";

        
    }

    return 0;
}
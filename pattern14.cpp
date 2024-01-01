#include <iostream>

using namespace std;

int main(){
    int n , a = 0;

    cout<<"Enter number of lines \n";
    cin>>n;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j<i ; j++){
            a++;
            cout<<a<<" ";
        }
        cout<<"\n";
    }



    return 0;
}
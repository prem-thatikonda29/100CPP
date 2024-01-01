#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number of line : \n";
    cin>>n;


    cout<<"\n";
    for (int i=0 ; i <n; i++){
        for(int j=0 ; j <= i ; j++){
            if(j%2 == 0){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }

    return 0;
}
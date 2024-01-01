#include <iostream>

using namespace std;

int main(){
    float average;
    int n;

    
    cout<<"Enter the number of numbers you want average of : \n";
    cin>>n;

    float arr[n];

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter "<<i+1<<" Number : ";
        cin>>arr[i];
        average += arr[i]/n;
        
    }

    cout<<"\n\nYour List : [";
    for(int i = 0 ; i < n ; i++){
        if(i == n-1){
            cout<<arr[i];
        }
        else{
        cout<<arr[i]<<" , ";
        }
        
    }
    cout<<"]\n";

    cout<<"\nAverage of the list : "<<average;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num,original,d,result=0,count=0;
    cout << "Enter a number to check if it's an Armstrong number : ";
    cin >> original;

    num=original;
    
    while(num!=0){
        num/=10;
        ++count;        
    }
    num=original;

    while(num>0){
        d=num%10;
        result += pow(d, count);
        num = num/10;
    }

    if(result==original){
        cout << "It is an armstrong number\n";
    }
    else{
        cout << "It is not an armstrong number\n";
    }

    return 0;
}
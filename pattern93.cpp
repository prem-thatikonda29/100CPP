#include <iostream>
using namespace std;

int main(){

    char currChar = 'A';

    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= i; j++){
            cout << currChar<<" ";
            currChar++;
        }
        cout << endl;
    }
    return 0;
}
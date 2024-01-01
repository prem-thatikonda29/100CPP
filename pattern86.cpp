#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 1; i <= n+3; i++){
        for(int j = 1; j <= n; j++)
        {
            cout << j;
        }
        n--;
        cout << "\n";
    }

    return 0;
}
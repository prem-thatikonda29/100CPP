#include <iostream>
using namespace std;

int main()
{
    for(int row = 0;row<=5;row++){
        for(int col = 5; col > row; col--){
            cout << col;
        }
        cout << endl;
    }
}
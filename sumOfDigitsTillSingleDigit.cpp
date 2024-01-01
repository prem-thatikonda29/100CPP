#include <iostream>
using namespace std;

void findTheSingleDigit(int n) 
{
   cout << "Sum of digits of "<<n;
   int sum = 0;

   while(n > 0 || sum > 9) 
   {
      if(n == 0) {
         n = sum;
         sum = 0;
      }
      sum += n % 10;
      n /= 10;
   }
   cout << " till it becomes a single digit : "<<sum <<endl;
}

int main() 
{
   int n;

   cout << "Enter a number : ";
   cin >> n;

   findTheSingleDigit(n);

   return 0;
}

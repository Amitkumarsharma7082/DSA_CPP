#include<iostream>
using namespace std;

int main() {
    /*
    *********
     *******
      *****
       ***
        *
    */

   int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;
// Outer Loop
   for(int i = 1; i <= n; i++) {
// Space
    for(int s = 1; s <= i-1; s++) {
        cout << " ";
    }
// Inner Loop
    for(int j = 1; j <= 2*n-2*i+1; j++) {
        cout << "*";
    }
    cout << endl;
   }
}
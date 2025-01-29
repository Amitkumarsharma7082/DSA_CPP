#include<iostream>
using namespace std;

int main() {
    /*

    *
   ***
  *****
 *******
*********

    */

   int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;
// Inner Loop 
    for(int i = 1; i <= n; i++) {
//Space 
        for(int s = 1; s <= n-i; s++) {
            cout << " ";
        }
//Outter Loop
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
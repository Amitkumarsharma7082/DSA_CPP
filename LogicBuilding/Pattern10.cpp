#include<iostream>
using namespace std;

int main() {
    /*
    
*
**
***
****
*****
****
***
**
*

    */
   
   // Traingle
   int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;

   for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
   }
   // Reverse Triangle
   for(int i = 1; i < n; i++) {
    for(int j = 1; j <= n-i; j++) {
        cout << "*";
    }
    cout << endl;
   }
}
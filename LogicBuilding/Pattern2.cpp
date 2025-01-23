#include<iostream>
using namespace std;

int main() {
    // Pattern 2 >
    /*
        * 
        * * 
        * * * 
        * * * *
    */

   int n;
   cout << "Enter the value of N : " << endl;
   cin >> n;

   for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
   }
}

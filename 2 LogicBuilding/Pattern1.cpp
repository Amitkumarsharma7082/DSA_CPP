#include<iostream>
using namespace std;

int main() {
    // Pattern 1 >
    /*
        * * * *
        * * * *
        * * * * 
        * * * *
    */

   int n;
   cout << "Enter the value of N : " << endl;
   cin >> n;

   for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
    cout << endl;
   }
}
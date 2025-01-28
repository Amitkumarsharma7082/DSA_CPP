#include<iostream>
using namespace std;

int main() {
    /*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    */

   int n;
   cout << "Enter the value of n : " ;
   cin >> n;

   for (int i = n; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
        cout << "*";
    }
    // Spaces
    for (int s = 1; s <= 2*(n - i); s++) {
        cout << " ";
    }
    for(int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
   }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    // Spaces
    for (int s = 1; s <= 2*(n - i); s++) {
        cout << " ";
    }
    for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}
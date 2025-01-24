#include<iostream>
using namespace std;

int main() {
    /*
    1
    01
    101
    0101
    10101
    */
   int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;

   // Outer Loop
   for(int i = 1; i <= n; i++) {
    // Inner Loop
    for(int j = 1; j <= i; j++) {
        // Print
        if ((i + j) % 2 == 0) {
                cout << "1";
            } else {
                cout << "0";
            }
    }
    cout << endl;
   }
}
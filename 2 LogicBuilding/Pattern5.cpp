#include<iostream>
using namespace std;

int main() {
    /*
        ****
        ***
        **
        *
    */

   int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;

//    for(int i = 1; i <= n; i++) {
//     for(int j = 1; j <= n-i+1; j++) {
//         cout << "*";
//     }
//     cout << endl;
//    }
for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--) {
         cout << "*";
    }
    cout << endl;
   }
}
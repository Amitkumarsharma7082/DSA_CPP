#include<iostream>
using namespace std;

int main() {
    /*
    ABCD
    ABC
    AB
    A
    */

   int n;
   cout << "Enter the value of n : ";
   cin >> n;

   for (int i = n; i >= 1; i--) {
    for (char ch = 'A'; ch <= 'A'+i-1; ch++) {
        cout << ch;
    }
    cout << endl;
   }
}
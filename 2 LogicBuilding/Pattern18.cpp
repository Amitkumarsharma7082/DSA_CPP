#include<iostream>
using namespace std;

int main() {
    /*
    E 
    D E 
    C D E 
    B C D E 
    A B C D E
    */

   int n;
   cout << "Enter the value of n : ";
   cin >> n;

   for (int i = 0; i < n; i++) {
    char el = 'A' + n - 1;
    cout << "Element 1 : " << el << " " << endl;
    for (char ch = el - i; ch <= el; ch++) {
        cout << "Element 2 : " << char(el - i) << " " << endl;
        cout << ch << " ";
    }
    cout << endl;
   }
}
#include<iostream>
using namespace std;

int main() {
    /*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
    */
   int n;
   cout << "Enter the value of n : ";
   cin >> n;
// Outer Loop
   for (int i = 1; i <= n; i++) {
// Spaces
for (int s = 1; s <= n - i; s++) {
    cout << " ";
}
// Inner Loop
char ch = 'A';
for (int j = 1; j <= 2*i - 1; j++) {
    if (j < i) {
        cout << ch++;
    }
    else {
        cout << ch--;
    }
}
// Next Line
cout << endl;
   }
}
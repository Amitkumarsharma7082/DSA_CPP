#include<bits/stdc++.h>
using namespace std;


// void changeA(int* ptr) { // Pass by reference using pointers
//   *(ptr) = 20;
// }

void changeA(int &b) { // Pass by reference using alias
  b = 30;
}


int main() {
  //! 1. Null Pointer : A pointer that doesn't point to any location
  // int* ptr = NULL;
  // cout << ptr << endl; // output : 0x0

  //! 2. Pass by reference
  int a = 10;
  changeA(a);
  cout << "inside main function : " << a <<endl; // without using Pass by reference
}
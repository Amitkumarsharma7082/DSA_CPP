#include<bits/stdc++.h>
using namespace std;

int main() {
  //! we are change the arr (type) pointer beecause who care arr[] = {1, 2, 3} ?
  // int n, val;
  // cout << "Enter the value of n : ";
  // cin >> n;

  // vector<int> arr;
  // cout << "Enter the arr : ";
  // for (int i = 0; i < n; i++) {
  //   cin >> val;
  //   arr.push_back(val);
  // }
  // cout << endl;
  
  // cout << "Print the arr : ";
  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }
  // cout << endl;

  
  //! 2. Pointer Arthmetic
  //* Incre (++), Decre (--)
  // int a  = 10;
  // int* ptr = &a;

  // cout << ptr << " "; // output : 0x7ff7b5b69120
  // ptr = ptr + 2 ; // hexaDecimal (4 byte ++)
  // cout << ptr << endl; // output : 0x7ff7b5b69124 (incremenet by 4) because int ptr

  //! 3. Subract Arthmetic
  int b = 10;
  int* ptr1 = &b;
  int c = 10;
  int* ptr2 = &c;

  cout << (ptr1 - ptr2) << endl;
}
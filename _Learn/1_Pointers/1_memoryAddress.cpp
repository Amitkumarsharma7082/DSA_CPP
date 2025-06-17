//! in which every element is store like hexaDecimal form 16 (0-9 and a-f)

#include<bits/stdc++.h>
using namespace std;

int main() {

  //! 1. Operators
  // int a = 10;
  // cout << &a << endl; //output : 0x7ff7be33015c

  // char ch = 'a';
  // cout <<"Address of characters:  "<< (void*)&ch << endl; // 0x7ff7beddf13b

  //! 2. Pointers : Special variable that store *other Variable address
  // int a = 10;
  // int* ptr = &a;
  //! 3. this is called pointer to pointer
  // int** ptrr = &ptr;

  // float price = 10.25;
  // float* ptr2 = &price;

  // char ch = 'a';
  // char* ptr3 = &ch;
  // cout << "Pointer : " << (void*)ptr3 << endl;

  //! 4. Dereference Operators : value at address
  int a = 10;
  int* ptr = &a;
  cout << *(&a) << endl; // output : 10
  cout << *(ptr) << endl; // output : 10

  int** parPtr = &ptr;
  cout << **(parPtr) << endl; // output : 10
  cout << (ptr) << endl;

  return 0;
}

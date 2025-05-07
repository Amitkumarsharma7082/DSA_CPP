#include<bits/stdc++.h>
using namespace std;

int main() {
  // vector<int> vec;
  //! 6. vector<int> vec(size, elememnt) 
  vector<int> vec1(5, 1);
  //vector<int> vec1 = {1, 2};
  vector<int> vec2(vec1);

//! 1. size
 // cout << "size : " << vec.size() << endl;
// capacity : vec blank so size : 0 (n^2);
  // cout << "capacity : " << vec.capacity() << endl;

//! 2. push_back
  // vec.push_back(1);
  // vec.push_back(2);
  // vec.push_back(3);
  // vec.push_back(4);
  // vec.push_back(5);
//! 3. pop_back() // last element pop
  // vec.pop_back();
//! 4. emplace_back(); // DP
  // vec.emplace_back(6);

  // cout << "size : " << vec.size() << endl; //3
  // cout << "capacity : " << vec.capacity() << endl; //4

  cout << "Print the element in vector : " << endl;
  // for-each loop
  for (int val : vec2) {
    cout << val << " ";
  }
  cout << endl;

  //! 5. at & []
  // cout << "Vector at index : " << vec[2] << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  // vector<int> vec;
  //! 6. vector<int> vec(size, elememnt) 
 // vector<int> vec1(5, 1);
  //vector<int> vec1 = {1, 2};
  // vector<int> vec2(vec1);

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

  // //cout << "Print the element in vector : " << endl;
  // // for-each loop
  // for (int val : vec2) {
  //   cout << val << " ";
  // }
  // cout << endl;

  //! 5. at & []
  // cout << "Vector at index : " << vec[2] << endl;



cout << "--------------------------------------" << endl;



  //! Vector
  /*
  . erase (vec.erase(vec.begin() + 1))
  . insert (vec.insert(vec.begin() + 2))
  . clear (vec.clear())
  . empty (1 or 0)
  */

 //! iterators
 /*
 . vec.begin()
 . vec.end()
 . rbegin()
 . rend()
 */

vector<int> vec;
vec.push_back(1); // 0
vec.push_back(2); // 1
vec.push_back(3); // 2
vec.push_back(4); // 3
vec.push_back(5); // 4

//! a.
// . erase (vec.erase(vec.begin() + 1))
// vec.erase(vec.begin() + 1, vec.begin() + 3);

//! b.
// .insert (vec.insert(vec.begin() + 2))
// vec.insert(vec.begin() + 1, 100);

//! c.
// . clear (vec.clear())
//vec.clear();

cout << "Print the vector : " << endl;
for (int val : vec) {
  cout << val << " ";
}
cout << endl;

//! d.
/* . empty (vec.empty())

if (vec.empty() == 1) {
  cout << "Vector is empty " << endl;
}
else {
  cout << "Vector is not empty " << endl;
}
*/


//! a. vec.begin()
cout << "vec.begin() : " << *(vec.begin()) << endl;
cout << "vec.end() garbage value : " << *(vec.end()) << endl; // garbage value

// vector<int> :: iterator it;
cout << "iterator forward : " << endl;
for (auto it = vec.begin(); it != vec.end(); it++) {
  cout << *(it) << " ";
}
cout << endl;
cout << "iterator backward : " << endl;
for (auto it = vec.rbegin(); it != vec.rend(); it++) {
  cout << *(it) << " ";
}
cout << endl;

return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
  // unique and sorted
  //set<int>s;
  unordered_set<int> s;
  s.insert(5);
  s.insert(2);
  s.insert(3);
  s.insert(1);


  s.insert(1);
  s.insert(2);
  s.insert(3);
  
  for (auto i : s) {
    cout << i << endl;
  }
  
  

}
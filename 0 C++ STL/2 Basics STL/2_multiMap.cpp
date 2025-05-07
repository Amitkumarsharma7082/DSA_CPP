#include<bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, int> m;
  m.emplace("tv", 1);
  m.emplace("v", 100);
  m.emplace("ttv", 10);
  m.emplace("tvv", 0);

  //! not use in multimap
  // m["tv"] = 100;
  // m["laptop"] = 50;
  // m["watch"] = 10;
  // m["headphone"] = 150;
  // m.insert({"camera", 90});
  
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  
  

}
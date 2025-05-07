#include<bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> m;
  m["tv"] = 100;
  m["laptop"] = 50;
  m["watch"] = 10;
  m["headphone"] = 150;
  // m.insert({"camera", 90});
  
  m.erase("tv");
  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }
  
  if (m.find("camera") != m.end()) {
      cout << "Found\n";
  }
  else {
      cout << "Not found\n";
  }

}
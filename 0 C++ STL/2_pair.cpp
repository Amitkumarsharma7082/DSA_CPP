#include<bits/stdc++.h>
using namespace std;

int main() {
  //! Pair : 1
  // pair<int, int> p = {1,2};
  //pair<int, pair<int, int>> p = {1, {1, 1}};
  // cout << "p.first : " << p.first << endl;
  // cout << "p.second : " << p.second << endl;
  // cout << "p.second.first : " << p.second.first << endl;

  //! Pair : 2 vector in pair
  vector<pair<int,int> > vecP;
  vecP.push_back({-1, 0});
  vecP.emplace_back(1, 2);
  vecP.emplace_back(3, 4);
  vecP.emplace_back(5, 6);

  for (auto p : vecP) {
    cout << "{ " << p.first << ", " << p.second << " }"<< endl;
  }

}
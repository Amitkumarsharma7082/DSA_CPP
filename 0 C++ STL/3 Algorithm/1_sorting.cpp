#include<bits/stdc++.h>
using namespace std;

bool compartor(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second) return true;
  if (p1.second > p2.second) return false; 

  if (p1.first < p2.first) return true;
  else return false;
  
}

int main() {
vector<pair<int, int>> v = {{3,1}, {1,1}, {2,2}};
  //! Array sort
  // int arr[5] = {4,5,7,9,1};
  //int n = arr.size();
  //cout << "n : " << n << endl; 
  // sort(arr, arr+5);


//! Vector sort
// vector<int> v = {4,5,7,9,1};
// sort(v.begin(), v.end());

//! descending order
// sort(v.begin(), v.end(), greater<int>());
//* compartor
// greater<int>()

sort(v.begin(), v.end(), compartor);
  for (auto i : v) {
    cout << i.first << " " << i.second << endl;
  }
  cout << endl;
}
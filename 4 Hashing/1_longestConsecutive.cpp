#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int>& arr) {
  // size of arr : 
  int n = arr.size();
  if (n == 0) return 0;

  int longest = 1;
  unordered_set<int> st;
  // insert arr unique element in set
  for (int i = 0; i < n; i++) {
    st.insert(arr[i]);
  }

  for (auto it : st) {
    // *****
    if (st.find(it - 1) == st.end()) {
      int count = 1;
      int x = it;
      // *****
      while (st.find(x + 1) != st.end()) {
        x = x + 1;
        count = count + 1;
      }
      longest = max (longest, count);
    }
  }
  return longest;
}

int main() {
  int n,val;
  vector<int> arr;
  cout << "Enter n : ";
  cin >> n;

  cout << "Enter the arr : "; // 102 4 100 1 101 3 2 1 1
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }

  int ans = longestConsecutive(arr);
  cout << "Longest Consecutive : " << ans << endl;
}
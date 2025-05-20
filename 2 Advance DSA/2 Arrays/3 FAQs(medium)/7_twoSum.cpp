#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  //! Brute Force Solution TC : O(N^2), SC: O(N)
  /*
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> ans;
      int n = nums.size();
      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          ans.push_back(i);
          ans.push_back(j);
          return ans;
        }
      }
      return {-1, -1}; 
    }
  */

 //! Better TC : O(NlogN), SC: 
//  vector<int> twoSum(vector<int>& nums, int target) {
//       vector<int> ans;
//       int n = nums.size();
//  }

//! Optimal TC : O(N) + O(NlogN) SC : O(N)
 vector<int> twoSum(vector<int>& arr, int tar) {
  unordered_map<int, int> m;
  vector<int> ans;

  for(int i = 0; i < arr.size(); i++) {
    // Given Arr : [5, 2, 11, 7, 15];
    int first = arr[i];

    int sec = tar - first; // 9 - 7 = 2

// 2 in hashMap 
    if (m.find(sec) != m.end()) {
      ans.push_back(i); // 3
      ans.push_back(m[sec]); // m[2] = 1
    }
    // store in hash map
    m[first] = i; // {5,0}, {2, 1}, {11, 2}
  }
  return ans; // [3, 1]

 }
};

int main() {
  int n, val, target;

  cout << "Enter the value of n : ";
  cin >> n;

  vector<int> nums;
  cout <<"Enter the arr : " << " ";
  for (int i = 0; i < n; i++) {
    cin >> val;
    nums.push_back(val);
  }

  cout << "Enter the value of target : ";
  cin >> target;

  Solution sol;
  vector<int> ans = sol.twoSum(nums, target);
  cout << "Answer : " << "[ ";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << "]" << endl;

  return 0;
}
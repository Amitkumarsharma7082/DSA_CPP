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
 vector<int> twoSum(vector<int>& nums, int target) {
      // size
      int n = nums.size();

      // store the ans
      vector<int> ans;

      // arr[] = [2, 6, 5, 8, 11]
      // index[] = [0, 1, 2, 3, 4]
      // pair[] = [(2,0), (6,1), (5,2), (8,3), (11,4)]

      vector<vector<int> > eleIndex;
      for (int i = 0; i < n; i++) {
        eleIndex.push_back({nums[i], i});
      }

      //Sort by first element in ascending order
      /*
      The lambda function [](const vector<int>& a, const vector<int>& b) is the comparator used to decide the order of elements.
      */
        sort(eleIndex.begin(), eleIndex.end(), [](const vector<int>& a, const vector<int>& b) {
           return a[0] < b[0]; 
        });

      int left = 0, right = n - 1;
      while (left < right) {
        int sum = eleIndex[left][0] + eleIndex[right][0];
        if (sum == target) {
          ans.push_back(eleIndex[left][1]);
          ans.push_back(eleIndex[right][1]);
          return ans;
        }
        else if (sum < target) {
          left ++;
        }
        else {
          right --;
        }
      }
  return {-1, -1};
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
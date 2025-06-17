#include<bits/stdc++.h>
using namespace std;



//! Q : Pair Sum
//! Brute
// class Solution {
//   public:
//     vector<int> pairSum(vector<int>& nums, int target) {
//       int n = nums.size();
//       vector<int> ans;

//       for (int i = 0; i < n; i++) {
//         // first num
//         int a = nums[i];
//         for (int j = i + 1; j < n; j ++) {
//           int b = nums[j];
//           if (a + b == target) {
//             ans.push_back(i);
//             ans.push_back(j);
//           }
//         }
//       }
//       return ans;
//     }
// };
//! Optimal Approach
// class Solution {
//   public:
//     vector<int> pairSum(vector<int>& arr, int target) {
//       int n = arr.size();
//       vector<int> ans;

//       int i = 0, j = n - 1;
      
//       while (i < j) {
//         //if (i > 0 && arr[i] == arr[i - 1]) continue;
//         int sum = arr[i] + arr[j];

//         if (sum == target) {
//           ans.push_back(i);
//           ans.push_back(j);
//           i++;
//           j--;
//           while (i < j && arr[i] == arr[i-1]) i++;
//           while (i < j && arr[j] == arr[j+1]) j--;
//         }
//         else if (sum < target) {
//           i++;
//         }
//         else {
//           j--;
//         }
//       }
//       return ans;
//     }
// };


//! Q : Majority Element in array > n/2
//! BruteForce : TC : O(N^2)
// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
//       int n = arr.size();
    //   for (int i = 0; i < n; i++) {
    //     int count = 0;
    //     for (int j = 0; j < n; j++) {
    //       if (arr[i] == arr[j]) {
    //         count++;
    //       }
    //     }
    //     if (count > n/2) {
    //       return arr[i];
    //     }
        
    //   }
    //   return -1;
    // }
// };

//! Q : Majority Element in array > n/2
//! BetterSolution : TC : O(nlogn)

// class Solution {
//   public:
//     int majorityElement(vector<int>& arr) {
//      int n = arr.size();
//      int freq = 1, el = arr[0];
//      for (int i = 1; i < n; i++) {
//       if (arr[i] == arr[i-1]) {
//         freq++;
//       }
//       else {
//         el = arr[i];
//         freq = 1; // reset
//       }
//       if (freq > n/2) {
//         return el;
//       }
//      }
//      return -1;
//     }
// };


//! Q : Majority Element in array > n/2
//! OptimalSolution : TC : O(n)
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
      int n = arr.size();
      int freq = 0, ans = 0;

      for (int i = 0; i < n; i++) {
        if (freq == 0) {
          ans = arr[i];
        }
        if (ans == arr[i]) {
          freq++;
        }
        else {
          freq--;
        }
      }
      return ans;
    }
};
int main() {
  int n, val;

  cout << "Enter the value of n : ";
  cin >> n;

  vector<int> nums;
  cout <<"Enter the arr : " << " ";
  for (int i = 0; i < n; i++) {
    cin >> val;
    nums.push_back(val);
  }

  Solution sol;
  int ans = sol.majorityElement(nums);
  cout << "Answer : " << ans << endl;

  //! For pair sum : 
  // for (int i = 0; i < ans.size(); i++) {
  //   cout << ans[i] << " ";
  // }
  // cout << "]" << endl;

  return 0;
}
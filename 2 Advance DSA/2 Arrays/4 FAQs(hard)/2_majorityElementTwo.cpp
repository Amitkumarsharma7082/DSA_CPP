#include<bits/stdc++.h>
using namespace std;

// 1 1 1 3 3 2 2 2 || n = 8


//! Brute force : TC : O(N^2)
// class Solution {
//   public:
//     vector<int> majorityElementTwo(vector<int>& nums) {
// // Size of the array
//         int n = nums.size(); 
        
//         // List of answers
//         vector<int> result;
        
//          for (int i = 0; i < n; i++) {
             
//         /*Checking if nums[i] is not 
//         already part of the answer*/
//         if (result.size() == 0 || result[0] != nums[i]) {
//             int cnt = 0;
            
//             for (int j = 0; j < n; j++) {
//                 // counting the frequency of nums[i]
//                 if (nums[j] == nums[i]) {
//                     cnt++;
//                 }
//             }

//             // check if frquency is greater than n/3:
//             if (cnt > (n / 3))
//                 result.push_back(nums[i]);
//             cout <<"result[0] != nums[i] " << result[0] << " != " << nums[i] << endl;
//         }
        
//         //if result size is equal to 2 break out of loop
//         if (result.size() == n/3) break;
//     }
    
//     //return the majority elements
//     return result;
//     }
// };


//! Better TC : O(N) + O(logn)> add into map SC : O(N) using Hashmap
// class Solution {
//   public:
//     vector<int> majorityElementTwo(vector<int>& arr) {
//       vector<int> ans;
//       map<int, int> mpp;
//       int n = arr.size();
//       int mini = n/3 + 1;
//       for (int i = 0; i < n; i++) {
//         // first add (1, 1)
//         mpp[arr[i]]++;

//         // because element store > n/3 : in this case n/3 = 2 + 1(for mini)
//         if (mpp[arr[i]] == mini) {
//           ans.push_back(arr[i]);
//         }
//         if (ans.size() == n/3) break;
//       }
//       // sort the answer
//       sort(ans.begin(), ans.end());
//       return ans;
//     }
// };


class Solution {
  public:
    vector<int> majorityElementTwo(vector<int>& arr) {
      vector<int> ans;
      

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
  vector<int> ans = sol.majorityElementTwo(nums);
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  //! For pair sum : 
  // for (int i = 0; i < ans.size(); i++) {
  //   cout << ans[i] << " ";
  // }
  // cout << "]" << endl;

  return 0;
}
#include<bits/stdc++.h>
using namespace std;


//! Brute
// class Solution{
//   public:
//     vector<vector<int> > threeSum(vector<int>& arr) {
//        vector<vector<int> > ans;
//        set<vector<int> > s;

//        for (int i = 0; i < arr.size(); i++) {
//         int a = arr[i];
//         for (int j = i + 1; j < arr.size(); j++) {
//           int b = arr[j];
//           for (int k = j + 1; k < arr.size(); k++) {
//             int c = arr[k];
//             if (a + b + c == 0) {
//               vector<int> tri = {a, b ,c};
//               sort(tri.begin(), tri.end());

//               if (s.find(tri) == s.end()) {
//                 s.insert(tri);
//                 ans.push_back(tri);
//               }
//             }
//           }
//         }
//        }
//        return ans;
//     }
// };


//! Better
// class Solution {
//   public: 
//     vector<vector<int> > threeSum(vector<int>& arr) {
      
//       set<vector<int>> uniqueTriplets;

//       for (int i = 0 ; i < arr.size(); i++) {
//         int tar = -arr[i];
//         set<int> s;
//         for (int j = i + 1; j < arr.size(); j++) {
//           int third = tar - arr[j];

//           if (s.find(third) != s.end()) {
//             vector<int> tri = {arr[i], arr[j], third};
//             sort(tri.begin(), tri.end());
//             uniqueTriplets.insert(tri);
//           }
//           s.insert(arr[j]); 
//         }
        
//       }
//       vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//       return ans;
//     }
// };



//! Optimal
class Solution {
  public: 
    vector<vector<int> > threeSum(vector<int>& arr) {
      // Store the element S.C. : O(ans);
      vector<vector<int> > ans;
      sort(arr.begin(), arr.end()); // T.C. : O(nlogn);

      for (int i = 0 ; i < arr.size(); i++) { // T.C : O(n)
        //! 1. More optimized Approach
        // i value is same why i - 1 because we done the all step for i - 1 so we dont repeate the vlaue thats why this condition
        if (i > 0 && arr[i] == arr[i-1]) continue;
        int j = i + 1, k = arr.size() - 1;

        while (j < k) { // T.C. : O(n) = O(n^2);
          int sum = arr[i] + arr[j] + arr[k];

          if (sum < 0) {
            // Sum ^| (increase)
            j++;
          }
          else if (sum > 0) {
            k--;
          }
          else {
            // Perfect Case : sum == 0;
            ans.push_back({arr[i], arr[j], arr[k]});
            j++, k--;

            //! 2. More optimized Approach
            // J  and k is repeated value ignore 
            while (j < k && arr[j] == arr[j - 1]) j++;
            while (j < k && arr[k] == arr[k + 1]) k--;
          }
        }
      }
      return ans;
    }

};
int main() {
    int n, val;
    cout << " enter the n : ";
    cin >> n;

    vector<int> arr;
    cout << "Enter the arr : ";
    for (int i = 0; i < n; i++) {
      cin >> val;
      arr.push_back(val);
    }

    // Create an instance of Solution class
    Solution sol;

    vector<vector<int> > ans = sol.threeSum(arr);

    // Print the result
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}
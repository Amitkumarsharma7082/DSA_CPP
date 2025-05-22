#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int> > fourSum(vector<int>& arr) {
      vector<vector<int> > ans;
      sort(arr.begin(), arr.end());

      for (int i = 0 ; i < arr.size(); i++) { // T.C : O(n)
        //! 1. More optimized Approach
        // i value is same why i - 1 because we done the all step for i - 1 so we dont repeate the vlaue thats why this condition
        if (i > 0 && arr[i] == arr[i-1]) continue;
        for (int j = i+1 ; j < arr.size(); j++) {
          if (j > i + 1 && arr[j] == arr[j - 1])
                    continue;
        int k = j + 1, l = arr.size() - 1;
        while (k < l) { // T.C. : O(n) = O(n^2);
          long long sum = arr[i] + arr[j] + arr[k] + arr[l];

          if (sum < 0) {
            // Sum ^| (increase)
            k++;
          }
          else if (sum > 0) {
            l--;
          }
          else {
            // Perfect Case : sum == 0;
            ans.push_back({arr[i], arr[j], arr[k], arr[l]});
            k++, l--;

            //! 2. More optimized Approach
            // J is repeated value
            while (k < l && arr[k] == arr[k - 1]) k++;
            while (k < l && arr[l] == arr[l + 1]) l--;
          }
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

    vector<vector<int> > ans = sol.fourSum(arr);

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
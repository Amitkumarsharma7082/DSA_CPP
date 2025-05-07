#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        int n = nums.size();
// list of set
        set<vector<int> > st;
        for (int i = 0; i < n; i++) {
          for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
              if (nums[i] + nums[j] + nums[k]) {
                // Found a triplet that sums up to target
                vector<int> temp = {nums[i], nums[j], nums[k]};
                /* Sort the triplet to ensure
                   uniqueness when storing in set*/
                sort(temp.begin(), temp.end());
                st.insert(temp);
              }
            }
          }
        }
        vector<vector<int> > ans(st.begin(), st.end());
        return ans;

    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.threeSum(nums);

    // Print the result
    for (auto& triplet : ans) {
        cout << "[";
        for (auto& num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}
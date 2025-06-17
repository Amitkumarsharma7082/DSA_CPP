#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
  int lowerBound(vector<int> &nums, int x) {
    int n = nums.size();
        for (int i = 0; i < n; i++) {
            /* Check the condition for 
               the current element */
            if (nums[i] >= x) {
                // If lower bound is found 
                return i;
            }
        }
        /* If lower bound of 
           target is not found */
        return n;
  }
};

int main() {
  int n, val, x;
  vector <int> arr;

  cout << "Enter the value of n : ";
  cin >> n;

  cout << "Enter the arr : "; // 1 2 3 3 7 8 9 9 9 11
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }

  cout << "Enter the x : ";
  cin >> x;

  Solution s1;
  int ans = s1.lowerBound(arr, x);
  if (ans == -1) {
    cout << "Not found lowerBound" << endl;
  }
  else {
    cout << "Lower Bound : " << ans << endl;
  }
  return 0;
}
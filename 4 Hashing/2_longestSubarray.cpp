#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;


//! Brute
// class Solution{
// public:
//     int longestSubarray(vector<int> &arr, int k){
//         int n = arr.size();
//         int len = 0;
//         // outer loop
//         for (int i = 0; i < n; i++) {
//           int sum = 0;
//           for (int j = i; j < n; j++) {
//             sum += arr[j];
//             if (sum > k) break;
//             if (sum == k) len++;
//           }
//         }
//         return len;
//     }
// };


//! Optimal TC:O(n), SC: O(n)
class Solution{
public:
    int longestSubarray(vector<int> &arr, int k) {
      // arr : [9 4 20 3 10 5]
      int n = arr.size();
      int count = 0;

      // calculate PrefixSum 
      vector<int> prefixSum(n,0);
      prefixSum[0] = arr[0];

      for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i]; // prefixSum arr : [9, 13, 33, 36 46, 51]
      }

      // hashmap 
      unordered_map<int, int> m; //prefixSum, freq(key, value);
      for (int j = 0; j < n; j++) {
        // case : 1
        if (prefixSum[j] == k) {
          count ++;
        }
        // int val = i - 1; 
        int val = prefixSum[j] - k; // map main dundh rhe hai
        if (m.find(val) != m.end()) {
          count += m[val]; //****** // freq ko add kar rhe hai 
        }
        if (m.find(prefixSum[j]) == m.end()) {
          m[prefixSum[j]] = 0; // hashmap main (key, 0)
        }
        m[prefixSum[j]]++; // hashmap main (key, val)
      }
    return count;
    }
};
int main() {
  int n,val,k;
  vector<int> arr;
  cout << "Enter n : ";
  cin >> n;

  cout << "Enter the arr : "; // 102 4 100 1 101 3 2 1 1
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }
  cout << "Enter the k : ";
  cin >> k;
  Solution s1;
  int ans = s1.longestSubarray(arr, k);
  cout << "Longest Subarray : " << ans << endl;
}
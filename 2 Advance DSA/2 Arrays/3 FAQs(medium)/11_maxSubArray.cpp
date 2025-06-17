#include<bits/stdc++.h>
using namespace std;
// Problem No. is : 53
class Solution {
public:
    //Function to find maximum sum of subarrays
    int maxSubArray(vector<int>& arr) {
        int maxi = INT_MIN;
        int currSum = 0;
        for (int st = 0; st < arr.size(); st++) {
            currSum += arr[st];
            maxi = max(currSum, maxi);
            //Q: why this condition at last because 
            //A: if arr = [-1, -2, -7, -8] so answer is in negative if the condition in starting answer is zero so thats why Kadane's Algorithm at last 
            // Kadane's Algorithm
            if (currSum < 0) {
              currSum = 0;
            }
          }
        return maxi; 
    }
}; // 2 3 5 -2 7 -4

int main() {
  // -2 1 -3 4 -1 2 1 -5 4
    int n, val;
    vector<int> arr;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the arr : ";
    for (int i = 0; i < n; i++) {
      cin >> val;
      arr.push_back(val);
    }
    
    //create an instance of Solution class
    Solution sol;
    
    int maxSum = sol.maxSubArray(arr);
    
    //Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
// 2 3 5 -2 7 -4



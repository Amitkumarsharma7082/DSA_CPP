#include<bits/stdc++.h>
using namespace std;


//! Brute Force
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> arr) {
      int n = arr.size();
      
    }
};


int main() {
    // vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    int n, val;
    cout << "Enter the value of n : ";
    cin >> n;
    vector<int> arr;

    cout << "Enter the arr : ";
    for (int i = 0; i < n; i++) {
      cin >> val;
      arr.push_back(val);
    }
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> result = sol.findMissingRepeatingNumbers(arr);
    
    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


//! Brute Force TC : O(nlogn) and SC : O(1);
// class Solution {
// public:
//     //Function to sort the array
//     void sortZeroOneTwo(vector<int>& arr) {
//         // Sort the vector using std::sort
//         sort(arr.begin(), arr.end());
//     }
// };

//! Better TC : O(N) SC : O(N);
// class Solution {
// public:
//     //Function to sort the array
//     void sortZeroOneTwo(vector<int>& arr) {
//         // Sort the vector using std::sort
//         int count0 = 0, count1 = 0, count2 = 0;

//         // TC : O(N)
//         for (int i = 0; i < arr.size(); i++) {
//           if (arr[i] == 0) count0++;
//           else if (arr[i] == 1) count1++;
//           else count2++;
//         }

//         int idx = 0;
//         for (int i = 0; i < count0; i++) {
//           arr[idx++] = 0;
//         }
//         for (int i = 0; i < count1; i++) {
//           arr[idx++] = 1;
//         }
//         for (int i = 0; i < count2; i++) {
//           arr[idx++] = 2;
//         }
//     }
// };

//! Optimal Approach TC : O(N) with single Pass
//! Using Dutch National Flag Algorithm
//! DNF
class Solution{
  public:
    void sortZeroOneTwo(vector<int>& arr) {
      int n = arr.size();
      int low = 0, mid = 0, high = n - 1;

      while (mid <= high) {
        // 0s
        if (arr[mid] == 0) {
          swap (arr[low], arr[mid]);
          low++;
          mid++;
        }
        // 1s
        else if (arr[mid] == 1) {
          mid++;
        }
        // 2s
        else {
          swap (arr[high], arr[mid]);
          high--;
        }
      }
    }
};

int main() {
    int n, val;
    vector<int> arr;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the arr : ";
    for (int i = 0; i < n; i++) {
      cin >> val;
      arr.push_back(val);
    }
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.sortZeroOneTwo(arr);
    
    //print the array elements
    cout << "Sorted 0s, 1s and 2s : ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
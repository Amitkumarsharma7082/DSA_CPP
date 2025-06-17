#include<bits/stdc++.h>
using namespace std;

// int search(vector<int> &arr, int target) {
//   int n = arr.size();
//   int start = 0;
//   int end = n - 1;
  
//   while (start <= end) {
//     int mid  = (start + end) / 2;
//     if (arr[mid] == target) {
//       return mid;
//     }
//     else if (arr[mid] > target) {
//       end = mid - 1;
//     }
//     else {
//       start = mid + 1;
//     }
    
//   }
//   return -1;
// }

//! Recursive method
class Solution {
private:
int func(vector<int> &arr, int target, int start, int end) {
  if (start <= end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
      return mid;
    }
    else if (arr[mid] > target) {
      return func(arr, target, start, mid - 1);
    }
    else {
      return func(arr, target, mid + 1, end);
    }
  }
  return -1;
}

public:
int search(vector<int> &arr, int target) {
  int n = arr.size();
  return func(arr, target, 0, n-1);
}
};
int main() {
  int n,val,target;
  cout << "Enter the value of n : ";
  cin >> n;

  vector<int> arr;
  cout << "Enter the arr : "; // -1 0 3 5 9 12
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }

  cout << "Enter the target : ";
  cin >> target;

  Solution s1;
  int ans = s1.search(arr, target);

  if (ans == -1) {
    cout << "Not found" << endl;
  }
  else {
    cout << "find target at index : " << ans << endl;
  }
}
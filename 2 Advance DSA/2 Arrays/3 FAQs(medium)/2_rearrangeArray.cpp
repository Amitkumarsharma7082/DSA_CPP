#include<bits/stdc++.h>
using namespace std;


//! Brute Force Solution : T.C. -> O(N) + O(N/2) & S.C. -> O(N)
// class Solution {
//   public:
//   vector<int> reArraange(vector<int>& arr) {
//     vector<int> pos, neg;

//     //seprate +ve and -ve
//     for (int i = 0; i < arr.size(); i++) {
//       if (arr[i] >= 0)
//         pos.push_back(arr[i]);
//       else
//         neg.push_back(arr[i]);
//     }
//     for (int i = 0; i < (arr.size()/2); i++) {
//       arr[2 * i] = pos[i];
//       arr[2 * i + 1] = neg[i];
//     }
//     return arr;
//   }
// };


//! Optimal Solution TC -> O(N)
class Solution {
  public:
  vector<int> reArraange(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n,0);
    int posIndex = 0;
    int negIndex = 1;
    cout << "posIndex : " << posIndex << endl; 
    cout << "negIndex : " << negIndex << endl; 

    for (int i = 0; i < arr.size(); i++) {
      if(arr[i] < 0) { // Negative
        ans[negIndex] = arr[i];
        negIndex += 2;
      }
      else {
        ans[posIndex] = arr[i];
        posIndex += 2;
      }
    }
    return ans;
  }
};

int main() {
  int n, val;
  cout << "Enter the val of n : ";
  cin >> n;
  vector<int> arr;
  cout << "Enter the arr : ";
  for (int i = 0; i < n; i++) {
    cin >> val;
    arr.push_back(val);
  }
  Solution finder;
  vector<int> arrange = finder.reArraange(arr);
  cout << "Rearrange array : ";
  for (int i = 0; i < arrange.size(); i++) {
    cout << arrange[i] << " ";
  }
  cout << endl;

  return 0;
}
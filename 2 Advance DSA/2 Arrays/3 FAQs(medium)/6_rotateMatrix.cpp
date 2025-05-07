#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
/* Function to rotate the given 
    matrix by 90 degrees clockwise*/
//! Optimal for Space
    void rotateMatrix(vector<vector<int> >& mat) {
        int n = mat.size();

        // step 1 : transpose 
        // diagonally divide and swap
        for (int i = 0; i < n-1; i++) {
          for (int j = i+1; j < n; j++) {
            swap(mat[i][j], mat[j][i]);
          }
        }
        // step 2 : reverse
        for (int i = 0; i < n; i++) {
          // row is mat[i]
          reverse(mat[i].begin(), mat[i].end());
        }
    }

//! Brute force SC : O(N^2);
    // vector<vector<int> > rotateMatrix(vector<vector<int> >& mat) {
    //   int n = mat.size();
    //   // step 1 : to store into it
    //   vector<vector<int> > ans(n, vector<int>(n));

    //   for (int i = 0; i < mat.size(); i++) {
    //     for (int j = 0; j < mat[i].size(); j++) {
    //       ans[j][n-1-i] = mat[i][j];
    //     }
    //   }
    // return ans;

    // }
};
int main() {
  int n = 4;
    vector<vector<int> > arr(n,vector<int>(n)); 
  cout << "Enter a " << n << "x" << n << " matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Create an instance of the Solution class
    Solution sol; 
    
    sol.rotateMatrix(arr); 
    
    // Print the rotated matrix
    cout << "Rotated Image" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl; 
    }

    return 0;
}
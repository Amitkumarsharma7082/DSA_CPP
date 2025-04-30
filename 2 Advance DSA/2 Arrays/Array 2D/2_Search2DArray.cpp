// #include<iostream>
// using namespace std;

// class Solution {
//   public :
//     bool searchMatrix(vector<vector<int>>& mat, int target) {
//       int m = mat.size();
//       int n = mat[0].size();
//       int startRow = 0, endRow = m - 1;
//       while(startRow <= endRow) {
//         int midRow = startRow + (endRow - startRow)/2;

//         if (target >= mat[midRow][0])
//       }
//     }
// }
//! Maximum Row Sum 
#include<iostream>
using namespace std;

class Solution {
  public :
    bool searchMatrix(vector<vector<int>>& mat, int target) {
      int m = mat.size();
      int n = mat[0].size();
      int startRow = 0, endRow = m - 1;
      while(startRow <= endRow) {
        int midRow = startRow + (endRow - startRow)/2;

        if (target >= mat[midRow][0] &&)
      }
    }
}
int main() {
  
}
#include<bits/stdc++.h>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols) {
  int maxRowSum = INT_MIN;

  for (int i = 0; i < rows; i++) {
    int rowSumJ = 0;
    for(int j = 0; j < cols; j++) {
      rowSumJ += mat[j][i];
    }
    maxRowSum = max(maxRowSum, rowSumJ);
  }
  return maxRowSum;

}
bool linearSearch(int mat[][3], int rows, int cols, int key) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if(mat[j][i] == key) {
        return true;
      }
    }
  }
  return false;
}

int diagonalSum(int mat[][4], int n) {
  // in the diagonal matrix n is even no subsrtaction
  // n is odd so PD+SD-commonElement
   int sum = 0; 
   for (int i = 0; i < n; i++) {
    for (int j= 0 ; j < n ; j ++) {
      if (i == j) {
        sum += mat[i][j];
      }
      else if(j == n - i - 1) {
        sum += mat[i][j];
      }
    }
   }
   return sum;
}

int main() {
  vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};

  // dynamically size : 
  // int rows = mat.size();
  // int cols = mat[i].size();
  
  for (int i = 0; i < mat.size(); i++) {
    for (int j = 0; j < mat[i].size(); j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
  
}
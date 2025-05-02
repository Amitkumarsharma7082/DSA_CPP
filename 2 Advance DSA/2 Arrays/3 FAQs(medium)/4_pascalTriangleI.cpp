//! TC : O(N) and SC : O(1)
#include<bits/stdc++.h>
using namespace std;
// Pascal Triangle 1 : is nCr formula : n!/r!(n-r)!
// shortest method 10C3 = 10*9*8 * 7!/3*2*1(7!)
class Solution {
public:
    int pascalTriangleI(int r, int c) {
      return nCr(r-1, c-1);
    }
private :
  int nCr(int n, int r) {
    // example 10C7 instead of 10C7 : 10C3 so this is imp
    if (r > n - r) r = n - r;
    if(r == 1) return n;
    int result = 1; // using long long if in Constraints
    for (int i = 0; i < r; i++) {
      result = result * (n - i);
      result = result / (i + 1);
    }
    return result;
  }
};

int main() {
  // row number
    int r = 5; 
    // col number
    int c = 3;

    // Create an instance of the Solution class
    Solution sol; 
    
    // Function call to print the element in rth row and cth column 
    int ans = sol.pascalTriangleI(r, c);

    cout << "The element in the rth " << r << " and cth " << c << " in pascal's triangle is: " << ans << endl;
    for (int col = 1; col <= r; col++) {
      cout << sol.pascalTriangleI(r, col) << " ";
    }

    return 0;
}
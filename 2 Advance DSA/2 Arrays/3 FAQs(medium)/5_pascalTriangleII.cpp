#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    // Function to return the rth row of pascal's triangle
    vector<int> pascalTriangleII(int r) {
        vector<int> ans(r);
        for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout<<endl;
        ans[0] = 1;
        for (int i = 1; i < r; i++) {
            
            ans[i] = (ans[i-1]*(r-i))/i;
        }
        return ans;
    }
};

int main() {
    // row number
    int r = 5; 

    // Create an instance of the Solution class
    Solution sol; 
    
    // Function call to return the rth row of pascal's triangle
    vector<int> ans = sol.pascalTriangleII(r);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

   return 0;
}

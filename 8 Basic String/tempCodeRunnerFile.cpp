#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string& s, string& goal) {
    // Strings must be same length to be rotations of each other
        int n = s.size();
        string left = "";

        for (int i = 0; i < n - 1; i++) {
            string right = s.substr(i);
            if (right + left == goal) return true;

            left += s[i];
        }
        return false;
    }
};

int main() {
    Solution sol;
    string s = "abcde";
    string goal = "cdeab";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;  
    s = "abcde";
    goal = "abced";
    cout << (sol.rotateString(s, goal) ? "true" : "false") << endl;  
    return 0;
}
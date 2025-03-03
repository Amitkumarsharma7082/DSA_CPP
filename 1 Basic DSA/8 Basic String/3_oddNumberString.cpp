#include<bits/stdc++.h>
using namespace std;

/*
    in this question we have a string "002013438"
    the ouput is non-zero and largest odd
    the method to solve start the travel from last if the value is ODD stop
    and then start first number any number but no zero
    easily take substring
*/ 
class Solution {
    public :
        string largeOddNum(string& s) {
            int j = -1;
            int n = s.length();
            for (int i = n-1; i >= 0; i--)
            {
                /* code */
                // s[i] - '0' > '9' - '0' = '9' like char
                if ((s[i] - '0') % 2 != 0) {
                    j = i;
                    break;
                }
            }
            if (j == -1) return "";
            
            int i = 0;
            while (i < n) {
                if (s[i] != '0')
                break;
                i++;
            }
            return s.substr(i, j-i+1);
        }
};
int main() {
    Solution solution;
    string num = "002013438";
    string result = solution.largeOddNum(num);
    cout << "Largest odd number: " << result << endl;
    return 0;
}
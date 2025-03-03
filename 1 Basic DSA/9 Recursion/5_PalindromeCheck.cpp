#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
        bool palindromeCheck(string& s){
			//your code goes here
            return isPalindrome(s, 0, s.length() - 1);
		}
    private :
        bool isPalindrome(string& s, int l, int r) {
            if(l >= r) return true;

            if(s[l] != s[r]) return false;

            return isPalindrome(s, l + 1, r - 1);
        }
};

int main() {
    Solution solution;
    cout << boolalpha; // Print bool values as true/false
    cout << solution.palindromeCheck("hannah") << endl; // Output: true
    cout << solution.palindromeCheck("aabbaaa") << endl; // Output: false
    cout << solution.palindromeCheck("aba") << endl; // Output: true
    return 0;
}
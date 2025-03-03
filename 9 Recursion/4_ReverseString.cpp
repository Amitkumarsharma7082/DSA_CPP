#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<char> reverseString(vector<char>& s) {
            int l = 0;
            int r = s.size() - 1;

            reverse(s, l, r);
            return s;

        }
    private:
        void reverse(vector<char>& s, int l, int r) {
            if(l>=r) return;

            swap(s[l], s[r]);
            return reverse(s, l+1, r-1);
        }
};

int main() {
    Solution sol;
    vector<char> s = {'h', 'e', 'l', 'o'};

    vector<char> reversed = sol.reverseString(s);
    for (char c : reversed) {
        cout << c << " ";
    }
    return 0;
}
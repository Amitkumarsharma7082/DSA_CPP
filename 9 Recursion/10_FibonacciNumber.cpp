#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int fib(int num) {
            // Base Condition 1 :
            if (num == 0) {
                return 0;
            }
            // Base Condition 2 :
            if (num == 1) {
                return 1;
            }

            return fib(num - 2) + fib(num - 1);
        }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int ans = sol.fib(n);
    cout << "Answer : " << ans << endl;
}
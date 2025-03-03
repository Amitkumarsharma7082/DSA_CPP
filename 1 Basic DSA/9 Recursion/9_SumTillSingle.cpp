#include<iostream>
using namespace std;

class Solution{
    public:
        int func(int num) {
            // Base condition
            if (num < 10) {
                return num;
            }

            return func(sum(num));
        }
    private:
        int sum(int N) {
            // Base condition
            if(N == 0) {
                return 0;
            }

            return N%10 + sum(N/10);
        }
};

int main() {
    Solution sol;
    int n; 
    cout << "Enter the Number : " << endl;

    cin >> n;

    int ans = sol.func(n);
    cout << "Sum of all into single digit : " << ans << endl;

}
#include<bits/stdc++.h>
using namespace std;

int NnumbersSum(int n) {
    //Base Condition
    if (n == 0) {
        return 0;
    }
    cout << n << endl;
    return n + NnumbersSum(n-1);
    
}

int main() {
    int n;
    cin >> n;
    int ans = NnumbersSum(n);
    cout << ans << endl;
}
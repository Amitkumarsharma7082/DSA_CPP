#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    //Base Condition
    if (n <= 1) {
        return 1;
    }
    cout << "N : " << n << endl;
    return n * factorial(n-1);
    
}

int main() {
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
}
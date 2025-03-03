#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int n) {
    int sum = 1;
    
    for (int i = 2; i*i <= n; i++) {
        cout << "i : " << i << " " << endl;
        if(n % i == 0) {
            sum = sum + i;
            cout << "Sum 1 : " << sum << " " << endl;
        }
        if (i != n/i) {
            sum = sum + n/i;
            cout << "Sum 2 : " << sum << " " << endl;
        }
        cout << "Final Sum : " << sum << endl;
    }
    if (sum == n) return true;
    return false;
}

int main() {
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    bool ans = checkPerfectNumber(n);
    if (ans) {
        cout << "is a perfect number" << endl;
    }
    else {
        cout << "is not perfect number" << endl;
    }
}
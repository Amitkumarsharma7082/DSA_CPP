#include<bits/stdc++.h>
using namespace std;

// T.C = O(sqrtN);
// S.C = O(1);

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // If a divisor is found, it's not prime
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    bool ans = isPrime(n);
    if(ans) {
        cout << "Number is Prime " << endl;
    }
    else {
        cout << "Number is not Prime " << endl;
    }
}
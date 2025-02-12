#include<bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int n) {
    if (n <= 1) return false;  // Edge case: 1 is not a perfect number
    
    int sum = 1;  // Start with 1, as 1 is a divisor of all numbers.
    
    for (int i = 2; i * i <= n; i++) {
        cout << "i 1 : " << i << endl;
        if (n % i == 0) {
            sum = sum + i;
            cout << "i 2 : " << i << endl;
            cout << "Sum 1 : " << sum << endl;
            int a = n / i;
            cout << "A : " << a << endl;
            if (i != a) {  // Avoid adding the square root twice if it's a perfect square.
                sum = sum + a;
                cout << "Sum 2 : " << sum << endl;
                cout << "i 3 : " << i << endl;
            }
        }
        cout << "Sum final : " << sum << endl;
    }
    
    return sum == n;  // Check if the sum of divisors equals the number itself
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool ans = checkPerfectNumber(n);
    if (ans) {
        cout << n << " is a perfect number" << endl;
    }
    else {
        cout << n << " is not a perfect number" << endl;
    }
}

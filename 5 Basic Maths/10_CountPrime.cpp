#include<bits/stdc++.h>
using namespace std;

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

int countPrime(int n) {
    int count = 0;

    for (int i = 2; i <= n; i++) {

        if(isPrime(i)){
            cout <<"i : " << i <<endl;
            count = count + 1;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    int ans = countPrime(n);
    cout << "Count Prime : " << ans << endl;
}
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i) {
    if (i*i >= n) return true;

    if (n % i == 0) return false;

    return isPrime(n, i+1);

}

int main() {
    int n; 
    cout << "Enter the value of n : "<< endl;
    cin >> n;

    int ans = isPrime(n, 2);
    if (ans == 1) {
        cout << "isPrime " << endl;
    }
    else {
        cout << "not Prime" << endl;
    }
}
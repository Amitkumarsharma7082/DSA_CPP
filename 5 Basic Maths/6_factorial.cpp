#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(1) : not using external space

int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    int i = 1;
    int num = 1;

    while (i <= n) {
        num = num * i;
        i++;
    }
    return num;
}

int main() {
    int n;
    cout << "Enter the number : " ;
    cin >> n;

    int num = factorial(n);
    cout << "Factorial : " << num << endl;
}
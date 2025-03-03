#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(log(base)10 num) :
// Space Complexity : O(1) : not using external space

int reverseNumber (int n) {
        int newNumber = 0;
        // formula : 0 * 10 + n % 10
        while (n > 0) {
            newNumber = newNumber * 10 + (n % 10);
            n = n / 10;
        }
        return newNumber;
}


int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int reverse = reverseNumber(n);
    cout << "Reverse : " << reverse << endl;
}
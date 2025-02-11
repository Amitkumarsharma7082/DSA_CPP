#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(log(base)10 num) :
// Space Complexity : O(1) : not using external space

int largestDigit(int n) {
    int largest = 0;

    while (n > 0) {
        int lastDigit = n%10;
        if (lastDigit > largest) {
        largest = lastDigit;
        }
        n = n / 10;
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int num = largestDigit(n);
    cout << "Largest digit in a number : "  << num << endl;
}
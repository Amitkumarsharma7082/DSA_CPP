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
bool isPalindrome (int num) {
    int newN = reverseNumber(num);
    return (num == newN);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int num = isPalindrome(n);
    if (num == 1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    
}
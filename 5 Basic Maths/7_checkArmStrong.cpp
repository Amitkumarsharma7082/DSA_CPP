#include<bits/stdc++.h>
using namespace std;
/*
isArmStrong Explaination :
    n = 153
    count the all digit : 3
    1^3 * 5^3 * 3^3 = 1 + 125 + 27
    n = 153 = 153 (true)
*/
bool isArmstrong(int n) {
    int sum = 0;
    int count = floor(log10(n)) + 1;
    // because in while loop n is 0(ends)
    int duplNum = n; // n is 0 in while loop so we use duplicate 
    while(n > 0) {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, count);
        n = n / 10;
    }
    return (duplNum == sum);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int ans = isArmstrong(n);
    if (ans == 1) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
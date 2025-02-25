#include<bits/stdc++.h>
using namespace std;

bool palindrome (vector<char>& c) {
    int l = 0;
    int r = c.size() - 1;

    while (l < r) {
        swap(c[l], c[r]);

        if (c[l] != c[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    vector<char> c = {'h', 'a', 'n', 'n', 'a', 'h'};

    if (palindromeCheck(c)) {
        cout << c << " is a palindrome." << endl;
    } else {
        cout << c << " is not a palindrome." << endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {

// Base case
    if (n == 0) {
        return 1;
    }
    int count = 0;
// condition to check > 0
    while (n > 0) {
        n = n / 10;
        count = count + 1;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number : " ;
    cin >> n;
    
    int co = countDigit(n);
    cout << "count : " << co << endl;
}
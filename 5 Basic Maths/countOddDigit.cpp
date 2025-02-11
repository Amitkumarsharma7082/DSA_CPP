#include<bits/stdc++.h>
using namespace std;

int countOddDigit(int n) {
        // Base case
        if (n == 0) {
            return 1;
        }
        // CountOddDigit : n%10 : lastDigit to check
        int count = 0;
        while (n > 0) {
            int lastDigit = n % 10;

            // it is odd
            if (lastDigit % 2 == 1) {
                count = count + 1;
            }
            n = n / 10;
        }
        return count;
}


int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int count = countOddDigit(n);
    cout << "count : " << count << endl;
}
#include<iostream>
using namespace std;

int main() {
    /*
    1
    01
    101
    0101
    10101
    */

int n;
cout << "Enter the value of n : " << endl;
cin >> n;

for(int i = 1; i <= n; i++ ) {
    for (int j = 1; j <= i; j++ ) {
        cout << "i = " << i << " and j = " << j << endl;
        int k = i + j;
        cout << "i + j = " << k << endl;
        int l = k % 2;
        cout << "(i + j) % 2 = " << l << endl;
        if (l == 0) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    cout << endl;
}

}
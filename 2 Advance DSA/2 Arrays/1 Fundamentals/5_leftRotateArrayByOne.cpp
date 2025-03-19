#include<bits/stdc++.h>
using namespace std;

void rotateArrayByOne(vector<int>& arr) {
    int n = arr.size();
    int temp = arr[0];
    for (int i = 0; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n - 1] = temp;
}

int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter arr : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    rotateArrayByOne(arr);
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
/*
Question :
Input: n=5, arr = [1,2,3,4,5]
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15
*/
#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];  // Declare an array of size n
    
    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = sum(arr, n);
    cout << "Answer : " << ans << endl;
}
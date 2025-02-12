/*
Input: n=5, array = [1,2,3,4,5]
Output: 3
Explanation: The three odd elements are (1,3,5).
*/

#include<bits/stdc++.h>
using namespace std;

int oddArray(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    cout << "Enter the number : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin>> arr[i];
    }

    int ans = oddArray(arr, n);
    cout << "Answer : " << ans << endl;
}
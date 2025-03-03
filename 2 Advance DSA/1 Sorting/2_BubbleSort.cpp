// Push to max element in the last
// do adjacent swap
// opposite to selection sort

// T.C. : O(N^2) // worst 
// Best : O(N) // if array is already sorted

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = n-1; i >= 1; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i-1; j++) { // why i - 1 
        // because j+1 and j compare last value is compare with garbage

        // Compare adjacent elements and swap them if they're in the wrong order
            if(arr[j] > arr[j+1]) {
                // if false don't swap
                // Adjacent Swap
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        cout << "runs\n";
        if (didSwap == 0) {
            break;
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    //Original Array :
    int arr[n];
    cout << "Original Array : ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n);

    cout << "Bubble Sort Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
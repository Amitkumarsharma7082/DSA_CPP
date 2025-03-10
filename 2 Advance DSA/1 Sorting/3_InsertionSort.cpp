#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 0; i <= n-1; i++) {
        int j = i;
// a[j-1] > a[j] always check with left and algorithm also said
        while(j > 0 && a[j-1] > a[j]) {
            // if they are not in correct order so swap
            swap(a[j-1], a[j]);
            j--;
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
    insertionSort(arr, n);

    cout << "Bubble Sort Array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
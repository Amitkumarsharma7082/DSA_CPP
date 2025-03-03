#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int mini = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap (arr[mini], arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter the Value : ";
    cin >> n;

    int arr[n];
    cout << "Original Array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Selection Sort Array : " << endl;
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
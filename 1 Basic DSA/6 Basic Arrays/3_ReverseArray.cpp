#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}
void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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

    reverseArray(arr, n);
    cout << "Reversed Array : ";
    printArray(arr, n);
}
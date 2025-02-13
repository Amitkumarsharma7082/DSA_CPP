#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n) {
    if (n <= 1) {
            return true;
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    // Function call to check if the array is sorted 
    bool sorted = arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
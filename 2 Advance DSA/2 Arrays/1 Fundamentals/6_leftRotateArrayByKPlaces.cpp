//! Burte Solution :
#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

// Store the value in temp 0 to k;
    vector<int> temp;

    for(int i=0; i < k; i++) {
        temp.push_back(arr[i]);
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }

    for(int i=0; i < k; i++) {
        arr[n-k+i] = temp[i];
    }

}

//* Print array : 
void printArray(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//! Optimal Solution :
/*
#include<bits/stdc++.h>
using namespace std;

//* Reverse the array
void reverseArray(vector<int>& arr, int left, int right) {

    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
//* Rotate Array 
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n-1);
    reverseArray(arr, 0, n-1);
}
//* Print Array
void printArray(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
*/

// Main Function 
int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    int k; 
    cout << "Enter the value of k : ";
    cin >> k;

    vector<int> arr(n);
    cout << "Enter arr : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, k);
    cout << "Reverse array : ";
    printArray(arr);
}
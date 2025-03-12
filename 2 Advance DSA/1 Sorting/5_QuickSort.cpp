#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int i = low;
    int j = high;
    //! DRY RUN 

    int pivot = arr[low];
    cout << "Pivot : " << pivot << endl;
     while(i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] > pivot && j >= low +1) {
            j++;
        }
        if (i <j) {
            swap(arr[i], arr[j]);
        }
     }
     swap(arr[low], arr[j]);
        return j;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high); 
    }
}

int main() {
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Orignal array : ";

    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];

    }
    quickSort(arr, 0, n-1);
    cout <<"Quick sort : " ;
    for (int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
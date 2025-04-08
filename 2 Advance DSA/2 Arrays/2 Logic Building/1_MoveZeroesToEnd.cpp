#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr) {
    int n = arr.size();

    for(int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// ! Burte force : 
/*
void moveZeroes(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp;
    for (int i = 0; i <= n-1; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    int nz = temp.size();
    for(int i = 0; i <= nz -1; i++) {
        arr[i] = temp[i];
    }
    
    for (int i = nz; i < n; i++) {
        //* Fill the rest with zeroes
        arr[i] = 0;
    }
}
*/

void moveZeroes(vector<int>& arr){
    int n = arr.size();
    int j = -1;

    for (int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            // because we find the position of j at zero
            j = i;
            break;
        }
    }

    if(j == -1) {
        return;
    }

    for(int i = j+1; i <= n-1; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            cout << "i in swap loop : " << i << endl;
            cout << "j in swap loop : " << j << endl;
            j++;
        }
    }

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

    moveZeroes(arr);
    cout << "Reverse array : ";
    printArray(arr);

}
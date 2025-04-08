#include<bits/stdc++.h>
using namespace std;

//! Optimal Approach
int removeDuplicate(vector<int>& arr) {
    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1; // i+1 because arr start from : 0 1 2
}


// int removeDuplicate(vector<int>& arr) {
//     // Take a set that store int element
//     set<int> st;

//     // insert element into set
//     for (auto i : arr) {
//         st.insert(arr);
//     };

//     // print the arr in set
//     cout << "Set elements: ";
//     for (auto num : st) {
//         cout << num << " ";
//     }
//     cout << endl;

//     int index = 0;
//     for(auto it : st) {
//         arr[index] = it;
//         index++;
//     }
    
//     return index;
// }


int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter arr : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }

    int indexCount = removeDuplicate(arr);
    cout << "Total Unique element in array : " << indexCount << endl;


    for (int i = 0; i < indexCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
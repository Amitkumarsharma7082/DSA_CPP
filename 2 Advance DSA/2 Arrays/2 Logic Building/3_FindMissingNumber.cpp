#include<bits/stdc++.h>
using namespace std;

//! Optimal Solution 1
//* array : 0 to n
int missingNumber(vector<int>& arr) {
    int n = arr.size();
    cout << "n : " << n << endl;
    int sum = (n * (n+1))/2;
    cout << "sum : "<< sum << endl;
    int s2 = 0;
    for (int i =0 ; i < n; i++) {
        cout << "comparison : " << i << " < " << n-1 << endl;
        s2+=arr[i];
    }
    cout << "s2 : " << s2 << endl;
    return (sum-s2);
}

//! Better Solution
// int missingNumber(vector<int>& arr) {
//     int n = arr.size();
//     vector<int> hasher(n + 1, 0);
//     for(int i = 0; i < n-1; i++) {
//         hasher[arr[i]] = 1;
//     }
//     for(int i = 1; i < n; i++) {
//         if(hasher[i] == 0)
//         return i;
//     }
//     return -1;
// }


//! Brute Force
// int missingNumber(vector<int>& arr) {
//     int n = arr.size();
// // this loop for counting number
//     for (int i = 0; i < n; i++) {
//         cout << "value of i : " << i << endl;
//         int flag = 0;
// // this loop for array
//         for (int j = 0; j < n-1; j++) {
//             cout << "j one : " << j << endl;
//             if (arr[j] == i) {
//                 cout << "j two : " << j << endl;
//                 flag = 1;
//                 break;
                
//             }
//         }
//         if (flag == 0) {
//             return i;
//         }
//     }
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

    int indexCount = missingNumber(arr);
    cout << "Missing number : " << indexCount << endl;

}
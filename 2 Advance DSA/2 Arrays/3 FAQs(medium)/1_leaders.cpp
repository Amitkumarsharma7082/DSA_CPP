#include<bits/stdc++.h>
using namespace std;

//! Brute Force Solution : T.C. -> O(N^2) & S.C. -> O(N)
// class Solution {
//     public :
//     vector<int> leaders(vector<int>& arr) {
//         int n = arr.size();
//         vector<int> ans;
//         for (int i = 0; i < n; i++) {
//             bool leader = true;
//             for (int j = i+1; j < n; j++) {
//                 if(arr[j] > arr[i]) {
//                     leader = false;
//                     break;
//                 }
//             }
//             if (leader == true) {
//                 ans.push_back(arr[i]);
//             }
//         }
//         // Return the leaders
//         return ans;
//     }
// };

//! Optimal Solution : T.C. -> O(N) + O(NlogN) & S.C. -> O(N)
class Solution {
    public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        int maxi = INT_MIN;
        for (int i = n - 1; i >= 0; i--) {
            if(arr[i] > maxi) {
                ans.push_back(arr[i]);
            }
            maxi = max(maxi, arr[i]);
        }
        // reverse of the array : 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    vector<int>arr;
    int n, val;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    Solution finder;
    vector<int> newArr = finder.leaders(arr);
    cout << "Leaders in the array are : ";
    for (int i = 0; i < newArr.size(); i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;
    return 0;

}
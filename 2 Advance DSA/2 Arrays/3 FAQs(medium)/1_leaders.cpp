//! Brute Force Solution : 
#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            bool leader = true;
            for (int j = i+1; j < n; j++) {
                if(arr[j] > arr[i]) {
                    leader = false;
                    break;
                }
            }
            if (leader == true) {
                ans.push_back(arr[i]);
            }
        }
        // Return the leaders
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
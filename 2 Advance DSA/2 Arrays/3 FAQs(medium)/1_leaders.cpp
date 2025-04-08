#include<bits/stdc++.h>
using namespace std;

class Solution {
 public : 
 vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leadArr;
    for (int i = 0; i < n; i++) {
        int leader = true; 
        for (int j = i+1; j < n; j ++) {
            if (arr[j] > arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader == true) {
            leadArr.push_back(arr[i]);
        }
    }
    return leadArr;
 }
};

int main() {
    vector<int> arr;
    
    int n, val;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter an array : ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        arr.push_back(val);
    }
    

    Solution finder;

    vector<int> inter = finder.leaders(arr);
    if (inter.empty()) {
        cout << "No elements found.";
    }
    for (int i = 0; i < inter.size(); i++) {
        cout << inter[i] << " ";
    }
    cout << endl;

    return 0;
}
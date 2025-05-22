#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to sort the array
    void sortZeroOneTwo(vector<int>& arr) {
        // Sort the vector using std::sort
        sort(arr.begin(), arr.end());
    }
};
int main() {
    int n, val;
    vector<int> arr;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Enter the arr : ";
    for (int i = 0; i < n; i++) {
      cin >> val;
      arr.push_back(val);
    }
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.sortZeroOneTwo(arr);
    
    //print the array elements
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
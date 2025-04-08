#include<bits/stdc++.h>
using namespace std;

class Solution {
 public : 
 vector <int> intersectionArray(vector<int>& a, vector<int>& b) {
    int i = 0;
    int j = 0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> intersectionArr;
    // if (a.empty() || b.empty()) return {};

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (b[j] < a[i]) {
            j++;
        }
        else {
            intersectionArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersectionArr;
 }
};

int main() {
    vector<int> arr1;
    vector<int> arr2;
    int n1, n2, val;
    cout << "Enter the value of n1 : ";
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> val;
        arr1.push_back(val);
    }
    cout << "Enter the value of n2 : ";
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> val;
        arr2.push_back(val);
    }

    Solution finder;

    vector<int> inter = finder.intersectionArray(arr1, arr2);
    if (inter.empty()) {
        cout << "No common elements found.";
    }
    for (int i = 0; i < inter.size(); i++) {
        cout << inter[i] << " ";
    }
    cout << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the arr : " ;
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }

    int largest = largestElement(nums);

    cout << largest << endl;
    return 0; 
}
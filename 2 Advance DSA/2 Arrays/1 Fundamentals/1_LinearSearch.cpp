#include<bits/stdc++.h>
using namespace std;

/*

    // Given array : {2, 3, 4, 5, 3};
    // target = 3;
    output : 1 [array start from 0 to n-1];
    explanation The first occurence of 3 in nums is at index 1

*/
int linearSearch(vector<int>& nums, int n, int target) {
    for (int i = 0; i <= n-1; i++) {
        if(nums[i] == target) {
            return i;
            break;
        }
        cout << "runs\n";
    }
    return -1;
}


int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Given Array : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Target : ";
    cin >> target;

    int findValue = linearSearch(arr, n, target);
    cout << "The first occurence of " << target << " in array is at index " << findValue << endl;

}
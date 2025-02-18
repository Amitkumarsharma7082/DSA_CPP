#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // function start here:
    int mostFrequentElement(vector<int>& nums) {
        // Code start here:

        /*
            Optimize Solution :
            T.C. = O(N)
            S.C. = O(maxi)
        */

        // Find the maximum element in the vector
        int maxi = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }

        // Create a hash array to store counts of elements
        int hash[maxi + 1] = {0};

        // Count the frequency of each element in the input vector
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        // Find the element with the highest frequency
        int maxCount = 0;
        int ele = -1;
        for (int i = 0; i <= maxi; i++) {
            if (hash[i] > maxCount) {
                maxCount = hash[i];
                ele = i;
            }
        }

        return ele;
    }
};

int main() {
    vector<int> nums = {4, 4, 5, 5, 6};

    /* Creating an instance of 
    Solution class */
    Solution sol; 
    
    /* Function call to get the
    highest occurring element in array nums */
    int ans = sol.mostFrequentElement(nums);
    
    cout << "The highest occurring element in the array is: " << ans;
    
    return 0;
}

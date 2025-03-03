#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
    public :
        int arraySum(vector<int>& nums) {
            return func(nums, 0);
        }
    private :
        int func(vector<int>& nums, int i) {
            // Base condition
            // (0 > 2) 
            if (i > nums.size()-1) {
                return 0;
            }
            return nums[i] + func(nums, i+1);
        }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};   
    int result = solution.arraySum(nums); 
    cout << "Sum of array elements : " << result << endl;     
    return 0;
}

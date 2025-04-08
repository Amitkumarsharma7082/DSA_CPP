#include<bits/stdc++.h>
using namespace std;

class Solution {
    public :
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        //* step 1 : Take a set
        set<int> st;
        for (int i = 0; i < n1; i++) {
            st.insert(nums1[i]);
        }
        for (int i = 0; i < n2; i++) {
            st.insert(nums2[i]);
        }

        //* Step 2 : Take a union array
        vector<int> Union;
        for (auto it : st) {
            Union.push_back(it);
        }
        return Union;
    }
};

int main() {
    vector<int> nums1;
    int n;
    int val;
    cout << "Enter the n : " << endl;
    cin >> n;
    cout << "Enter the array : " << " "; 
    for (int i = 0; i < n; i++) {
        cin >> val;
        nums1.push_back(val);
    }
    
    vector<int> nums2;
    int n2;
    cout << "Enter the n2 : " << endl;
    cin >> n2;
    cout << "Enter the array : " << " ";
    for (int i = 0; i < n2; i++) {
        cin >> val;
        nums2.push_back(val);
    }
    
    // Create an instance of the Solution class
    Solution finder;
    
    /* Get the union of nums1 and 
    nums2 using the class method*/
    vector<int> Union = finder.unionArray(nums1, nums2);
    
    // Output the result
    cout << "Union of nums1 and nums2 is:" << endl;
    for (int i = 0; i < Union.size(); i++) {
        cout << Union[i] << " ";
    }
    cout << endl;

    return 0;
}
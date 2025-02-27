#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Method to find the longest common prefix in a vector of strings
    string longestCommonPrefix(vector<string>& str) {
        // If the input array is empty, return an empty string
        if (str.empty()) return "";

        // Sort the vector to get the lexicographically smallest and largest strings
        sort(str.begin(), str.end());

        // Get the first and last string in the sorted list
        string first = str[0];
        string last = str[str.size() - 1];

        // Initialize the result as an empty string
        string ans = "";

        // Compare characters of the first and last strings
        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] != last[i]) {
                break;  // Stop if characters don't match
            }
            ans += first[i];  // Append the common character
        }

        return ans;  // Return the longest common prefix
    }
};

int main() {
    Solution solution;
    vector<string> input = {"flower", "flow", "flight"};
    string result = solution.longestCommonPrefix(input);
    cout << "Longest Common Prefix: " << result << endl; // Output: "fl"
    return 0;
}

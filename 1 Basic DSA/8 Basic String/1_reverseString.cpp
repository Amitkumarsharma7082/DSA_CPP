// #include<bits/stdc++.h>
// using namespace std; 

// class Solution {
// public:
//     // Function reverse 
//     void reverseString(vector<char>& s) {
//         // brute force
//         int n = s.size();
//         cout << "N value : " << n << endl;
//         vector<char> dupS(n);
// /*
//         0 -> 4
//         1 -> 3
//         2 -> 2
//         3 -> 1
//         4 -> 0
//        (i) -> (n-i-1)

// */
//         for (int i = 0; i < n; i++) {
//             dupS[n-i-1] = s[i]; 
//         }
//         for (int i = 0; i < n; i++) {
//             dupS[i] = s[i];
//         }
//     return;
//     }
// }

// int main() {
//     vector<char> s = {'h', 'e', 'l', 'l', 'o'};
//     Solution sol;
    
//     // Function call to reverse the string
//     sol.reverseString(s);

//     for (char c : s) {
//         cout << c;
//     }
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& c) {
    int left = 0;
    int right = c.size() - 1;

    while (left < right) {
        swap(c[left], c[right]);
        left++;
        right--;
    }
}

int main() {
    vector<char> s = {'b', 'y', 'e'};
    reverseString(s);

    for (char c : s) {
        cout << c;
    }
    return 0;
}

// eyb

// === Code Execution Successful ===
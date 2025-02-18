#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking Input n: 
    int n;
    cin >> n;

    // Declare a vector to store the array elements
    vector<int> arr(n);

    // Taking Input array: 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the maximum element in the array
    int maxi = *max_element(arr.begin(), arr.end());

    // Create a hash array to count the frequency of elements
    vector<int> hash(maxi + 1, 0);

    // Populate the hash array with frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Example: Handling queries (4 queries in this case)
    int Q = 4;
    while (Q--) {
        int query;
        cin >> query;

        // Output the frequency of the query value
        if (query <= maxi) {
            cout << "Frequency of " << query << " is: " << hash[query] << endl;
        } else {
            cout << "Value out of range." << endl;
        }
    }

    return 0;
}

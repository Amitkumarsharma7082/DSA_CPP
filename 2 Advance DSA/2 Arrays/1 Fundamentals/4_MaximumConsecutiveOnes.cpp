#include<bits/stdc++.h>
using namespace std;

int maxCon(vector<int>& arr) {
    int n = arr.size();
    int maxi = 0;
    int count = 0;

    for (int i = 0; i <=n-1; i++) {
        if(arr[i] == 1) {
            count++;
            maxi = max(maxi, count);
        }
        
        else {
            count = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter arr : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    int value = maxCon(arr);
    cout << "Maximum consecutive ones : " << value << endl;
}
/*
#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int n, int num) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count ++;
        }
    }
    return count;
}

int main() {
    
    // input : size of arr
    //         arr[]
    //         query
    //         numbers
   
   // Size of array
   int n;
   cout << "Enter the number : ";
   cin >> n;

   // Array
   int arr[n];
   cout << "Enter array : ";
   for (int i = 0; i < n; i++) {
    cin >> arr[i];
   }

   // Query
   int q;
   cout << "Enter number of query :";
   cin >> q;

   while(q--) {
    int num;
    cin >> num;
    
    int ans = find(arr, n, num);
    cout << "How many time this " << num  << " appear : " << ans << endl;
   }

} 
*/







#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int n, int num) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count ++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
// we decleare maxi because hash arr + 1
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    int hash[maxi + 1] = {0}; // all element are zero 

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++; // hash[6] : [0]>[1]
    }
    int q;
    cin >> q;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > maxi) {
            cout << "0" << endl;
        }
        else {
            int ans = find(arr, n, num);
            cout << "Answer : " << ans << endl;
        }

    }

}
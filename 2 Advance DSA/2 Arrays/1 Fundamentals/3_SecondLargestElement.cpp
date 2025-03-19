/*
//* Brute Force Solution : 

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int largest = arr[n-1];
    int secondLar = -1;
    for(int i = n-2; i >=0; i--) {
        if (arr[i] != largest) {
            secondLar = arr[i];
        }
    }
    return secondLar;
}

int main() {
    int n;
    cout << "Enter the value : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the value : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    int value = secondLargest(arr);
    cout << "Second Largest Element : " << value << endl;
}
*/


/*

//*Better Solution  : 

#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    int secondL = -1;
    for(int i = 0; i < nums.size(); i ++) {
        if (nums[i] > secondL && nums[i] != largest) {
            secondL = nums[i];
        }
    }
    return secondL;
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

    int largest = largestElement(arr);

    cout << "Second Largest value in arr : " << largest << endl;
    return 0; 
}
*/

/*
//* Optimal Solution :
*/

#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr) {
    int n = arr.size();
    // Base case
    if(n<2) {
        return -1;
    }

    int largest = arr[0];
    int secondLargest = -1;
    for(int i = 0; i <= n-1; i++) {
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {

    int n ; 
    cout << "Enter the value of n : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the arr : ";
    for (int i = 0; i <= n-1; i++) {
        cin >> arr[i];
    }
    int value = secondLargest(arr);
    cout << "Second largest element : " << value << endl;
}
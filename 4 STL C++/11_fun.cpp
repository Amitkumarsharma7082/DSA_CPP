#include<bits/stdc++.h>
using namespace std;

void expalinSort() {
    int arr[5] = {6, 1, 0, 2, 5};
    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec;
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);

    sort(vec.begin(), vec.end());
    for (auto it : vec) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    expalinSort();
}
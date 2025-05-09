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

// accumulate
void explainAccumulate() {
    int arr[5] = {6, 2, 1, 7, 0}; 
    // submition of arr:
    // arr, arr + 5, 0 > 0 means that start from 0 like also : 1 
    // if we start with 1 + all array element
    int sum = 0;
    cout << accumulate(arr, arr + 5, sum) << " " << endl;// ouput : 16 (6+2+1+7+0 + (0))
 
}

// count
void explainCount() {
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 1; // count how many 1's
    cout << count(arr, arr + 5, num) << endl; // ouput: 2  > {6, 2, 1, 1, 0};
}

// find
void explainFind() {
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 8;

    /*
In this why use find because in this array
find and that point to this array 
and returns first find : 1 from array. 
    */
    auto it = find(arr, arr + 5, num);
    if (it == arr + 5) { // point to the last iterator
        cout << "Not Found" << endl;
    }
    // cout << *it << " " << endl; // output : 1
    // cout << find(arr, arr+5 , num) << endl; // output : 0x7ff7b7b4d178
}

// next_permutation
void explainNextPermutation() {
    string str = "bca";
    // do this while (condition)
    do {
        cout << str << " "; // ouput : abc acb bac bca cab cba
        // if start with bca : so only : bca cab cba give me the next permutation in
        // order
    } while (next_permutation(str.begin(), str.end()));
}

// prev_permutation
void explainPrevPermutation() {
    string str = "cba";
    // do this while (condition)
    do {
        cout << str << " "; // ouput : cba cab bca bac acb abc
        // if start with cba : start with cba to first abc; 
    } while (prev_permutation(str.begin(), str.end()));
}


// max_element
void explainMaxElement() {
    int arr[5] = {6, 2, 1, 7, 0};
    auto it = min_element(arr, arr+5);
    cout << *it << " " << endl; // output : 7(max element)
}

// reverse
void explainReverse() {
    int arr[5] = {6, 2, 1, 7, 0};
    reverse(arr, arr+5);
    
    for (auto it : arr) {
        cout << it << " "; // ouput : 0 7 1 2 6
    }
}

/*
el1, el2
tells true if el1 is before el2
tells false if el1 has to be after el2
*/
bool internalComparator(int el1, int el2) {
    if (el1 < el2) return false;
    return true;
}
// Comparator
void explainComparator() {
    // think sort the array 1st
    int arr[4] = {5, 6, 1, 2};
    sort(arr, arr+4, internalComparator); // 6 5 2 1 

    for (auto i : arr) {
        cout << i << " "; // ouput : 1 2 5 6
    }
    cout << endl;

    // assume element 1 : 5 and element 2 : 6
    // checking : 5 is greater than 6 or not
    // there is internal comparator 


    /*
    tells the internal comparator to sort and say it
    reverse the array
    bool compartor
    */
}

int main() {
    // expalinSort();
    // explainAccumulate();
    // explainCount();
    // explainFind();
    // explainNextPermutation();
    // explainPrevPermutation();
    // explainMaxElement();
    // explainReverse();
    explainComparator();
}